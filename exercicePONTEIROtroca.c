#include <stdio.h>

int main(){
	
	int a, *pa, b, *pb, aux;
	pa = &a;
	pb = &b;
	
	printf("\nEntre com o valor de A:\n");
	scanf("%d",&a);
	printf("\nEntre com o valor de B:\n");
	scanf("%d",&b);
	
	printf("\nValor de A: %d\n",*pa);
	printf("\nValor de B: %d\n",*pb);
	
	printf("\n||||||//INVERSAO\\||||||\n");
	
	aux = *pa; //Nao é possivel inverter direto, com *pa = *pb e *pb = *pa! Ai se cria uma variavel aux pra inverter
	*pa = *pb;
	*pb = aux;
		
	printf("\nValor de A: %d",*pa);
	printf("\nValor de B: %d",*pb);
	
	
	return 0;
}
