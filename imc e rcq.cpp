#include <iostream>
#include <stdio.h> 
#include <locale.h>
/*==============================================
Programador: Alexandre Vinhola e Murilo Almeida
data: 27/04
===============================================*/
int main()
{
	setlocale(LC_ALL,"Portuguese");
/*=============================================
			�rea de declara��o de vari�veis
===============================================*/
	float peso, altura, imc;
//=============================================	
	printf("Informe seu peso:");
	scanf("%f", &peso);
	
	printf("Informe sua altura:");	
	scanf("%f", &altura);
	
// c�lculo do imc	
	imc = peso / (altura * altura);
	printf("Seu IMC �: %.2f\n", imc);
	
// tabela do imc

	if (imc < 18.5)
	{
		printf("Voc� est� abaixo do peso\n");
	}
	else
	{
		if((imc >= 18.5) && (imc < 25))
		{
			printf ("Voc� est� no peso idael \n");
		}
		else
		{
			if((imc >= 25) && (imc <30))
			{
				printf ("Voc� est� acima do peso \n");
			}
			else 
			{					
				if((imc >=30) && (imc < 40))
				{
					printf ("CUIDADO!!! \n");
					printf ("Voc� est� obeso \n");
				}
				else
					{
						if((imc >= 40))
						{
							printf ("PROCURE UM M�DICO URGENTEMENTE \n");
							printf ("Voc� est� com obesidade m�rbida \n");
						}
					
					}
			
			}
			
		}
		
	}
	system ("pause");
	system ("cls");
	
/*======================================================
			�REA DE DECLARA��O DE VARI�VEIS 
=======================================================*/
	 float cintura, quadril, rcq;
	 int idade;
	 char masculino, feminino, genero;
	 
//======================================================
	printf ("Informe o tamanho da sua cintura: ");
	scanf ("%f", &cintura);
	
	printf ("Informe o tamanho do seu quadril: ");
	scanf ("%f", &quadril);
	
// c�lculo do rcq	
	rcq = cintura / quadril;
	printf ("O seu rcq �: %0.2f \n", rcq);
	
	printf ("Informe sua idade:");
	scanf ("%d", &idade);
	
	printf ("Informe seu g�nero:");
	scanf("%s", genero);
    scanf("%s", genero);
    
    genero = masculino; 
    genero = feminino;
//tabela rcq masculino 
   if(genero = masculino , idade <= 29, rcq < 0.83)
    {
        printf("Seu risco � baixo!");
    }
    else
    {
		if((genero = masculino, idade <= 29, rcq >= 0.83) && (rcq <= 0.88))
    {
        printf("Seu risco � moderado!");
    }
   		else
   	 	{
    		if((genero = masculino, idade <=29, rcq >= 0.89) && (rcq <=0.94))
    		{
    			printf ("Seu risco � alto");
			}
			else
			{
				if (genero = masculino, idade <=29, rcq > 0.94)
				{
					printf ("seu risco � muito alto");
				}
				else 
				{
					if((genero = masculino , idade <= 30, rcq < 0.84) && (idade <=39, rcq < 0.84))
    					{
        					printf("Seu risco � baixo!");
  					  	}
    				else
    				{
						if((genero = masculino, idade <= 30, rcq >= 0.84) && ( idade <=39,rcq <= 0.91))
    					{
        					printf("Seu risco � moderado!");
    					}
   						else
   	 					{
    						if((genero = masculino, idade <=30, rcq >= 0.92) && ( idade <=39,rcq <=0.96))
    						{
    						printf ("Seu risco � alto");
							}
							else
							{
								if (genero = masculino, idade <=39, rcq > 0.96)
								{
									printf ("seu risco � muito alto");
								}		
							}
						}
					}
				}	
			}
		}
	}					
}

	

