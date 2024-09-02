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
    char nome[10];
    char facul[10];
    char curso[5];
    int semestre;

    gotoxy(74, 01);
    printf("Meu primeiro programa");
    gotoxy(40, 12);
    printf("Escreva seu nome..: ");
    scanf("%s", &nome);
    gotoxy(74, 24);
    printf("Qual sua faculdade?..: ");
    scanf("%s", &facul);
    printf("Qual seu curso?..: ");
    scanf("%s", &curso);
    gotoxy(01, 01);
    printf("Em qual semestre voce esta?..: ");
    scanf("%d", &semestre);
    getch();
    return 0;
 }