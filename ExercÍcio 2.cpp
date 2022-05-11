#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
/*==============================================
Programador: Alexandre Vinhola e Murilo Almeida
data: 04/05
===============================================*/
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
/*=============================================
			Área de declaração de variáveis
===============================================*/
	int i = 0;
	float notas[5];
	float media;
	float soma = 0; 
//=============================================	
	 for(i = 1; i <= 5; i++)
	 {
	 	printf ("Digite a nota %d do aluno \n",i);
	 	scanf ("%f", &notas[i]);
		soma = notas[i] + soma;	 
	 }
	 media = soma / 5;
	 printf ("a média final do aluno é %0.2f",media);	 
}	

