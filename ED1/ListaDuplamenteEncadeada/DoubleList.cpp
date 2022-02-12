#include "DoubleList.h"

DoubleList* initializer() {
    
    return NULL;
}

DoubleList* addStart(DoubleList* l, int v) {

    DoubleList* newList = (DoubleList*) malloc(sizeof(DoubleList));

    newList->info = v;
    newList->next = l;
    newList->previous = NULL;
    
    // Checking that DoubleList isn´t empty
    if(l != NULL) {
        
        l->previous = newList;
    }

    return newList;
}

DoubleList* addInOrder(DoubleList* l, int v) {

    l = addStart(l, v);

    int qtd = size(l);  // Pega o tamanho atual da lista.

	DoubleList* a;
    DoubleList* b; 
    DoubleList* c;

    // Só faz sentido ordenar Lista com mais de 1 item.
    if (qtd>1){

		for(int i=0; i<qtd; i++){ 
			
			// Inicia a bolha a partir de L.
			a = l->previous; // Anterior
			b = l; // Atual
			c = l->next; // Depois
			int flag = 0; // Apenas para sinalizar a primeira troca a partir de L
			
			while(c != NULL){ // Nó da direita é não nulo, então dá para avaliar troca
				if(b->info > c->info){ // Se esq > dir, então TROCA!

                    int tmp = b->info;
                    b->info = c->info;
                    c->info = tmp;
				}
				if (flag == 0){ // Tem que atualizar L para novo primeiro nó - novo nó inicial
					l = b; // Atualiza L para novo primeiro nó
					flag = 1;	
				}				
				else 
                    a->next = b; // Refaz apontamento do nó anterior com o novo nó esq, que por sua vez tem ponteiro para demais nós
			
				// Anda a bolha a, b, c para nova análise
				a = b;
				b = b->next;
				c = b->next;	
			}
		}	
	}
	return l; // Retorna a nova Lista resultante já ordenada.
}

void printStartToEnd(DoubleList* l) {

    if(!isEmpty(l)) {
        cout << "Info: ";
        for(DoubleList* p = l; p != NULL; p = p->next) {

            cout << p->info << " ";
        }
        cout << endl;
    } else 
        cout << "Lista vazia!" << endl;

}

void printEndToStart(DoubleList* l) {

    if(!isEmpty(l)) {

        DoubleList* p = l;

        while(p->next != NULL) {
            p = p->next;
        }

        cout << "Info: ";
        for(p; p != l->previous; p = p->previous) {

            cout << p->info << " ";
        }
        cout << endl;
    } else 
        cout << "Lista vazia!" << endl;

}

void first(DoubleList* l) {

    DoubleList* p = l;

    if(p != NULL) {
        printf("Inicio: ");
        for(p = l; p != NULL; p = p->next) {
    
            printf("%d ", p->info);
            break;
        }
    } else {
        cout << "Lista vazia!";
    }

    printf("\n");
}

void last(DoubleList* l) {

    DoubleList* p = l;

    if(p != NULL) {
        printf("Fim: ");

        while(p->next != NULL) {
            p = p->next;
        }

        printf("%d ", p->info);

        
    } else {
        cout << "Lista vazia!";
    }

    printf("\n");
}

bool isEmpty(DoubleList* l) {
    
    return l == NULL;
}

DoubleList* find(DoubleList* l, int v) {

    if(!isEmpty(l)) {
        
        for(DoubleList* p = l; p != NULL; p = p->next) {

            if(p->info == v) 
                return p;
        }
    }

    return NULL;
}

int size(DoubleList* l) {

    DoubleList* p = l;
    int size = 0;

    if(p != NULL) {
        while (p != NULL)
        {
            size++;
            p = p->next;
        }
    } else {

        cout << " A lista esta vazia!" << endl;
    }
    
    return size;

}

DoubleList* remove(DoubleList* l, int v) {

    DoubleList* p = find(l, v);

    if (p == NULL) 
        return l;

    if (l == p)
        l = p->next;
    else
        p->previous->next = p->next;

    if (p->next != NULL)
        p->next->previous = p->previous;

    free(p);

    return l;
}

DoubleList* removeFirst(DoubleList* l) {

    DoubleList* next = NULL;
    DoubleList* p = l;

    if(p == NULL) {
        return l;
    }

    next = p->next;
    free(p);
    
    return next;    

}

DoubleList* removeLast(DoubleList* l) {
    
    DoubleList* p = l;

    if(p == NULL) {
        
        return l;
    } else if (p->next == NULL) {

        free(p);
        return NULL;
    } else {

        p->previous = p;
        p = p->next;

        while(p->next != NULL) {

            p->previous = p;
            p = p->next;
        }

        p->previous->next = NULL;
        
        free(p);
        
        return l;    
    }

}

void freeList(DoubleList* l) {

    DoubleList* p = l;

    while (p != NULL) {

        DoubleList* t = p->next;
        free(p);
        p = t;
    }
}
