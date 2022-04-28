#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main()
{

	/*-======================================================================
		programador: Alexandre Vinhola e Murilo Almeida Solino
		data: 14/04/2022
	=============================================================================*

	//-------------------------------- EXERRCÍCIO 4-------------------------------*/
	
	
	/*=====================================================================
	
						ÁREA DE DECLARAÇÃO DE VARIÁVEIS 
	======================================================================*/
	float km;
	float milhas = 0.621371;
	float metros = 1000;
	float centimetros = 100000;
	//========================================================
	printf ("Escreva a quantidade de km para converter em milhas:");
	scanf ("%f", &km);
	printf ("Resultado = %.2f \n", km * milhas);
	system ("pause");
	system ("cls");
	//=========================================================
	printf ("Escreva a quantidade de km para converter em metros:");
	scanf ("%f", &km);
	printf ("Resultado = %.2f \n", km * metros);
	system ("pause");
	system ("cls");
	//============================================================
	printf ("Escreva a quantidade de km para converter em centimetros:");
	scanf ("%f", &km);
	printf ("Resultado = %.2f \n", km * centimetros);
	system ("pause");
	system ("cls");
	
}
