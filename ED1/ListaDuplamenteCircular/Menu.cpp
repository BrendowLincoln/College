#include "Menu.h"

int menu() {

    int choice = 0;
    
    printf("\n\nLista Duplamente Encadeada Circular\n");
    printf("---------------------------------\n");
    printf("1) Inicializar a lista\n");
    printf("2) Adicionar valor no inicio\n");
    printf("3) Adicionar valor no final\n");
    printf("4) Imprimir lista\n");
    printf("5) Imprimir lista reverso\n");
    printf("6) Remover um valor da lista\n");
    printf("7) Remover primeiro valor na lista\n");
    printf("8) Remover ultimo valor na lista\n");
    printf("9) Liberar\n");
    printf("10) Finalizar lista\n\n");
    printf("Escolha: ");
    scanf("%d", &choice);
    printf("\n\n");

    return choice;
}

void clearTerminal(int os) {
    
    if(os == 1) {
        system("cls");
    } else {
        system("clear");
    }
}