
#include <stdio.h>
#include <stdlib.h>


	int main (){
		int ordem;
		int i,j; 
		int soma = 0;
		int contador = 0; 
		printf("%s\n","Informe a Ordem da Matriz:" );
		scanf("%i",&ordem);
		
		int contantemagica = ordem*(ordem * ordem +1)/2;
		printf("Constante Magica: %i\n",contantemagica);


		int matriz[ordem][ordem];
	
			putchar('\n');
			//Leitura dos valores da matriz
		for (i = 0; i < ordem; ++i)
		{
			printf("%s %i\n","Insira os elementos da linha",i+1 );
			for (j = 0; j < ordem; ++j)
			{
			scanf("%i",&matriz[i][j]);
			}
		}

   			 // imprime a linha 
		for (i = 0; i < ordem; i++) {
    	for (j = 0; j < ordem; j++) 
     		printf("%4d", matriz[i][j]);
   		  	printf("\n");
		 }
	
		//Parametro para contar a quantidade de linhas se realmente o contador incrementa 
		for (i = 0; i < ordem; ++i)
		{
			soma = 0;
			for (j = 0; j < ordem; ++j)
			{
				
				soma  = soma  + matriz[i][j];

			}	
			
			if (soma == contantemagica){

				contador++;

			}
		}


		//Parametro para contar a quantidade de colunas se realmente o contador incrementa  


		for (i = 0; i < ordem; ++i)
		{
			soma = 0;
			for (j = 0; j < ordem; ++j)
			{
				
				soma  = soma  + matriz[j][i];

			}	
			
			if (soma == contantemagica){

				contador++;

			}
		}



		//Parametro para contar a diagonal principal e incrementar o contador 

		soma = 0;
		for (i = 0; i < ordem; ++i)
		{
			
			for (j = 0; j < ordem; ++j)
			{
				if(j==i){
				soma  = soma  + matriz[i][j];
			}
			}	
			
			if (soma == contantemagica){

				contador++;

			}
		}



		//Parametro para contar a diagonal secundaria e incrementar o contador 


		soma = 0;
		for (i = 0; i < ordem; ++i)
		{
			
			for (j = 0; j < ordem; ++j)
			{
				if(j==(2-i)){
				soma  = soma  + matriz[i][j];
				
			}
			}	
			
			if (soma == contantemagica){

				contador++;

			}
		}


				
		//Aqui nesta condição se verifica se o contador satisfaz a ordem *2 +2, formula para contar se é magico pela quantidade de linhas


		if(contador == ((ordem * 2)+2) ){
			printf("Quadrado Magico!!!\n");

		}else{

			printf("Tente Novamente!!!\n");

		}

	
	return 0;
	}
