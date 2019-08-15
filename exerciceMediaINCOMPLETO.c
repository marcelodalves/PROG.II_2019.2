#include <stdio.h>

int main(){
	
	int i, n_faltas, n_aulas, media_faltas, maior;
	char materia[500];
	float av1, av2, av3, media;
	
	printf("\nEntre com o nome da MATERIA:\n");
	scanf(" %s",&materia);
	
	printf("\nEntre com a quantidade de AULAS de %s:\n",materia);
	scanf("%d",&n_aulas);
	
	printf("\nEntre com a quantidade de FALTAS:\n");
	scanf("%d",&n_faltas);
	
	printf("\nEntre com a nota da AV1 do aluno: ");
	scanf("%f",&av1);
	
	printf("\nEntre com a nota da AV2 do aluno: ");
	scanf("%f",&av2);
	
	media = (av1+av2)/2;
	media_faltas = (n_faltas/n_aulas)*100;
	
	printf("%d",media_faltas);
	

return 0;
}
