#include <iostream>
#include "DoubleList.h"
#include "Menu.h"

using namespace std;

int main(int argc, char const *argv[])
{

    DoubleList* dl = initializer();

    int os = 0;
    int choice = 0;
    int value = 0; 

    printf("Escolha seu sistema operacional\n");
    printf("1) Windows\n");
    printf("2) Unix\n");
    printf("Escolha: ");
    scanf("%d", &os);
    
    clearTerminal(os);

    do {

        choice = menu();

        switch (choice)
        {

            case 1:

                dl = initializer();

                clearTerminal(os);

                printf("Lista duplamente encadeada iniciada!!\n");

                break;
            case 2:

                printf("Qual o valor que deseja adicionar: ");
                scanf("%d", &value);
                dl = addInOrder(dl, value);

                clearTerminal(os);

                printf("\nO valor %d foi adicionado na lista de forma ordenada!\n\n", value);
                break;
            case 3:

                clearTerminal(os);
                printStartToEnd(dl);            
                printf("\n");
                break;
            case 4:

                clearTerminal(os);
                printEndToStart(dl);            
                printf("\n");
                break;
                
            case 5:

                clearTerminal(os);
                first(dl);       
                printf("\n");
                break;

            case 6:

                clearTerminal(os);
                last(dl);            
                printf("\n");
                break;

            case 7:

                clearTerminal(os);

                printf("Qual o valor que deseja procurar: ");
                scanf("%d", &value);
                printf("\n");

                if(find(dl, value) != NULL) {
                    dl = find(dl, value);
                    printf("O valor %d foi encontrado!\n", dl->info);
                } else {
                    printf("O valor %d não foi encontrado!\n", value);
                }
                printf("\n");
                break;

            case 8:

                clearTerminal(os);

                printf("Qual o valor que deseja remover: ");
                scanf("%d", &value);
                printf("\n");

                dl = remove(dl, value);            

                if(dl != NULL) {
                    printf("O valor %d foi removido da lista!\n", value);
                } 

                printf("\n");
                break;
            
            case 9:

                clearTerminal(os);

                dl = removeFirst(dl);
        

                if(dl != NULL) {
                    printf("O primeiro valor foi removido da lista\n");
                } 

                printf("\n");
                break;

            case 10:

                clearTerminal(os);

                    dl = removeLast(dl);
            

                    if(dl != NULL) {
                        printf("O ultimo valor foi removido da lista\n");
                    } 

                    printf("\n");
                    break;

            case 11:

                clearTerminal(os);

                freeList(dl);
                
                printf("\n");
                break;

            case 12:

                clearTerminal(os);
                printf("Programa finalizou...\n");
                break;
            
            default:
                break;
        }    

    
    } while(choice != 12);
    
    return 0;
}
