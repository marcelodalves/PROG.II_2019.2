/*Escreva uma função que receba como parâmetro um texto e um valor N e faz a criptografia do mesmo usando a seguinte regra. Para cada letra do texto, 
de acordo com sua posição em cada vetor atribua a ela a letra que estiver N posições depois do mesmo vetor. Imprima a frase criptografada na tela. 
Ela deve ser exibida em grupos de 5 letras. O último grupo deve ser completado com zeros ao final se contiver menos de 5 letras. 
Escreva outra função que exiba a frase descriptografada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void embaralho(char *letra, int n, int tam);
int main(){
	
	int n, tam;
	char txt[50];
	
	printf("\nEntre com um texto:\n");
	gets(txt);
	
	printf("\nEntre com um numero N:\n");
	scanf("%d",&n);
	
	tam = strlen(txt);
		
	embaralho(txt,n,tam);
	
	return 0;
}
void embaralho(char *letra, int n, int tam){
  int i;
 
 for (i=0; i<tam; i++){
  	letra[i] +=n;
    }
    printf("%s",letra);
}
