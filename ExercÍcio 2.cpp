#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main()
{

	/*-======================================================================
		programador: Alexandre Vinhola e Murilo Almeida Solino
		data: 14/04/2022
	=============================================================================*

	//-------------------------------- EXERRCÍCIO 2-------------------------------*/
	
	
	/*=====================================================================
	
						ÁREA DE DECLARAÇÃO DE VARIÁVEIS 
	======================================================================*/
	float pi, t1, t2, p1, p2, soma, divisao;
	//--------------------------------------------------------------------
	printf ("Insira a nota da Prova Integrada:");
	scanf  ("%f", &pi);
	printf ("Insira a nota do Trabalho 1:");
	scanf  ("%f", &t1);
	printf ("Insira a nota do Trabalho 2:");
	scanf  ("%f", &t2);
	printf ("Insira a nota da Prova 1:");
	scanf  ("%f", &p1);
	printf ("Insira a nota da Prova 2:");
	scanf  ("%f", &p2);
	soma = pi+t1+t2+p1+p2;
	divisao = soma/5;
	printf("Media final = %.2f \n",divisao);
	
	
	
	
}
