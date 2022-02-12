#include "DoubleCircList.h"

DoubleCircList* initializer() {
    
    return NULL;
}

DoubleCircList* addStart(DoubleCircList* l, int v) {

    DoubleCircList* newList = (DoubleCircList*) malloc(sizeof(DoubleCircList));
    newList->info = v;
        
    if(isEmpty(l)) {

        newList->next = newList;
        newList->previous = newList;
        return newList;
    } else {
        newList->next = l->next;
         

        l->next = newList;
    }
    
    return l;
}

DoubleCircList* addEnd(DoubleCircList* l, int v) {

    if(isEmpty(l)) {
        
        return addStart(l, v);
    } 

    DoubleCircList* newList = (DoubleCircList*) malloc(sizeof(DoubleCircList));
    newList->info = v;
    newList->next = l->next;
    l->next = newList;
    return newList;
}

void printList(DoubleCircList* l) {

    if(!isEmpty(l)) {

        DoubleCircList* p = l->next;

        printf("Lista atual: ");
        do {

            printf("%d ", p->info);
            p = p->next;

        } while(p != l->next);

    } else {

        cout << "Lista vazia!";
    }

    printf("\n");
}

void printListReverse(DoubleCircList* l) {
    
    DoubleCircList* p = l; /* faz p apontar para o nó inicial */
    /* testa se lista não é vazia */
    if (p) {

        printf("Lista reversa: ");
    
    /* percorre os elementos até alcançar novamente o início */
        do {
        printf("%d ", p->info); /* imprime informação do nó */
        p = p->previous; /* "avança" para o nó anterior */
        } while (p != l);

    } else {

        cout << "Lista vazia!";
    }

    printf("\n");
}

void first(DoubleCircList* l) {

    DoubleCircList* p = l->next;

    if(p != NULL) {
        printf("Inicio: ");
        
        do {

            printf("%d ", p->info);
            break;

        } while(p != l->next);

    } else {
        cout << "Lista vazia!";
    }

    printf("\n");
}

void last(DoubleCircList* l) {

    DoubleCircList* p = l;

    if(p != NULL) {
        printf("Fim: ");

        do {

            p = p->next;
        } while(p->next != l->next);

        printf("%d ", p->info);

        
    } else {
        cout << "Lista vazia!";
    }

    printf("\n");
}

bool isEmpty(DoubleCircList* l) {
    return (l == NULL);
}

int size(DoubleCircList* l) {

    DoubleCircList* p = l;
    int size = 0;

    if(p != NULL) {
        do {

            size++;
            p = p->next;

        } while(p != l);

    } else {

        cout << "Lista vazia!" << endl;
    }
    
    return size;

}

DoubleCircList* find(DoubleCircList* l, int v) {

    DoubleCircList* p = l->next;

    do {

        if (p->info == v) {
            return p;
        
        }
        p = p->next;

    } while(p != l->next);

    
    return NULL;

}

DoubleCircList* remove(DoubleCircList* l, int v) {

    if(isEmpty(l)) {

        printf("List vazia!\n");
        return l;
    }

    DoubleCircList* prev = NULL;
    DoubleCircList* p = l->next;

    do {

        if(p->info == v) {
            break;
        }

        prev = p;
        p = p->next;

    } while(p != l->next);

    if(prev != NULL && p == l->next) {

        return l;
    }

    if(p == p->next) {

        free(p);
        return NULL;
    }

    if(prev == NULL && p == l->next) {

        l->next = p->next;
        free(p);
        return l;
    }

    prev->next = p->next;

    if(p == l) {
        l = prev;
    }

    free(p);
    return l;
}

DoubleCircList* removeFirst(DoubleCircList* l) {

    DoubleCircList* p = l->next;

    if(p == NULL) {

        return l;
    }

    l->next = p->next;
    free(p);
    return l;
    

}

DoubleCircList* removeLast(DoubleCircList* l) {
    
    DoubleCircList* prev = NULL;
    DoubleCircList* p = l->next;

    if(p == NULL) {
        
        return l;
    } else if (p->next == l->next) {

        free(p);
        return NULL;
    } else {

        prev = p;
        p = p->next;

         do {

            prev = p;
            p = p->next;
        } while(p->next != l->next);

        prev->next = p->next;

        if (p == l) {
            
		    l = prev;
	    } 
        
        
        free(p);
        
        return l;    
    }

}

void freeList(DoubleCircList* l) {

    if(!isEmpty(l)) {

        DoubleCircList* p = l;

        do {

            DoubleCircList* t = p->next;
            free(p);
            p = t;

        } while(p->next != l->next);

        cout << "Lista liberada!" << endl;

    } else {

        cout << "Lista vazia!";
    }
}