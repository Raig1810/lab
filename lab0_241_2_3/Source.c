#include<stdlib.h>
#include<locale.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("*******************************************");
	puts("*                                         *");
	puts("* ����: ���������� ����������� ���������� *");
	puts("*                                         *");
	puts("*     �������� �������� �.�               *");
	puts("*                                         *");
	puts("*******************************************");
}
void date()
{
	puts("              ________                     ________          ________       ________");
	puts("     //||   ||        ||          //||   ||        ||      ||        ||   ||");
	puts("    // ||   ||        ||         // ||   ||        ||      ||        ||   ||");
	puts("   //  ||   ||        ||        //  ||   ||        ||      ||        ||   ||");
	puts("  //   ||   ||        ||       //   ||   ||        ||      ||        ||   ||");
	puts(" //    ||     ________        //    ||   ||        ||      ||        ||     ________");
	puts("       ||   ||        ||            ||   ||        ||      ||        ||   ||        ||");
	puts("       ||   ||        ||            ||   ||        ||      ||        ||   ||        ||");
	puts("       ||   ||        ||            ||   ||        ||      ||        ||   ||        ||");
	puts("       ||   ||        ||            ||   ||        ||      ||        ||   ||        ||");
	puts("       ||     ________              ||     ________          ________       ________");
}
void main()
{
	name();
	date();
}