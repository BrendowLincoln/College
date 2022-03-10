#include "Menu.h"

int menu() {

    int choice = 0;
    
    printf("\n\nLista Encadeada Simples (OOP)\n");
    printf("---------------------------------\n");
    printf("1) Adicionar no início da lista\n");
    printf("2) Adicionar no fim da lista\n");
    printf("3) Imprimir lista\n");
    printf("4) Imprimir primeiro valor da lista\n");
    printf("5) Imprimir ultimo valor da lista\n");
    printf("6) Buscar valor na lista\n");
    printf("7) Verificar se a lista está vazia\n");
    printf("8) Mostrar tamanho da lista\n");
    printf("9) Remover valor na lista\n");
    printf("10) Remover primeiro valor na lista\n");
    printf("11) Remover ultimo valor na lista\n");
    printf("12) Liberar\n");
    printf("13) Finalizar lista\n\n");
    printf("Escolha: ");
    scanf("%d", &choice);
    printf("\n\n");

    return choice;
}

void clearTerminal(int os) {	
	
	if(os == 1) {
        system("cls");
    } 
	else if (os == 2){
        system("clear");
    }
    
    
}

void printSystemChoseMenu() {
	
	printf("Escolha seu sistema operacional\n");
    printf("1) Windows\n");
    printf("2) Unix\n");
    printf("Escolha: ");
}
