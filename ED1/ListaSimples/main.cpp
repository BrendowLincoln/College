#include <iostream>
#include "List.h"

using namespace std;

int main(int argc, char const *argv[])
{

    List* l = initializer();
    size(l);
    l = addEnd(l, 12);
    printList(l);
    l = add(l, 23);
    l = add(l, 45);
    l = add(l, 56);
    l = add(l, 78);
    printList(l);
    first(l);
    l = remove(l, 78);
    printList(l);
    l = remove(l, 45);
    l = removeFirst(l);
    printList(l);
    last(l);
    addEnd(l, 12);
    printList(l);
    addEnd(l, 908);
    printList(l);
    l = removeLast(l);
    printList(l);
    printf("Tamanho atual da lista: %d\n", size(l));
    printf("A quantidade de 12 encontrados: %d\n", count(l, 12));
    last(l);

    if(contain(l, 23)) {
        printf("O valor foi encontrado!\n");
    } else {
        printf("O valor não foi encontrado!\n");
    }


    freeList(l);
    return 0;
}
