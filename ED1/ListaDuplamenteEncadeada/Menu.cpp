// MODELO

#include "Menu.h"

int menu() {

    int choice = 0;
    
    printf("\n\nLista Duplamente Encadeada\n");
    printf("---------------------------------\n");
    printf("1) Inicializar a lista\n");
    printf("2) Adicionar valor ordenado\n");
    printf("3) Imprimir lista do início ao fim\n");
    printf("4) Imprimir lista do fim ao início\n");
    printf("5) Imprimir primeiro valor da lista\n");
    printf("6) Imprimir ultimo valor da lista\n");
    printf("7) Pegar um valor da lista\n");
    printf("8) Remover um valor da lista\n");
    printf("9) Remover primeiro valor na lista\n");
    printf("10) Remover ultimo valor na lista\n");
    printf("11) Liberar\n");
    printf("12) Finalizar lista\n\n");
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
