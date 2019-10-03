#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *a,n, i;
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d",&n);

	a = malloc(n * sizeof(int));
	
	for (i=0;i<n;i++){
		a[i] = rand() % n;
	}	
	for (i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
