#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/* Faça um programa em que o usuário digite 4 notas, em seguida, calcule e imprima a média e mostre o
resulado de acordo com as seguintes informações. 
Média de 0 até 3 - Reprovado.
Média de 3.1 até 6.9 – Recuperação.
Média acima de 6.9 – Aprovada.*/

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
	
	printf("A media das notas é: %2lf",media);
	
	if (media<3)
	{
		printf("\n\nREPROVADO!! \n");
		printf("Tente a sorte no próximo semestre\n");	
	}
		else if (3.1>media>6.9)
		{
			printf("\n\nRECUPERAÇÃO!! \n");
			printf("Ganhou uma secunda chance, não vacila em.\n");
		}
			else if (media>6.9)
			{
				printf("\n\nAprovado(a)!!\n");
				printf("Meus parabéns!! Não fez mais q sua obrigação\n");
			}
		
	return 0;
}
