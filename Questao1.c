#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite o DDD e descubra de qual cidade pertence:\n");
	scanf("%d",&num);
	
	switch (num)
	{
		case 61:
			printf("\n\nEste DDD pertence a Brasília\n");
		break;
		case 11:
			printf("\n\nEste DDD pertence a São Paulo\n");
		break;
		case 71:
			printf("\n\nEste DDD pertence a Salvador\n");
		break;
		case 21:
			printf("\n\nEste DDD pertence ao Rio de Janeiro\n");
		break;
		case 32:
			printf("\n\nEste DDD pertence a Juiz de Fora\n");
		break;
		case 19:
			printf("\n\nEste DDD pertence a Campinas\n");
		break;
		case 27:
			printf("\n\nEste DDD pertence a Vitória\n");
		break;
		case 31:
			printf("\n\nEste DDD pertence a Belo Horizonte\n");
		break;
		default:
			printf("\n\nDDD inválido!!");
	}
	
			
	
	
	return 0;
}
