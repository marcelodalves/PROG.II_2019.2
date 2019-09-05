#include <stdio.h>

int numInteiro();

int main(){
	
	int num = numInteiro();
	
	return 0;
}


int numInteiro(){
	int num;
	
	do{
	printf("\nEntre com um num maior q 0: ");
	scanf("%d",&num);
	}while(num<0);
	

	return num;
}
