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

	//-------------------------------- EXERRC�CIO 3-------------------------------*/
	
	
	/*==============================================================================
	
						�REA DE DECLARA��O DE VARI�VEIS 
	==============================================================================*/
   float alcool = 8;
   float gasolina = 10;
   float divisao, km , litros;
   float valorgasolina = 6.86;
   float valoralcool = 5.77;
   int opcao;
   //===============================================================================
   
	do
	{
		printf ("========================== \n");
		printf ("OP��ES \n");
		printf ("========================== \n");
		printf ("1-alcool \n");
		printf ("2-gasolina \n");
		printf ("3-Sair \n");
		printf ("ESCOLHA UMA OP��O \n");
		scanf ("%d", &opcao);
		
		if (opcao ==1)
		{
			printf ("Escreva a quantidade de km para alcool:");
			scanf ("%f", &km);
			divisao = alcool;
			printf ("Litros de alcool necessario = %.2f \n", km / alcool);
			litros = km / alcool;
			printf ("Valor em Reais= %.3f \n", litros * valoralcool);
			system ("pause");
			system ("cls");
		}
		else
		{
			if (opcao ==2)
			{
				printf ("Escreva a quantidade de km para gasolina:");
				scanf ("%f", &km);
				divisao = gasolina;
				printf ("Litros de gasloina necessario = %.2f \n", km / gasolina);
				litros = km / gasolina;
				printf ("Valor em Reais= %.3f \n", litros * valorgasolina);
				system ("pause");
				system ("cls");
			}
		}
	}
	while (opcao !=3);	
}
 	
