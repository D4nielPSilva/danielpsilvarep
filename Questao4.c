#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Fa�a um programa em que o usu�rio digite 4 notas, em seguida, calcule e imprima a m�dia e mostre o
resulado de acordo com as seguintes informa��es. 
M�dia de 0 at� 3 - Reprovado.
M�dia de 3.1 at� 6.9 � Recupera��o.
M�dia acima de 6.9 � Aprovada.*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	double nota1, nota2, nota3, nota4, media;
	
	printf("Digite a primeira nota:\n");
	scanf("%lf",&nota1);
	printf("Digite a segunda nota:\n");
	scanf("%lf",&nota2);
	printf("Digite a terceira nota:\n");
	scanf("%lf",&nota3);
	printf("Digite a quarta nota:\n");
	scanf("%lf",&nota4);
	
	media=(nota1+nota2+nota3+nota4)/4;
	
	printf("A media das notas �: %2lf",media);
	
	if (media<3)
	{
		printf("\n\nREPROVADO!! \n");
		printf("Tente a sorte no pr�ximo semestre\n");	
	}
		else if (3.1>media>6.9)
		{
			printf("\n\nRECUPERA��O!! \n");
			printf("Ganhou uma secunda chance, n�o vacila em.\n");
		}
			else if (media>6.9)
			{
				printf("\n\nAprovado(a)!!\n");
				printf("Meus parab�ns!! N�o fez mais q sua obriga��o\n");
			}
		
	return 0;
}
