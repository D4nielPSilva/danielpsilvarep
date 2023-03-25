#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int salario, prestacao;
	
	printf("Digite sua renda mensal:\n");
	scanf("%d",&salario);
	printf("Digite o valor da sua prestação\n");
	scanf("%d",&prestacao);
	
	if (prestacao>(0.2*salario))
		printf("\nEmpréstimo não concedido!\n");
		
	else
		printf("\nEmpréstimo concedido!\n");
	return 0;
}
