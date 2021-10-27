#include "List.h"

List* initializer() {
    
    return NULL;
}

List* addStart(List* l, int v) {

    List* newList = (List*) malloc(sizeof(List));
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

List* addEnd(List* l, int v) {

    if(isEmpty(l)) {

        return addStart(l, v);
    }

    List* newList = (List*) malloc(sizeof(List));
    newList->info = v;
    newList->next = l->next;
    l->next = newList;
    
    return newList;
}

void printList(List* l) {

    if(!isEmpty(l)) {

        List* p = l->next;
        printf("Current list: ");
        
        do {
            
            printf("%d ", p->info);
            p = p->next;
        } while(p != l->next);
    } else {

        printf("Lista vazia!");
    }

    printf("\n");
}

bool isEmpty(List* l) {
    return (l == NULL);
}

List* remove(List* l, int v) {

    if(isEmpty(l)) {

        printf("Lista vazia!\n");
        return l;
    }

    List* prev = NULL;
    List* p = l->next;

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