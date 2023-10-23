#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

int main(void)
{
float num1, num2, resultado;
int continuar;
int operacao;

continuar = 1;


while (continuar == 1) 
	{
		printf("selecione a operacao desejada: \n");
		printf("1. soma \n");
		printf("2. subtracao \n");
		printf("3. multiplicacao \n");
		printf("4. divisao \n");
		printf("0. sair \n");
		scanf("%d", &operacao);
		
		switch (operacao) //switch para fazer a operacao inserida pelo usuario
		{
			case 1 :
				resultado = soma(num1, num2); //funçao de soma
				printf("resultado: %.2f \n", resultado);
			break;
			
			case 2  :
				resultado = sub(num1, num2); //funçao de subtração
				printf("resultado: %.2f \n", resultado);
			break;
			
			case 3 : 
				resultado = multi(num1, num2); //funcao multiplicação
				printf("resultado: %.2f \n", resultado);
			break;
			case 4 : 
			resultado = divisao(num1, num2); //funçao de divisão
			break;
			
			case 0 : //para o programa pois a variavel "continuar" do while não é mais igual a 0
			continuar = 0;
			break;
				
						
		}
	}
}

