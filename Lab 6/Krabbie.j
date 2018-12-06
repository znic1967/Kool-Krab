.class public Krabbie
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; inta

.field private static a I

; intb

.field private static b I

; charc

.field private static c C

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

; inta=2;

	ldc	2
	putstatic	Krabbie/a I

; intb=4;

	ldc	4
	putstatic	Krabbie/b I

; charc='K';

	ldc	75
	putstatic	Krabbie/c C

; Bringit{IsMayo(a<b){a=a+2;}NotMayo{a=a*b;}Printingpress(a);}Aroundtown(a<30)

Label_0:

; IsMayo(a<b){a=a+2;}NotMayo{a=a*b;}

Label_1:
	getstatic	Krabbie/a I
	getstatic	Krabbie/b I
	if_icmplt Label_2

; a=a*b;

	getstatic	Krabbie/a I
	getstatic	Krabbie/b I
	imul
	putstatic	Krabbie/a I
	goto Label_3
Label_2:

; a=a+2;

	getstatic	Krabbie/a I
	ldc	2
	iadd
	putstatic	Krabbie/a I
Label_3:

; Printingpress(a);

	getstatic	Krabbie/a I
		putstatic	Krabbie/a I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "a = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	Krabbie/a I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
	getstatic	Krabbie/a I
	ldc	30
	if_icmplt Label_0

	getstatic     Krabbie/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
