.class public Krabbie
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; inta=2

.field private static a I

; intb=4

.field private static b I

; charc='K'

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

; intb=4;

	ldc	4

; charc='K';


; Bringit{IsMayo(a<b){a=a+2;}NotMayo{a=a*b;}}Aroundtown(a<30)

Label_ :
Label_:

; IsMayo(a<b){a=a+2;}NotMayo{a=a*b;}


; a=a+2;

	getstatic	Krabbie/a I
	ldc	2
	iadd
	putstatic	Krabbie/a I

; a=a*b;

	getstatic	Krabbie/a I
	getstatic	Krabbie/b I
	imul
	putstatic	Krabbie/a I

; a=a*b;

	getstatic	Krabbie/a I
	getstatic	Krabbie/b I
	imul
	putstatic	Krabbie/a I
	goto Label_
Label_:

; a=a+2;

	getstatic	Krabbie/a I
	ldc	2
	iadd
	putstatic	Krabbie/a I
	goto Label_
Label_:

; a=a*b;

	getstatic	Krabbie/a I
	getstatic	Krabbie/b I
	imul
	putstatic	Krabbie/a I
	goto Label_
Label_:
	getstatic	Krabbie/a I
	ldc	30
	if_icmplt Label_
	gotoLabel_ :
	gotoLabel_:

	getstatic     Krabbie/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
