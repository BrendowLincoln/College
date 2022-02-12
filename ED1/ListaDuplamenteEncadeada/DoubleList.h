#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct doubleList {
    int info;
    struct doubleList* previous;
    struct doubleList* next;
    
};

typedef struct doubleList DoubleList;

DoubleList* initializer();

DoubleList* addStart(DoubleList* l, int v);

DoubleList* addInOrder(DoubleList* l, int v);

void printStartToEnd(DoubleList* l);

void printEndToStart(DoubleList* l);

void first(DoubleList* l);

void last(DoubleList* l);

bool isEmpty(DoubleList* l);

int size(DoubleList* l);

int count(DoubleList* l, int v);

DoubleList* find(DoubleList* l, int v);

DoubleList* remove(DoubleList* l, int v);

DoubleList* removeFirst(DoubleList* l);

DoubleList* removeLast(DoubleList* l);

void freeList(DoubleList* l);