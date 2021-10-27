#include "Menu.h"

int menu() {

    int choice = 0;
    
    printf("\n\nLista Encadeada Simples Circular\n");
    printf("---------------------------------\n");
    printf("1) Inicializar a lista\n");
    printf("2) Adicionar valor no inicio\n");
    printf("3) Adicionar valor no final\n");
    printf("4) Imprimir lista\n");
    printf("5) Imprimir primeiro valor da lista\n");
    printf("6) Imprimir ultimo valor da lista\n");
    printf("7) Verificar lista vazia\n");
    printf("8) Tamanho da lista\n");
    printf("9) Pegar um valor da lista\n");
    printf("10) Verificar se um valor existe na lista\n");
    printf("11) Remover um valor da lista\n");
    printf("12) Remover primeiro valor na lista\n");
    printf("13) Remover ultimo valor na lista\n");
    printf("14) Liberar\n");
    printf("15) Finalizar lista\n\n");
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