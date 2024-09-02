/*Autor.....: Matheus Moreira
Data........: 28/08/2024
Objetivo....: Criar a tela Padrão*/

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
    
    //mostra os dados a serem lidos
    gotoxy(10, 10);
    printf("Digite a Idade.........: ");
    gotoxy(10, 12);
    printf("Digite o seu Salario...: ");
    gotoxy(10, 14);
    printf("Qual seu sexo?.........: ");
    
    //recee os valores
    gotoxy(35, 10);
    scanf("%d", &idade);

    gotoxy(35, 12);
    scanf("%f", &salario);

    //le e valida a digitção do sexo
    do {
        gotoxy(35, 14);
        printf("      ");
        gotoxy(35, 14);
        scanf(" %c", &sexo );
        if (sexo != 'M' && sexo != 'F')
        {
           gotoxy(07, 23);
           printf("Sexo Invalido. Tente Novamente.");
           getch();
           gotoxy(07, 23);
           printf("                                ");
        
        }
        }  while (sexo != 'M' && sexo != 'F');

    return 0;
 }