#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct doubleCircList {
    int info;
    struct doubleCircList* previous;
    struct doubleCircList* next;
    
};

typedef struct doubleCircList DoubleCircList;

DoubleCircList* initializer();

DoubleCircList* addStart(DoubleCircList* l, int v);

DoubleCircList* addEnd(DoubleCircList*, int v);

void printList(DoubleCircList* l);

void printListReverse(DoubleCircList* l);

void first(DoubleCircList* l);

void last(DoubleCircList* l);

bool isEmpty(DoubleCircList* l);

int size(DoubleCircList* l);

DoubleCircList* find(DoubleCircList* l, int v);

bool contain(DoubleCircList* l, int v);

DoubleCircList* remove(DoubleCircList* l, int v);

DoubleCircList* removeFirst(DoubleCircList* l);

DoubleCircList* removeLast(DoubleCircList* l);

void freeList(DoubleCircList* l);