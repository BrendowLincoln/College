#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>s
#include "NoDado.h"

using namespace std;


class ListaDupla {
	
	private:
		NoDado* cabeca;
		NoDado* calda;
		int qtd;
		
	public:
		ListaDupla();
		~ListaDupla();
		void inserirOrdenado(int i);
		void remover(int i);
		void removerInicio();
		void removerFim();
		void imprimirInicioFim();
		void imprimirFimInicio();
		void buscarElemento(int i);
		
	private:
		void inserir(int i);
		void eVazia();
		void liberar();
		
};
