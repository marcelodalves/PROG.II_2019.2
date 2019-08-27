#include <stdio.h>

//Faça um programa que escreva na tela se uma matriz lida pelo usuario eh simetrica ou nao

int main(){
	
	int mat[3][3];
	int i,j,cont=0;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("\nEntre com o elemento da linha %d da coluna %d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
		}

		
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
		if (mat[i][j]!=mat[j][i]){
		cont++;}
					}
					}
	
	if (cont>0){
		printf("\nNAO EH SIMETRICA!");
	}else{
		printf("\nSIMETRICA");
	}
	
	for (i=0;i<3;i++){
		printf("\n");
		for (j=0; j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("");
	}
	
	return 0;
}
