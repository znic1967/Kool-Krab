.class public Krabbie
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; intbob

.field private static bob I

; intpat

.field private static pat I

; charkrabs

.field private static krabs C

; charplankton

.field private static plankton C

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

; intbob=0;

	ldc	0
	putstatic	Krabbie/bob I

; intpat=12;

	ldc	12
	putstatic	Krabbie/pat I

; charkrabs='K';

	ldc	75
	putstatic	Krabbie/krabs C

; charplankton='P';

	ldc	80
	putstatic	Krabbie/plankton C

; IsMayo(krabs==plankton){pat=bob;}NotMayo{bob=pat;}

Label_0:
	getstatic	Krabbie/krabs C
	getstatic	Krabbie/plankton C
	if_icmpeq Label_1

; bob=pat;

	getstatic	Krabbie/pat I
	putstatic	Krabbie/bob I
	goto Label_2
Label_1:

; pat=bob;

	getstatic	Krabbie/bob I
	putstatic	Krabbie/pat I
Label_2:

; Printingpress(bob);

	getstatic	Krabbie/bob I
		putstatic	Krabbie/bob I
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "bob = %d\n"
		iconst_1	
		anewarray	java/lang/Object
		dup
		iconst_0
		getstatic	Krabbie/bob I
		invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
		aastore
		invokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

; Printingpress("Thank you for visiting Bikini Bottom");

	; Assignment
		getstatic	java/lang/System/out Ljava/io/PrintStream;
		ldc "Thank you for visiting Bikini Bottom"

		invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V

	getstatic     Krabbie/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
