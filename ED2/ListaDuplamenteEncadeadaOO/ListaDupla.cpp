#include "ListaDupla.h"


//Construtor
ListaDupla::ListaDupla() {
	this->cabeca = 0;
	this->calda = 0;
	this->qtd = 0;
}

ListaDupla::~ListaDupla() {
	this->liberar();
	this->qtd = 0;
}


void ListaDupla::inserirOrdenado(int i) {
	
}


//Métodos privados
void Lista::inserir(int i) {
	
	NoDado* novo = new NoDado(i, this->cabeca);
	
	if(!eVazio(this->cabeca)) {
		this->cabeca->ant = novo;
	} 
	
	this->cabeca = novo;
  	this->qtd++;
  	
  	printf("\n");
  	printf("O valor %d foi adicionado no in?cio da lista!\n\n", i);
}

bool Lista::eVazio(NoDado* l){
	return l == NULL;
}
