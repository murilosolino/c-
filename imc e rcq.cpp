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
			Área de declaração de variáveis
===============================================*/
	float peso, altura, imc;
//=============================================	
	printf("Informe seu peso:");
	scanf("%f", &peso);
	
	printf("Informe sua altura:");	
	scanf("%f", &altura);
	
// cálculo do imc	
	imc = peso / (altura * altura);
	printf("Seu IMC é: %.2f\n", imc);
	
// tabela do imc

	if (imc < 18.5)
	{
		printf("Você está abaixo do peso\n");
	}
	else
	{
		if((imc >= 18.5) && (imc < 25))
		{
			printf ("Você está no peso idael \n");
		}
		else
		{
			if((imc >= 25) && (imc <30))
			{
				printf ("Você está acima do peso \n");
			}
			else 
			{					
				if((imc >=30) && (imc < 40))
				{
					printf ("CUIDADO!!! \n");
					printf ("Você está obeso \n");
				}
				else
					{
						if((imc >= 40))
						{
							printf ("PROCURE UM MÉDICO URGENTEMENTE \n");
							printf ("Você está com obesidade mórbida \n");
						}
					
					}
			
			}
			
		}
		
	}
	system ("pause");
	system ("cls");
	
/*======================================================
			ÁREA DE DECLARAÇÃO DE VARIÁVEIS 
=======================================================*/
	 float cintura, quadril, rcq;
	 int idade;
	 char masculino, feminino, genero;
	 
//======================================================
	printf ("Informe o tamanho da sua cintura: ");
	scanf ("%f", &cintura);
	
	printf ("Informe o tamanho do seu quadril: ");
	scanf ("%f", &quadril);
	
// cálculo do rcq	
	rcq = cintura / quadril;
	printf ("O seu rcq é: %0.2f \n", rcq);
	
	printf ("Informe sua idade:");
	scanf ("%d", &idade);
	
	printf ("Informe seu gênero:");
	scanf("%s", genero);
    scanf("%s", genero);
    
    genero = masculino; 
    genero = feminino;
//tabela rcq masculino 
   if(genero = masculino , idade <= 29, rcq < 0.83)
    {
        printf("Seu risco é baixo!");
    }
    else
    {
		if((genero = masculino, idade <= 29, rcq >= 0.83) && (rcq <= 0.88))
    {
        printf("Seu risco é moderado!");
    }
   		else
   	 	{
    		if((genero = masculino, idade <=29, rcq >= 0.89) && (rcq <=0.94))
    		{
    			printf ("Seu risco é alto");
			}
			else
			{
				if (genero = masculino, idade <=29, rcq > 0.94)
				{
					printf ("seu risco é muito alto");
				}
				else 
				{
					if((genero = masculino , idade <= 30, rcq < 0.84) && (idade <=39, rcq < 0.84))
    					{
        					printf("Seu risco é baixo!");
  					  	}
    				else
    				{
						if((genero = masculino, idade <= 30, rcq >= 0.84) && ( idade <=39,rcq <= 0.91))
    					{
        					printf("Seu risco é moderado!");
    					}
   						else
   	 					{
    						if((genero = masculino, idade <=30, rcq >= 0.92) && ( idade <=39,rcq <=0.96))
    						{
    						printf ("Seu risco é alto");
							}
							else
							{
								if (genero = masculino, idade <=39, rcq > 0.96)
								{
									printf ("seu risco é muito alto");
								}		
							}
						}
					}
				}	
			}
		}
	}					
}

	

