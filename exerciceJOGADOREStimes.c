#define NUM_TIMES 2
#define NUM_JOGADORES 3

int main()
{
    int i, j, idade, menores18, acima80kgs, total_pessoas;
    float peso, altura, idade_media, altura_media, porcentagem_acima80kgs;

    total_pessoas = NUM_TIMES * NUM_JOGADORES;


    for(i = 0; i < NUM_TIMES; i++){
    		idade_media = 0;
        for(j = 0; j < NUM_JOGADORES; j++){
            printf("Digite a idade, o peso e a altura do jogador %d do time %d\n", j + 1, i + 1);
            scanf("%d %f %f", &idade, &peso, &altura);
            idade_media += idade;
            altura_media += altura;
            if (idade < 18){ 
			menores18++; 
            }
			 if (peso >= 80.0){
			 acima80kgs++;
						}
        }
        idade_media = idade_media / NUM_JOGADORES ;
        printf("A media das idades do time %d eh %.2f\n", i + 1, idade_media);
    }

    altura_media = altura_media / total_pessoas;
    porcentagem_acima80kgs = 100.0 * acima80kgs / total_pessoas;

    printf("A media das alturas eh %.2f\n", altura_media);
    printf("O numero de jogadores com menos de 18 anos eh %d.\n", menores18);
    printf("A porcentagem de jogadores com mais de 80kgs eh %.2f.\n", porcentagem_acima80kgs);
    return 0;
}
