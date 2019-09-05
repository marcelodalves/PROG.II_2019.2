#include <stdio.h>

int somaTotal();
int main(){

	int soma = somaTotal();
			
	printf("A soma dos inteiros entre eles eh: %d",soma);
		
	return 0;
			
}
int somaTotal(){
	int soma, a, b, c;
	
	printf("Entre com o n1:");
	scanf("%d",&a);
	printf("Entre com o n2:");
	scanf("%d",&b);
	printf("Entre com o n3:");
	scanf("%d",&c);
	
	soma = a+b+c;
	
	return soma;	
}
