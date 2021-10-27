#include "CircList.h"

CircList* initializer() {
    
    return NULL;
}

CircList* addStart(CircList* l, int v) {

    CircList* newList = (CircList*) malloc(sizeof(CircList));
    newList->info = v;
    
    if(isEmpty(l)) {

        newList->next = newList;
        return newList;
    } else {
        newList->next = l->next;
        l->next = newList;
    }
    
    return l;
}

CircList* addEnd(CircList* l, int v) {

    if(isEmpty(l)) {
        
        return addStart(l, v);
    } 

    CircList* newList = (CircList*) malloc(sizeof(CircList));
    newList->info = v;
    newList->next = l->next;
    l->next = newList;
    return newList;
}

void printList(CircList* l) {

    if(!isEmpty(l)) {

        CircList* p = l->next;

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

void first(CircList* l) {

    CircList* p = l->next;

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

void last(CircList* l) {

    CircList* p = l;

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

bool isEmpty(CircList* l) {
    return (l == NULL);
}

int size(CircList* l) {

    CircList* p = l;
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

CircList* find(CircList* l, int v) {

    CircList* p = l->next;

    do {

        if (p->info == v) {
            return p;
        
        }
        p = p->next;

    } while(p != l->next);

    
    return NULL;

}

bool contain(CircList* l, int v) {

    return !isEmpty(find(l, v));
}

CircList* remove(CircList* l, int v) {

    if(isEmpty(l)) {

        printf("List vazia!\n");
        return l;
    }

    CircList* prev = NULL;
    CircList* p = l->next;

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

CircList* removeFirst(CircList* l) {

    CircList* p = l->next;

    if(p == NULL) {

        return l;
    }

    l->next = p->next;
    free(p);
    return l;
    

}

CircList* removeLast(CircList* l) {
    
    CircList* prev = NULL;
    CircList* p = l->next;

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

void freeList(CircList* l) {

    if(!isEmpty(l)) {

        CircList* p = l;

        do {

            CircList* t = p->next;
            free(p);
            p = t;

        } while(p->next != l->next);

        cout << "Lista liberada!" << endl;

    } else {

        cout << "Lista vazia!";
    }
}