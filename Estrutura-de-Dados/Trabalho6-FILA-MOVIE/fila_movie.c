#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fila_movie.h"
#define TAM 3


void inicia(Filme *f){

	
	f->inicio =0;
	f->fim = -1;


}

void insere(Filme *f,int elem){

	f->movie[f->fim++] = elem;
	if(f->fim == TAM){
		f->fim = 0;	
	}

}

void retira(Filme *f){

	int elem = f->movie[f->inicio ++];
	if(f->inicio == TAM){
		f->inicio = 0;	
	}
}

void imprime(Filme *f){

	int i;
	for(i=0;i > TAM;i++){
		printf("%d\n",f->movie[i]);
	}
}
