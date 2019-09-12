/*1-Faça uma função que receba dois números positivos por parâmetro e
retorne a soma dos N números inteiros existentes entre eles.*/

#include<stdio.h>
#include<stdlib.h>

int soma(int num1, int num2);

int main()
{
	int a, b, resp;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	resp=soma(a,b);
	
	printf("A soma dos numeros entre %d e %d e: %d", a,b,resp);
	
	return 0;
}

int soma(int num1, int num2){
	
	int i, soma=0;
	
	if(num1<num2){
	
	for(i=num1;i<=num2;i++){
		soma+=i;
	}
    }
    
	if(num1>num2){
		for(i=num1;i>=num2;i--){
		soma+=i;
	}
	}
	return soma;
}
