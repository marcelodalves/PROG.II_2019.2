#include <stdio.h>
#include <string.h>

int main(void){
	int i;
	char nome[500];
	char remove;
	
	printf("\nDigite uma string\n");
	gets(nome);
	printf("\nDigite o caractere");
	scanf("%c",&remove);
	
	int tam = strlen(nome);
	for (i = 0;i<tam;i++){
		if(nome[i] == remove){
			nome[i] = ' ';
		}
	}
	printf("\nSua string eh: %s",nome);
}
