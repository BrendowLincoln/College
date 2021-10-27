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

List* addStart(List* l, int v);

List* addEnd(List* l, int v);

void printList(List* l);

bool isEmpty(List* l);

List* remove(List* l, int v);