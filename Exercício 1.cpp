#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
/*==============================================
Programador: Murilo Almeida
data: 11/05
===============================================*/
int main(void)
{
		setlocale(LC_ALL,"Portuguese");
/*=============================================
			Área de declaração de variáveis
===============================================*/
	float num1, num2, resultado;	
	int opcao; 
//============================================
	do
	{
		printf ("============================== \n");
		printf ("	CALCULOS			\n");
		printf ("===============================\n");
		printf ("1-Somar \n");
		printf ("2-Subtrair \n");
		printf ("3-Multiplicção \n");
		printf ("4-Divisão \n");
		printf ("5-Sair \n");
		printf ("Escolha a opção \n");
		scanf ("%d", &opcao);
		system ("cls");
	
		if (opcao==1)
		{
		printf ("digite o primeiro numero: \n");
		scanf ("%f", &num1);
		printf ("digite o segundo numero: \n");
		scanf ("%f", &num2);
		
		resultado = num1 + num2;
		printf ("O resultado da soma é: %0.2f \n", resultado);
		}
		else 
		{
			if (opcao==2)
			{
				printf ("digite o primeiro numero: \n");
				scanf ("%f", &num1);
				printf ("digite o segundo numero: \n");
				scanf ("%f", &num2);
		
				resultado = num1 - num2;
				printf ("O resultado da soma é: %0.2f \n", resultado);	
			}
			else
			{
				if (opcao == 3)
				{
				printf ("digite o primeiro numero: \n");
				scanf ("%f", &num1);
				printf ("digite o segundo numero: \n");
				scanf ("%f", &num2);
		
				resultado = num1 * num2;
				printf ("O resultado da soma é: %0.2f \n", resultado);		
				}
				else 
				{
					if (opcao == 4)
					{
					printf ("digite o primeiro numero: \n");
					scanf ("%f", &num1);
					printf ("digite o segundo numero: \n");
					scanf ("%f", &num2);
		
					resultado = num1 / num2;
					printf ("O resultado da soma é: %0.2f \n", resultado);		
					}
				}
			}
		}
	}
		while (opcao !=5);
}
