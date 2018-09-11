/**
 * <h1>Pascal</h1>
 *
 * <p>Compile or interpret a Pascal source program.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Pascal.h"
#include "wci/frontend/Parser.h"
#include "wci/frontend/Scanner.h"
#include "wci/frontend/Source.h"
#include "wci/frontend/FrontendFactory.h"
#include "wci/intermediate/SymTab.h"
#include "wci/intermediate/ICode.h"
#include "wci/backend/Backend.h"
#include "wci/backend/BackendFactory.h"
#include "wci/message/Message.h"
#include "wci/message/MessageListener.h"

using namespace std;
using namespace wci::frontend;
using namespace wci::intermediate;
using namespace wci::backend;
using namespace wci::message;

const string FLAGS = "[-ix]";
const string USAGE =
    "Usage: Pascal execute|compile " + FLAGS + " <source file path>";

/**
 * The main method.
 * @param args command-line arguments: "compile" or "execute" followed by
 *             optional flags followed by the source file path.
 */
int main(int argc, char *args[])
{
    try
    {
        // Operation.
        string operation = args[1];
        if ((operation != "compile") && (operation != "execute"))
        {
            throw USAGE;
        }

        // Flags.
        string flags = "";
        int i = 1;
        while ((++i < argc) && (args[i][0] == '-'))
        {
            flags += string(args[i]).substr(1);
        }

        // Source path.
        if (i < argc) {
            string path = args[i];
            Pascal(operation, path, flags);
        }
        else {
            throw string("Missing source file.");
        }
    }
    catch (string& msg)
    {
        cout << "***** ERROR: " << msg << endl;
    }

    return 0;
}

Pascal::Pascal(string operation, string file_path, string flags)
    throw (string)
{
    ifstream input;
    input.open(file_path);
    if (input.fail())
    {
        throw string("Failed to open source file " + file_path);
    }

    source = new Source(input);
    source->add_message_listener(this);

    parser = FrontendFactory::create_parser("Pascal", "top-down", source);
    parser->add_message_listener(this);
    parser->parse();

    source->close();

    symtab = parser->get_symtab();
    icode = parser->get_icode();

    backend = BackendFactory::create_backend(operation);
    backend->add_message_listener(this);
    backend->process(icode, symtab);
}

Pascal::~Pascal()
{
    if (parser  != nullptr) delete parser;
    if (source  != nullptr) delete source;
    if (icode   != nullptr) delete icode;
    if (symtab  != nullptr) delete symtab;
    if (backend != nullptr) delete backend;
}

const string Pascal::SOURCE_LINE_FORMAT = "%03d %s\n";

const string Pascal::PARSER_SUMMARY_FORMAT =
    string("\n%20d source lines.\n%20d syntax errors.\n") +
    string("%20.2f seconds total parsing time.\n");

const string Pascal::INTERPRETER_SUMMARY_FORMAT =
    string("\n%20d statements executed.\n") +
    string("%20d runtime errors.\n") +
    string("%20.2f seconds total execution time.\n");

const string Pascal::COMPILER_SUMMARY_FORMAT =
    string("\n%20d instructions generated.\n") +
    string("%20.2f seconds total code generation time.\n");

/**
 * Listen for messages.
 * @param message the received message.
 */
void Pascal::message_received(Message& message)
{
    MessageType type = message.get_type();

    switch (type)
    {
        case SOURCE_LINE:
        {
            string line_number = message[LINE_NUMBER];
            string line_text = message[LINE_TEXT];

            printf(SOURCE_LINE_FORMAT.c_str(),
                   stoi(line_number), line_text.c_str());
            break;
        }

        case PARSER_SUMMARY:
        {
            string line_count = message[LINE_COUNT];
            string error_count = message[ERROR_COUNT];
            string elapsed_time = message[ELAPSED_TIME];

            printf(PARSER_SUMMARY_FORMAT.c_str(),
                   stoi(line_count), stoi(error_count),
                   stof(elapsed_time));
            break;
        }

        case INTERPRETER_SUMMARY:
        {
            string execution_count = message[EXECUTION_COUNT];
            string error_count = message[ERROR_COUNT];
            string elapsed_time = message[ELAPSED_TIME];

            printf(INTERPRETER_SUMMARY_FORMAT.c_str(),
                   stoi(execution_count), stoi(error_count),
                   stof(elapsed_time));
            break;
        }

        case COMPILER_SUMMARY:
        {
            string instruction_count = message[INSTRUCTION_COUNT];
            string elapsed_time = message[ELAPSED_TIME];

            printf(COMPILER_SUMMARY_FORMAT.c_str(),
                   stoi(instruction_count), stof(elapsed_time));
            break;
        }

        default: break;
    }
}
