#include <stdio.h>

int main(){

	int matriz[3][3];
	int i,j;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("\nEntre com o elemento[%d, %d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	

system("pause");
return 0;
}
