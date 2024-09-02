#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

//função para posicionar o cursor em um determinado ponto 
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main () {
	int idade;
  float salario;
  char sexo;
do {
    gotoxy(35, 10);
    printf("      ");
    gotoxy(35,10);
    scanf("%d", &idade);
    if (idade <= 17 )
	{
    gotoxy(07,23);
     printf(" idade digitada inapropriada...:  ");
      getch();
      gotoxy (07,23);
      printf("                           ");
	}
    } while (idade <= 17);
      do {
     gotoxy(35,12);
     printf("       ");
    gotoxy(35, 12);
    scanf("%f", &salario);
    if(salario < 1200 ) {

	gotoxy (07,23);
	printf (" valor do salário inválido...: ");
	getch();
	gotoxy(07,23);
	printf(".                      ");

	}
 } while  (salario  < 1200);

return 0;

}
