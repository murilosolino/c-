#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 int main(void)
{
				setlocale(LC_ALL,"Portuguese");
	/*-======================================================================
		programador: Alexandre Vinhola e Murilo Almeida Solino
		data: 14/04/2022
	=============================================================================*

	//-------------------------------- EXERRC�CIO 4-------------------------------*/
	
	
	/*=====================================================================
	
						�REA DE DECLARA��O DE VARI�VEIS 
	======================================================================*/
	float km;
	float milhas = 0.621371;
	float metros = 1000;
	float centimetros = 100000;
	int opcao;
	//=========================================================================
	do
	{
		printf ("======================= \n");
		printf ("OP��ES DE CONVERS�O \n");
		printf ("======================= \n");
		printf ("1-Milhas \n");
		printf ("2-Metros \n");
		printf ("3-Cent�metros \n");
		printf ("4-Sair \n");
		printf ("ESCOLHA UMA OP��O: \n");
		scanf ("%d",&opcao);
		
		if (opcao == 1)
		{
			printf ("Escreva a quantidade de km para converter em milhas:");
			scanf ("%f", &km);
			printf ("Resultado = %0.2f \n", km * milhas);
			system ("pause");
			system ("cls");
		}
		else 
		{
			if (opcao ==2)
			{
				printf ("Escreva a quantidade de km para converter em metros:");
				scanf ("%f", &km);
				printf ("Resultado = %0.2f \n", km * metros);
				system ("pause");
				system ("cls");
			}
			else 
			{
				if (opcao ==3)
				{
					
					printf ("Escreva a quantidade de km para converter em centimetros:");
					scanf ("%f", &km);
					printf ("Resultado = %.2f \n", km * centimetros);
					system ("pause");
					system ("cls");
				}
			}
		}
	}
	while (opcao !=4);	
}
