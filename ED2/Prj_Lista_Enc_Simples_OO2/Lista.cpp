//Desenvolver m�todos de classe
//Lista.cpp

#include "Lista.h"

//construtor
Lista::Lista(){
	this->cabeca = 0; //inicializa lista vazia
	this->qtd = 0;
}

//destrutor
Lista::~Lista(){
	this->libera(); //ideia � liberar free toda mem�ria alocada
	this->qtd = 0;
}

void Lista::insere_inicio(int i){
	//no_dado* novo = (no_dado*) malloc(sizeof(no_dado));
	//novo->info = i;
 	//novo->prox = this->cabeca;
 	no_dado* novo = new no_dado(i, this->cabeca);
  	this->cabeca = novo; //adiciona a partir do in�cio
  	this->qtd++; //incrementa o contador de n�-dado
}

void Lista::imprime(){
	if (!this->isEmpty(this->cabeca)){
		no_dado* p; /* vari�vel auxiliar para percorrer a lista */
		printf("Info = ");
		for (p = this->cabeca; p != NULL; p = p->prox)
			printf("%d - ", p->info);
		printf("\n");	
	} else printf("Lista est� vazia!\n");
}

void Lista::vazia(){
	if (!this->isEmpty(this->cabeca))
		printf("Lista n�o est� vazia!\n");
	else
		printf("Lista est� vazia!\n");
}

void Lista::libera(){
	no_dado* p = this->cabeca;
	 while (p != NULL) {
	 	no_dado* t = p->prox; // guarda refer�ncia para o pr�ximo elemento
		free(p); /* libera a mem�ria apontada por p */
		this->qtd--; //decrementa contador de qtd
	 	p = t; /* faz p apontar para o pr�ximo */
	 }
	 this->cabeca = 0; //inicializa lista vazia
}

void Lista::tamanho(){
	printf("Tamanho ou qtd de elementos: %d\n", this->qtd);
}

//tratamento m�todos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}


