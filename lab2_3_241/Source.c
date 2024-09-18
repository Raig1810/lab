#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n\t%3d\n\t%d\n\t_______\nОтвет:\n\t%+08.3f", 2, 331, 2. / 331);
}
