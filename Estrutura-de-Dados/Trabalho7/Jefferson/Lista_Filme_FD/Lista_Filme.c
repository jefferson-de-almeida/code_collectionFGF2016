#include "Lista_Filme.h"
#include <stdio.h>
#include <stdlib.h>
#define TAM 40

Lista *Cria_Lista(){
	return NULL;
}

Lista *Insere(Lista *l){

	Lista * new_no = (Lista *) malloc(sizeof(Lista));
	getchar();
	printf("Digite o nome do Filme: ");
	fgets(new_no -> nome, TAM, stdin);
	printf("Digite o nome do Ator(a) do Filme: ");
	fgets(new_no -> protagonista, TAM, stdin);
	printf("Digite o Ano de lançamento: \n");
	scanf("%d", &new_no -> ano);
	printf("Digite a Nota do Filme: \n");
	scanf("%f", &new_no -> nota);
	new_no -> prox = l;
	return new_no;
}

/*void Remove(Lista *l,int valor){

	Lista *aux01, *aux02;
	aux01 = l;
	aux02 = l -> prox;
	while(aux02 != NULL && aux02 -> dado != valor){
		aux01 = aux02;
		aux02 = aux02 -> prox;
	}
	if(aux02 != NULL){
		aux01 -> prox = aux02->prox;
		free(aux02);
	}
	
			
}*/

void Imprime(Lista *l){
	Lista *aux;
	for(aux = l; aux != NULL; aux = aux -> prox){
		printf("O nome do Filme: %s", aux -> nome);
		printf("O nome do Ator(a): %s", aux -> protagonista);
		printf("O Ano de Lançamento: %d\n", aux -> ano);
		printf("A Nota do Filme: %0.2f\n", aux -> nota);
		Separar();	
	}
}
void Separar(){
	int i;
	for(i = 0; i < 50; i++){
		printf("*");	
		if(i == 49){
			printf("\n");
		}
	}

}
Lista *Op_Menu(Lista *li){

	int x;
	VOLTAR:
	printf("Digite uma das opções do menu.\n");
	printf("1: para inserir um filme na lista.\n");	
	printf("2: para remover um filme na lista.\n");	
	printf("3: para imprimir a lista de  filmes.\n");
	do{
		scanf("%d", &x);	
		if(x <= 0 || x > 3){
			printf("Por favor, digite somente um entre os valores do menu!\n");	
			printf("Tente novamente.\n");
		}
	}while(x < 1 || x > 3);	
	
	switch(x){

		case 1:
 
			li = Insere(li);
		break;
		case 3:
 
			Imprime(li);
		break;
	}

	printf("Deseja voltar ao menu?\n");
	printf("1: Sim.\n");
	printf("2: Não.\n");
	do{
		scanf("%d", &x);
		if(x == 1)
		goto VOLTAR;
		else if(x != 1 && x != 2){
			printf("Opção Invalida.\n");
			printf("Por favor, digite apenas uma opção válida.\n");
		}
	}while(x < 1 || x > 2);



	return li;
}
