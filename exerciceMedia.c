#include <stdio.h>

int main(){
	
	int i, cont=0;
	float av1, av2, media;
	
	for (i=0;i<3;i++){
		printf("\nEntre com a nota da AV1 do aluno %d:\n",i+1);
		scanf("%f",&av1);
		printf("\nEntre com a nota da AV2 do aluno %d:\n",i+1);
		scanf("%f",&av2);
		
		media = (av1+av2)/2;
	
		if(media<6){
		cont++;
				   }
	}
	
	
	printf("\nO numero de alunos abaixo da media foi: %d",cont);
	
	
	
	return 0;
}
