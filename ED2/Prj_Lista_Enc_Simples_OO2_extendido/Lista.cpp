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
  	printf("\n");
  	printf("O valor %d foi adicionado no in�cio da lista!\n\n", i);
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
	 
	 printf("Lista liberada!\n");
}

void Lista::tamanho(){
	printf("Tamanho ou qtd de elementos: %d\n", this->qtd);
}

// M�todos extras adicionados na terefa.

void Lista::busca(int i) {	
	no_dado* p = this->cabeca;
	int posicao = 1;
	bool encontrou = false;
	
	if(this->isEmpty(p)) {
		printf("Lista est� vazia!\n");
	}
	
	while(p != NULL) {
	    if(p->info == i) {	
  		    printf("N�mero %d econtrado na %d� posi��o.\n", i, posicao);
  		    encontrou = true;
		}
		
		p = p->prox;
		posicao++;
	}
	
	if(!encontrou) {
		printf("N�mero %d n�o foi econtrado na lista.\n", i);
	}

}

void Lista::retira(int i) {
    no_dado* prev = NULL;
	no_dado* p = this->cabeca;
	bool encontrou = false;
	
	if(this->isEmpty(p)) {
	    printf("Lista est� vazia!\n");
	}
	else if(this->isEmpty(p->prox)) {
		this->retira_inicio();
	}
	else {
		prev = p;
  		p = p->prox;	
		
		while(p != NULL) {
 
            if(p->info == i) {
                encontrou = true;
            	prev->prox = p->prox;
            	free(p);
            	this->qtd--;
            	break;
			}
			
   			prev = p;
            p = p->prox;
		} 
	}
	
	if(encontrou){
 	  	printf("O valor %d foi removido da lista!\n\n", i);

	}
	else {
		printf("N�mero %d n�o foi econtrado na lista.\n", i);
	}
}

void Lista::insere_fim(int i) {
	no_dado* p = this->cabeca;
	
	if(this->isEmpty(p)) {
	    this->insere_inicio(i);
	}
	else {
		no_dado* novo = new no_dado(i, NULL);
		
		while(p != NULL) {
			
			if(p->prox == NULL) {
				p->prox = novo;
				this->qtd++;
				break;
			}
			
			p = p->prox;
		}
	}
	
	printf("\n");
  	printf("O valor %d foi adicionado no final da lista!\n\n", i);
		
}

void Lista::retira_inicio() {
	if(this->isEmpty(this->cabeca)) {
        printf("Lista est� vazia!\n");
        return;
	}
	
	no_dado* temp = this->cabeca->prox;
	free(this->cabeca);
	this->cabeca = temp;
	this->qtd--;
	
	printf("O valor do inicio da lista foi removido!\n\n");

}

void Lista::retira_fim() {
	no_dado* prev = NULL;
	no_dado* p = this->cabeca;
	
	if(this->isEmpty(p)) {
	    printf("Lista est� vazia!\n");
	    return;
	}
	else if(this->isEmpty(p->prox)) {
		this->retira_inicio();
	}
	else {
		prev = p;
  		p = p->prox;	
		
		while(p->prox != NULL) {
            prev = p;
            p = p->prox;	
		}
		
		prev->prox = NULL;
	 	free(p);
	 	this->qtd--;
	}
	
	printf("O valor do fim da lista foi removido!\n\n");
}

void Lista::imprime_inicio() {
	if(!this->isEmpty(this->cabeca)) {
        printf("Primeira informa��o da lista = %d.\n", this->cabeca->info);
	}
	else {
		printf("Lista est� vazia!\n");
	}
}

void Lista::imprime_fim() {
	no_dado* p = this->cabeca;
	
	if(!this->isEmpty(this->cabeca)) {
       while(p->prox != NULL) {
            p = p->prox;	
		}
		 
		printf("�ltima informa��o da lista = %d.\n", p->info);
	
	}
	else {
		printf("Lista est� vazia!\n");
	}
}

//tratamento m�todos privados
bool Lista::isEmpty(no_dado* l){
	return l==NULL;
}


