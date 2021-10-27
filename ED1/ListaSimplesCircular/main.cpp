#include <iostream>
#include "CircList.h"
#include "Menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    CircList* cl;

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

                cl = initializer();

                clearTerminal(os);

                printf("Lista circular iniciada!!\n");

                break;
            case 2:

                printf("Qual o valor que deseja adicionar: ");
                scanf("%d", &value);
                cl = addStart(cl, value);

                clearTerminal(os);

                printf("\nO valor %d foi adicionado no inicio da lista!\n\n", value);
                break;
            case 3:

                value = 0;

                printf("Qual o valor que deseja adicionar: ");
                scanf("%d", &value);
                cl = addEnd(cl, value);

                clearTerminal(os);
                
                printf("\nO valor %d foi adicionado no final da lista!\n\n", value);
                break;
            case 4:

                clearTerminal(os);
                printList(cl);            
                printf("\n");
                break;
            case 5:

                clearTerminal(os);
                first(cl);       
                printf("\n");
                break;

            case 6:

                clearTerminal(os);
                last(cl);            
                printf("\n");
                break;

            case 7:

                clearTerminal(os);

                if(!isEmpty(cl)) {
                    printf("Lista tem conteudo!\n");
                } else {
                    printf("Lista vazia!\n");
                }

                printf("\n");
                break;

            case 8:

                clearTerminal(os);

                printf("O tamnho atual da lista e: %d\n", size(cl));

                printf("\n");
                break;
            
            case 9:

                clearTerminal(os);

                printf("Qual o valor que deseja procurar: ");
                scanf("%d", &value);
                printf("\n");

                if(find(cl, value) != NULL) {
                    cl = find(cl, value);
                    printf("O valor %d foi encontrado!\n", cl->info);
                } else {
                    printf("O valor %d não foi encontrado!\n", cl->info);
                }
                printf("\n");
                break;

            case 10:

                clearTerminal(os);

                printf("Qual o valor que deseja verificar: ");
                scanf("%d", &value);
                printf("\n");

                if(contain(cl, value)) {
                    printf("O valor %d esta na lista!\n", cl->info);
                } else {
                    printf("O valor %d não esta na lista!\n", cl->info);
                }
                printf("\n");
                break;

            case 11:

                clearTerminal(os);

                printf("Qual o valor que deseja remover: ");
                scanf("%d", &value);
                printf("\n");

                cl = remove(cl, value);            

                if(cl != NULL) {
                    printf("O valor %d foi removido da lista!\n", value);
                } 

                printf("\n");
                break;

            case 12:

                clearTerminal(os);

                cl = removeFirst(cl);
        

                if(cl != NULL) {
                    printf("O primeiro valor foi removido da lista\n");
                } 

                printf("\n");
                break;

            case 13:

                    clearTerminal(os);

                    cl = removeLast(cl);
            

                    if(cl != NULL) {
                        printf("O ultimo valor foi removido da lista\n");
                    } 

                    printf("\n");
                    break;

            case 14:

                    clearTerminal(os);

                    freeList(cl);
                   
                    printf("\n");
                    break;

            case 15:
         
                clearTerminal(os);
                printf("Programa finalizou...\n");
                break;
            
            default:
                break;
        }    

    
    } while(choice != 15);


    return 0;
}
