#include <stdio.h>

void matrix(int x, int y, int mat[x][y]);

int main(){
	
	int i, j, a, b;	
	printf("\nEntre com o numero de linhas da matriz: ");
	scanf("%d",&a);
	printf("\nEntre com o numero de colunas da matriz: ");
	scanf("%d",&b);
	
	int mat[a][b];
	
	for(i=0; i<a; i++)
    {
        for(j=0;j<b;j++)
        {
            printf("\nEntre com o elemento [%d, %d]:", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (i=0;i<a;i++){
		printf("\n");
		for (j=0; j<b;j++){
			printf("%d ",mat[i][j]);
		}
		printf("");
	}
	
	printf("\n/////POS-SOMA\\\\\n");
	
	matrix(a,b,mat);
	  
		for (i=0;i<a;i++){
		printf("\n");
		for (j=0; j<b;j++){
			printf("%d ",mat[i][j]);
		}
		printf("");
	}
	
	return 0;
}

void matrix(int x, int y, int mat[x][y]){
			int a;
			for(a=0; a<x; a++){
    	mat[1][a]+=mat[0][a];
      }
}


