#include "NoDado.h"

NoDado::NoDado() {
	this-info = 0;
	this->prox = 0;
	this->ant = 0;
}

NoDado::NoDado(int i, NoDado* prox, NoDado* ant) {
	this->info = i;
	this->prox = prox;
	this->ant = ant;
} 
