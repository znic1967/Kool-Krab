/**
 * <h1>CPPSpecialSymbolToken</h1>
 *
 * <p> CPP special symbol tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "CPPSpecialSymbolToken.h"

#include "../CPPError.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::CPP;

CPPSpecialSymbolToken::CPPSpecialSymbolToken(Source *source) throw (string)
    : CPPToken(source)
{
    extract();
}

void CPPSpecialSymbolToken::extract() throw (string)
{
    char current_ch = current_char();
    bool good_symbol = true;

    text = current_ch;

    switch (current_ch)
    {
        // Single-character special symbols.

        case ';': case '\'': case '(':  case')':
        case '[': case ']' : case '{':  case '}':  case',':
        case '~': case '@' : case'?' :  case '"':
        {
            next_char();  // consume character
            break;
        }

        // : or :=
        case ':':
        {
            current_ch = next_char();  // consume ':';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }

            break;
        }
        // ^ or ^=
        case '^':
                {
                    current_ch = next_char();  // consume '^';

                    if (current_ch == '=')
                    {
                        text += current_ch;
                        next_char();  // consume '='
                    }

                    break;
                }

        // ! or !=
        case '!':
        {
        	current_ch = next_char();  // consume '!';

        	if (current_ch == '=')
        	{
        		text += current_ch;
        		next_char();  // consume '='
        	}

        	break;
        }
        // = or ==
        case '=':
                 {
                	 current_ch = next_char();  // consume '^';

                	 if (current_ch == '=')
                	   {
                		 text += current_ch;
                		 next_char();  // consume '='
                	   }
                           break;
                       }
        // % or %=
        case '%':
        {
              	  current_ch = next_char();  // consume '%';

              	  if (current_ch == '=')
              	  {
              		  text += current_ch;
              		  next_char();  // consume '='
              	  }
              	  break;
        }


        // < or <= or <> or << or <<=
        case '<':
        {
            current_ch = next_char();  // consume '<';

            if (current_ch == '=')
            {
                text += current_ch;
                next_char();  // consume '='
            }
            else if (current_ch == '>')
            {
                text += current_ch;
                next_char();  // consume '>'
            }
            else if (current_ch=='<'){ // for <<
            	text+=current_ch;
            	next_char();
            	 current_ch = next_char();
            	 if(current_ch=='='){  // for <<=
            		 text+=current_ch;
            		 next_char();
            	 }
            }
            break;
        }

        // > or >= or >> or >>=
        case '>':
        {
            current_ch = next_char();  // consume '>';

            if (current_ch == '=')// >=
            {
                text += current_ch;
                next_char();  // consume '='
            }
            else if( current_ch=='>'){ // >>
            	text+= current_ch;
            	next_char();
            	current_ch=next_char();

            	if(current_ch=='='){ // >>=
            		text+= current_ch;
            		next_char();
            	}
            }

            break;
        }

        // . or ..
        case '.':
        {
            current_ch = next_char();  // consume '.';

            if (current_ch == '.')
            {
                text += current_ch;
                next_char();  // consume '.'
            }

            break;
        }

        // + or ++ or +=
        case '+':
        {
        	current_ch=next_char(); // consumes +

        	if(current_ch=='+'){
        		text+=current_ch;
        		next_char(); // consumes '+'
        	}
        	else if(current_ch=='='){
        		text+=current_ch;
        		next_char(); // consumes =
        	}

        	break;
        }
        // - or -- or -=
        case '-':
                {
                	current_ch=next_char(); // consumes -

                	if(current_ch=='-'){
                		text+=current_ch;
                		next_char(); // consumes '-'
                	}
                	else if( current_ch=='='){
                		text+=current_ch;
                		next_char(); // consumes '='
                	}

                	break;
                }

        // * or *= or */
        case '*':
               {
                   current_ch = next_char();  // consume '*';

                   if (current_ch == '=')
                   {
                       text += current_ch;
                       next_char();  // consume '*'
                   }
                   else if (current_ch=='/'){
                	   text+=current_ch;
                	   next_char(); // comsume '/'
                   }

                   break;
               }
        // / or // or /*
        case '/':
               {
               	current_ch=next_char(); // consumes /

               	if(current_ch=='/'){
               		text+=current_ch;
               		next_char(); // consumes '/'
               	}
               	else if(current_ch=='*'){
               		text+=current_ch;
               		next_char(); // consumes *
               	}

               	break;
               }
         // | or || or |=
        case '|':
             {
                 current_ch = next_char();  // consume '|';
                    if (current_ch == '|')
                   {
                      text += current_ch;
                      next_char();  // consume '*'
                          }
                    else if (current_ch=='='){
                    	text+=current_ch;
                    	next_char(); // comsume '|'
                          }

                          break;
                      }
       // & or && or &=
        case '&':
                      {
                          current_ch = next_char();  // consume '&';

                          if (current_ch == '&')
                          {
                              text += current_ch;
                              next_char();  // consume '&'
                          }
                          else if (current_ch=='='){
                       	   text+=current_ch;
                       	   next_char(); // consume '='
                          }

                          break;
                      }


        default:
        {
            next_char();  // consume bad character
            type = (TokenType) (PT_ERROR);
            value = (int) INVALID_CHARACTER;
            good_symbol = false;
        }
    }

    // Set the type if it wasn't an error.
    if (good_symbol) {
        type = (TokenType) (CPPToken::SPECIAL_SYMBOLS[text]);
    }
}

}}}}  // namespace wci::frontend::CPP::tokens

