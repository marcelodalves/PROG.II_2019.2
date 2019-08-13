#include<stdio.h>

int main(){
	
	int calc;
	float qtd_km;
	char tipo_carro;
	
	printf("\nEntre com o percurso em KM:\n");
	scanf("%f",&qtd_km);
	printf("\nEntre com o tipo de carro (A, B ou C):\n");
	scanf(" %c",&tipo_carro);

	if (tipo_carro=='A'||tipo_carro=='a'){
		calc = qtd_km/8;
		printf("\nQtd km: %.2f ------ Tipo carro: %c ------ Calc:%d",qtd_km,tipo_carro,calc);

	}
	else if(tipo_carro=='B'||tipo_carro=='b'){
		calc = qtd_km/9;
		printf("\nQtd km: %.2f ------ Tipo carro: %c ------ Calc:%d",qtd_km,tipo_carro,calc);

	}
	else if(tipo_carro=='C'||tipo_carro=='c'){
		calc = qtd_km/12;
		printf("\nQtd km: %.2f ------ Tipo carro: %c ------ Calc:%d",qtd_km,tipo_carro,calc);

	}
	else{
		printf("Entre apenas com A, B ou C!!!!!");
	}
	
	
	
	return 0;
}
