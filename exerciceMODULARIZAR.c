#include<stdio.h>
#include<stdlib.h>

void InicializacaoVetor(int p[], int n);
void Menu();
void visaoGeral(int p[]);
void registrarEntrada(int p[], int n);
void registrarSaida();

int main(){
	int vaga[20]; 
	int  x, opcao, ocupada, livre;
	
	InicializacaoVetor(vaga,20);

	do{	
		Menu();	
		scanf("%d",&opcao);
		
		if(opcao == 1){
		visaoGeral(vaga);
		}//fim-opcao-1
		
		else if (opcao == 2){
			registrarEntrada(vaga, livre);
		}//fim-opcao-2
		
		else if (opcao == 3){
			registrarSaida(vaga);
		}//fim-opcao-3
		
	}while(opcao!=4);

	return 0;
}//fim-main

void InicializacaoVetor(int p[], int n){
	int x;
	// preencher o vetor com zeros (vaga livre)
	for(x=0; x<n; x++){
		p[x] = 0;
	}//fim-for
}

void Menu(){
		
		system("cls"); // limpa a tela
		printf("MENU \n");
		printf("1-Visao Geral \n");
		printf("2-Registrar Entrada \n");
		printf("3-Registrar Saida \n");
		printf("4-Sair do programa \n");
		printf("Opcao: ");
}

void visaoGeral(int p[]){
	int x, n = 0;
	
		system("cls"); // limpa a tela
		for(x=0;x<20;x++){
			printf("%d ", p[x]);
				if(p[x] == 1) n++;
			}//fim-for
		printf("\nOcupadas = %d", n);
		printf("\nLivres = %d \n", 20-n);
		system("pause"); // aguarda tecla
}

void registrarEntrada(int p[], int n){
			int x, livre;
			//encontrar uma vaga
			livre = -1;  // sem vaga livre
			
			for(x=0; x<20; x++){
				if(p[x] == 0){
					livre = x;
					break; // encerra o loop for
				}
			}
			
			if(livre == -1){
				printf("Nao ha vagas! \n");
				system("pause");
			}else{
				printf("A vaga %d esta livre.\n", livre);
				printf("Usar? (1-sim/2-nao) ");
				scanf("%d",&x);
				if(x == 1){
					p[livre] = 1;
					printf("Entrada registrada! \n");
					system("pause");
				}//fim-if-usar
			}//fim-if-livre
}

void registrarSaida(int p[]){
			int x;
			
			printf("Qual vaga deseja liberar? (0-19) ");
			scanf("%d",&x);
			if( x<0 || x>19){ 
				printf("Vaga invalida! \n");
			}else if(p[x] == 0){
				printf("A vaga ja esta livre! \n");
			}else{
				p[x] = 0;
				printf("Vaga liberada! \n");
			}
			system("pause");
}
