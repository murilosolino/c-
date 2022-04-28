#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main()
{

	/*-======================================================================
		programador: Alexandre Vinhola e Murilo Almeida Solino
		data: 14/04/2022
	=============================================================================*

	//-------------------------------- EXERRCÍCIO 3-------------------------------*/
	
	
	/*==============================================================================
	
						ÁREA DE DECLARAÇÃO DE VARIÁVEIS 
	==============================================================================*/
   float alcool = 8;
   float gasolina = 10;
   float divisao, km , litros;
   float valorgasolina = 6.86;
   float valoralcool = 5.77;
   //===============================================================================
	printf ("Escreva a quantidade de km para alcool:");
	scanf ("%f", &km);
	divisao = alcool;
	printf ("Litros de alcool necessario = %.2f \n", km / alcool);
	litros = km / alcool;
	printf ("Valor em Reais= %.3f \n", litros * valoralcool);
	system ("pause");
	system ("cls");
	//===========================================================================
	printf ("Escreva a quantidade de km para gasolina:");
	scanf ("%f", &km);
	divisao = gasolina;
	printf ("Litros de gasloina necessario = %.2f \n", km / gasolina);
	litros = km / gasolina;
	printf ("Valor em Reais= %.3f \n", litros * valorgasolina);
	system ("pause");
	system ("cls");
	
	
	
}
 	
