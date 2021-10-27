#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct circList {
    int info;
    struct circList* next;
    
};

typedef struct circList CircList;

CircList* initializer();

CircList* addStart(CircList* l, int v);

CircList* addEnd(CircList*, int v);

void printList(CircList* l);

void first(CircList* l);

void last(CircList* l);

bool isEmpty(CircList* l);

int size(CircList* l);

CircList* find(CircList* l, int v);

bool contain(CircList* l, int v);

CircList* remove(CircList* l, int v);

CircList* removeFirst(CircList* l);

CircList* removeLast(CircList* l);

void freeList(CircList* l);