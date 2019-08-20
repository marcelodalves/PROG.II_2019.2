#include <stdio.h>

int main(){
	
	int vet[3], x, i;
	for (i=0;i<3;i++){
		printf("\nDigite %d:",i);
		scanf("%d",&vet[i]);
	}
	
	printf("\nDigite x:");
	scanf("%d",&x);
	
	for (i = 0; i<3;i++){
		if(vet[i] % x ==0){
			printf("\nPosicao: %d",i);
			printf("\nValor: %d",vet[i]);
		}
	}
	
	return 0;
}
