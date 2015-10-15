#include <stdio.h>
#include <stdlib.h>


void lernumeros(int matriz[100][100], int linhas, int colunas);
void imprimir (int mat[100][100], int linhas, int colunas);
int teste1 (int v[], int n, int numero);
int teste2 (int vetor[], int n);

int main(){
	int i, j, n, quadradolatino, matriz[100][100], vetor[100];
	printf ("\tBienvenido al Quadrado Latino aiaiai\n\n");
  	printf ("Entre com a ordem da matriz: ");
  	scanf ("%d", &n);

  	lernumeros (matriz,n,n);
  	printf("\n\nMatriz lida:\n");
  	imprimir (matriz,n,n);

  	quadradolatino = 1; // Vai ser latino até o retorne ser zero 

  	for (i = 0; i < n && quadradolatino == 1; i++)
    	// verifica se a linha matriz[i] da matriz é latina 
    	quadradolatino = teste2(matriz[i], n);  
  
  	for (j = 0; j < n && quadradolatino == 1; j++) {
    	// verifica se a coluna j da matriz matriz é latina 
    	// copia coluna j para o vetor 
   		for (i = 0; i < n; i++) vetor[i] = matriz[i][j];
    		quadradolatino = teste2(vetor,n);
  	}

	if (quadradolatino == 1) printf("Eh Quadrado Latino aiaiai\n");
  	else printf("Nao eh um Quadrado Latino\n");

	return 0;
	}

//aqui só para preencher a matriz

void lernumeros(int matriz[100][100], int linhas, int colunas){
		int i,j;
		for(i = 0; i < linhas; i++){
			printf("Insira os valores da linha %i:\n",i+1);
			for(j = 0; j < colunas; j++){
			scanf("%i",&matriz[i][j]);		
				
			}
		} 
	}

//esta subrotina imprime a matriz para se basear

void imprimir (int mat[100][100], int linhas, int colunas) {
  int i, j;

  for (i = 0; i < linhas; i++) {
    //imprime linha
    for (j = 0; j < colunas; j++) 
      printf("%4d", mat[i][j]);
    // muda de linha 
    printf("\n");
  }
}

//aqui verifica se o elemento do vetor é igual ao numero do contador i do teste 2 logo abaixo

int teste1 (int vetor[], int n, int numero) {
  int i;
  
  for (i = 0; i < n; i++) 
    if (vetor[i] == numero) 
      return 1; 

  return 0; 
}

//esse teste é onde realmente verifica se o teste 1 retorna zero senão vai retornar 1

int teste2 (int vetor[], int n){
  int i;

  for (i = 0; i < n; i++) 
    if (teste1(vetor,n,i+1) == 0) 
      return 0;

  return 1;
} 
