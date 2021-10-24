#include "List.h"

List* initializer() {
    
    return NULL;
}

List* add(List* l, int v) {

    List* newList = (List*) malloc(sizeof(List));
    newList->info = v;
    newList->next = l;
    
    return newList;
}

List* addEnd(List* l, int v) {

    if(isEmpty(l)) {
        
        return add(l, v);
    } else {

        List* p = l;

        while(p->next != NULL) {
            p = p->next;
        }

        List* newList = (List*) malloc(sizeof(List));
        newList->info = v;
        newList->next = NULL;
        p->next = newList;
        
        return p;

    }
}

void printList(List* l) {

    List* p = l;

    if(p != NULL) {
        printf("Info: ");
        for(p; p != NULL; p = p->next) {
    
            printf("%d ", p->info);
        }
    } else {
        cout << "Lista vazia!";
    }

    printf("\n");
}

void first(List* l) {

    List* p = l;

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

void last(List* l) {

    List* p = l;

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

bool isEmpty(List* l) {
    return (l == NULL);
}

int size(List* l) {

    List* p = l;
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

int count(List* l, int v) {

    List* p = l;
    int count = 0;

    if(p != NULL) {
        while (p != NULL)
        {
            if(p->info == v) {
                count++;
            }

            p = p->next;
        }
    } else {

        cout << " A lista esta vazia!" << endl;
    }

    return count;
}

List* find(List* l, int v) {

    List* p;

    for(p = l; p !=  NULL; p = p->next) {

        if (p->info == v) {
            return p;
        }
    }

    return NULL;

}

bool contain(List* l, int v) {

    return !isEmpty(find(l, v));
}

List* remove(List* l, int v) {

    List* prev = NULL;
    List* p = l;

    if(p == NULL) {

        return l;
    }

    while(p != NULL && p->info != v) {

        prev = p;
        p = p->next;
    }

    if (prev == NULL) {

        l = p->next;
    } else {

        prev->next = p->next;
    }

    free(p);
    return l;


}

List* removeFirst(List* l) {

    List* next = NULL;
    List* p = l;

    if(p == NULL) {

        return l;
    }
    

    next = p->next;
    free(p);
    
    return next;    

}

List* removeLast(List* l) {
    
    List* prev = NULL;
    List* p = l;

    if(p == NULL) {
        
        return l;
    } else if (p->next == NULL) {

        free(p);
        return NULL;
    } else {

        prev = p;
        p = p->next;

        while(p->next != NULL) {

            prev = p;
            p = p->next;
        }

        prev->next = NULL;
        
        free(p);
        
        return l;    
    }

}

void freeList(List* l) {

    List* p = l;

    while (p != NULL) {

        List* t = p->next;
        free(p);
        p = t;
    }
}