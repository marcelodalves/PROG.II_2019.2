#include <stdio.h>

int lerDia();
int lerMes();
int lerAno();

int main(){
	
	int dia = lerDia();
	int mes = lerMes();
	
	
	
	
	return 0;
}

int lerDia(){
	
	int dia;
	do{
	printf("\nEntre com o dia: ");
	scanf("%d",&dia);
	}while(dia>31);
	
	return dia;
}

int lerMes(){
	int mes;
	
	do{
	printf("\nEntre com o mes: ");
	scanf("%d",&mes);
	}while(mes>12);
	
	return mes;
}
