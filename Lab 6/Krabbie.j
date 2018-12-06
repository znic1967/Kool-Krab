.class public Krabbie
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; inta=40

.field private static a I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        Krabbie/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        Krabbie/_standardIn LPascalTextIn;

; inta=40;

	ldc	40
	putstatic	Krabbie/a I

; Printingpress("Bitttch");

	; Assignment
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Bitttch"

		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

	getstatic     Krabbie/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
