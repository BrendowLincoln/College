#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct list {
    int info;
    struct list* next;
    
};

typedef struct list List;

List* initializer();

List* add(List* l, int v);

List* addEnd(List*, int v);

void printList(List* l);

void first(List* l);

void last(List* l);

bool isEmpty(List* l);

int size(List* l);

int count(List* l, int v);

List* find(List* l, int v);

bool contain(List* l, int v);

List* remove(List* l, int v);

List* removeFirst(List* l);

List* removeLast(List* l);

void freeList(List* l);