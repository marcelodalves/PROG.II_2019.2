#include <stdio.h>
struct notas{
	int matri;
	float nota1, nota2, nota3;
	};
int main(){
	
	int maior = 0;
	struct notas Nota;
	
	printf("\nEntre com o num da matricula: ");
	scanf("%d",&Nota.matri);
	printf("\nEntre com a nota 1: ");
	scanf("%f",&Nota.nota1);
	printf("\nEntre com a nota 2: ");
	scanf("%f",&Nota.nota2);
	
	if ((Nota.nota2+Nota.nota1)/2<6){
		printf("\nEntre com a nota da av3: ");
		scanf("%f",&Nota.nota3);
	}
	else{
		printf("\nParabens vc passou ");
	}
	
	if(Nota.nota1>Nota.nota2){
		maior = Nota.nota1;
		printf("\nA soma da AV1 + a nota da AV3 eh: %f ",Nota.nota1+Nota.nota3);
	}
	else if(Nota.nota2>Nota.nota1){
		maior = Nota.nota2;
		printf("\nA soma da AV2 + a nota da AV3 eh: %f ",Nota.nota2+Nota.nota3);
	}
	
	return 0;
}
