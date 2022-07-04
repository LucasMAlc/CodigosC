#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define l 3
#define c 4

void cadastro(char p[l][c]){
    for(int i=0; i < l; i++){
	    for(int j=0; j < c; j++){

            if (j==0){
                printf("\nNome do produto %d : ", i+1);
		        gets(p[i][j]);
            } else if (j==1){
                printf("\nEntre com o nome do fornecedor: ");
		        gets(p[i][j]);
               printf("\nEntre com o valor de custo: ");
		        scanf("%d", &p[i][j]);
            }else{
                printf("\nEntre com o valor de venda: ");
		        scanf("%d", &p[i][j]);
            }
        }
    }
system("CLS");
}

void consultar(char p[l][c]){
    char proc[30];
    printf("\n Qual é o produto procurado? ");
    scanf("%s", &proc);
    for(int i=0; i < l; i++){
        if (strcmp(p[i], proc) == 0){
            for(int i=i; i = i; i++){
	            for(int j=0; j < c; j++){
                    if (j==0){
                        printf("\nNome do produto: %s \n", p[i][j]);
                    } else if (j==1){
                        printf("Nome do fornecedor: %s \n", p[i][j]);
                    }else if (j==2){
                        printf("Valor de custo: %d \n", p[i][j]);
                    }else{
                        printf("Valor de venda: %d \n", p[i][j]);
                    }
                }
            }
        }
        
    }
}

void alterar(char p[l][c]){

}

void remover(char p[l][c]){

}

void listar(char p[l][c]){
     for(int i=0; i < l; i++){
	    for(int j=0; j < c; j++){
            if (j==0){
                printf("\nNome do produto: %s\n", p[i][j]);
            } else if (j==1){
                printf("Entre com o nome do fornecedor: %s", p[i][j]);
            }else if (j==2){
               printf("Entre com o valor de custo: %d\n", p[i][j]);
            }else{
                printf("Entre com o valor de venda: %d\n", p[i][j]);
            }
        }
    }

}

void menu(char p[l][c]){
    int opicao;

    do{
        printf("MENU DE OPICAO\n");
        printf("1 - Consultar\n");
        printf("2 - Alterar\n");
        printf("3 - Remover\n");
        printf("4 - Listar\n");
        printf("5 - Finalizar\n");
        printf("Digite o numero da opicao desejada \n");
        scanf("%d",&opicao);
        system("CLS");
        switch(opicao){
            case 1:
                consultar(p);
                break;
            case 2:
                alterar(p);
                break;
            case 3:
            	remover(p);
            	break;
            case 4:
                listar(p);
                break;
            case 5:
                printf("Obrigado!\n");
                break;
            default:
                printf("Opcao invalida!\nTente novamente:\n");
                break;
        }
    }while(opicao!=5);
}
int main(){
    char produtos[l][c];

    cadastro(produtos);
    menu(produtos);

system("PAUSE");
return 0;
}