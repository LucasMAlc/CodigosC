#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void menu(){
    int opicao;
   
    do{
        printf("MENU DE OPICAO\n");
        printf("1 - Buscar\n");
        printf("2 - Alterar\n");
        printf("3 - Remover\n");
        printf("4 - Finalizar\n");
        printf("Digite o numero da opicao desejada \n");
        scanf("%d",&opicao);
        system("CLS");
        switch(opicao){
            case 1:
                buscar();
                break;
            case 2:
                alterar();
                break;
            case 3:
            	remover();
            	break;
            case 4:
                printf("Obrigado!\n");
                break;
            default:
                printf("Opcao invalida!\nTente novamente:\n");
                break;
        }
    }while(opicao!=4);
}
int main(){
    menu();

system("PAUSE");
return 0;
}