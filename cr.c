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
    char meses[10];
		int dia;
    char nome[10];
		char meu[10];
		int i, j, linhas;
    
    //mostra os dados a serem lidos
    gotoxy(01, 02);
    printf("Em qual mes se conhecemos?..: ");
    gotoxy(01, 04);
    printf("Em qual dia?................: ");
    gotoxy(01, 06);
    printf("Qual seu nome?..............: ");
		gotoxy(01, 07+01);
    printf("E o meu nome?...............:  ");
    
    //recee os valores
    gotoxy(31, 02);
    scanf("%s", &meses);

    gotoxy(31, 04);
    scanf("%d", &dia);

    gotoxy(31, 06);
    scanf("%s", &nome );

		gotoxy(31, 07+01);
    scanf("%s", &meu);

	gotoxy(01, 012);
	printf("Some nossos meses de namoro, com o dia que comecamos a namorar,\n Mais nossa diferenca de idade: ");
	scanf("%d", &linhas);
	printf("\n");
	printf("\n");
	printf(" Boa peixe, sabe muito");

	printf("\n");
	printf("\n");
	printf("\n");

	//https://github.com/andredevsec/Heart-in-.c <--- dono da calculadora de corações. De resto todo o codigo é pessoal.
	
	for(i = linhas/2; i <= linhas; i+=2)
	{
		for(j = 1; j < linhas-i; j+=2){
				printf("  ");
		}
		
		for(j = 1; j <= i; j++){
				printf(" *");
		}
		
		for(j = 1; j <= linhas-i; j++){
				printf("  ");
		}
		
		for(j = 1; j <= i; j++){
				printf(" *");
		}
		
		printf("\n");
	}
	
	for (i = linhas; i>= 1; i--){
		for(j = i; j < linhas; j++){
			printf("  ");
		}
		for(j = 1; j <= (i*2)-1; j++){
				printf(" *");
		}
		printf("\n");
		
	}
	printf("\n      Eu te amo <3\n");
	getch();
	system("cls");
 	
	return 0;
	
}
