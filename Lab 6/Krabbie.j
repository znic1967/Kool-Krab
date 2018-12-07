.class public Krabbie
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;

; intg

.field private static krustykrab_g I

; intf

.field private static krustykrab_f I

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
	goto krustykrab_end
krustykrab:
	astore_1

; intf=40;

	ldc	40
	putstatic	Krabbie/krustykrab_f I

; f=g+f;

	getstatic	Krabbie/krustykrab_g I
	getstatic	Krabbie/krustykrab_f I
	iadd
	putstatic	Krabbie/krustykrab_f I

; Spitoutf;

	getstatic	Krabbie/krustykrab_f I
	ret 1
krustykrab_end:

; inta=2;

	ldc	2
	putstatic	Krabbie/a I

; intb=44;

	ldc	44
	putstatic	Krabbie/b I

; charc='K';

	ldc	75
	putstatic	Krabbie/c C

; b=krustykrab(a);

	getstatic	Krabbie/a I
	putstatic	Krabbie/krustykrab_g I
	jsr krustykrab
	putstatic	Krabbie/b I

	getstatic     Krabbie/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
