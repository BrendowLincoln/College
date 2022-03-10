#include "Lista.h"
#include "Menu.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	//MELHORAR A INTERFACE COM MENU PARA OS MÉTODOS EM TESTE DE CLASSE LISTA
	
	
	Lista l; //instanciando objeto l conforme a classe Lista
	
 	int os = 0;
    int choice = 0;
    int value = 0; 

    printSystemChoseMenu();
    scanf("%d", &os);
    
    clearTerminal(os);

    do {

	   	int valor = 0;

        choice = menu();

        switch (choice)
        {

            case 1:
                clearTerminal(os);
				
				printf("Digite o valor para adicionar: ");
			    scanf("%d", &valor);			    
			    l.insere_inicio(valor);
                break;
                
            case 2:

               clearTerminal(os);
				
				printf("Digite o valor para adicionar: ");
			    scanf("%d", &valor);
    			printf("\n");
			    
			    l.insere_fim(valor);
                break;
            case 3:

                clearTerminal(os);
                l.imprime();
                break;
            case 4:

                clearTerminal(os);
                l.imprime_inicio();
                break;
                
            case 5:

                clearTerminal(os);
                l.imprime_fim();
                break;

            case 6:

                clearTerminal(os);
                printf("Digite o valor para buscar: ");
			    scanf("%d", &valor);			    
			    l.busca(valor);
                break;

            case 7:

                clearTerminal(os);
                l.vazia();
                break;

            case 8:

                clearTerminal(os);
               	l.tamanho();
                break;
            
            case 9:
            	
                clearTerminal(os);
				printf("Digite o valor para remover: ");
			    scanf("%d", &valor);
			    
			    l.retira(valor);
                break;

            case 10:

                clearTerminal(os);
                l.retira_inicio();    
                break;

            case 11:

                clearTerminal(os);
                l.retira_fim();
                break;

            case 12:

                clearTerminal(os);
                l.libera();
                break;

            case 13:
            	
            	clearTerminal(os);
            	l.~Lista();
                printf("Programa finalizou...\n");
                break;
            
            default:
                break;
        }    

    
    } while(choice != 13);
    
    return 0;
//	
//	l.imprime_fim();
//	l.insere_fim(120);
//	l.imprime_fim();
//	l.busca(23);
//	l.insere_inicio(23);
//	l.insere_inicio(45);
//	l.insere_inicio(56);
//	l.imprime_inicio();
//	l.insere_inicio(78);
//	l.insere_inicio(56);
//	l.imprime_fim();
//	l.imprime();
//	l.busca(56);
//	l.imprime();
//	l.retira(45);
//	l.imprime();
//	l.retira(78);
//	l.imprime();
//	l.~Lista();	
//	system("pause");
//	return 0;
}
