#include <stdio.h>
#include <stdlib.h>

int parOUimpar(int par, int impar);

int main(){
	
	int i, tamanho;
	int *num;
	
	num = malloc(tamanho* sizeof(int));
	
	printf("\nEntre com o tamanho do vetor a ser lido: ");
	scanf("%d",&tamanho);
	
	for (i=0;i<tamanho;i++){
		printf("\nEntre com valores: ");
		scanf("%d", &num[i]);
	}
	
	for (i=0;i<tamanho;i++){
		printf("%d\n",num[i]);
	}
  
	return 0;	
}
