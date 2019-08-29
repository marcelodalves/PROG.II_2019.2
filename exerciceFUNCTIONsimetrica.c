#include <stdio.h>


void lermatriz(); 
int simetrica();

int main(){

	lermatriz();
	int sim = simetrica();
	if (sim==1){
		printf("\nsimetrica");
	}
	else{
		printf("\n nao simetrica");
	}	
	
	
	
	
	return 0;
}

void lermatriz(){
	int i,j, mat[3][3];
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("\nEntre com a matriz [%d] [%d]",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
}

int simetrica(){
	int i, j, mat[3][3];
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (mat[i][j]!=mat[j][i]){
				return 0;
			}
		}
	}
		return 1;
}
