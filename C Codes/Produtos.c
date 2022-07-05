#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define l 3

void cadastro(){
    for(int i=0; i < l; i++){
	    for(int j=0; j < c; j++){

            if (j==0){
                printf("\nDigite o nome do produto %d : ", i+1);
		        scanf("%s", p[i][j]);
                fflush(stdin);
            } else if (j==1){
                printf("\nDigite o nome do fornecedor: ");
		        scanf("%s", p[i][j]);
                fflush(stdin);
            } else if (j==2){
               printf("\nEntre com o preço de custo: R$");
		        scanf("%d", &p[i][j]);
                fflush(stdin);
            }else{
                printf("\nEntre com o preço de venda: R$");
		        scanf("%d", &p[i][j]);
                fflush(stdin);
            }
        }
    }
system("CLS");
}

void consultar(char p[l][c][30]){
/*
    char proc[30];
    printf("\n Qual é o produto procurado? ");
    scanf("%s", &proc);
    for(int i=0; i < l; i++){
        if (p[i] == proc){
            printf("\n --------Encontrado-------- \n");
            for(int k=0; k = i; i++){
	            for(int j=0; j < c; j++){
                    if (j==0){
                        printf("\nNome do produto: %s \n", p[k][j]);
                    } else if (j==1){
                        printf("Nome do fornecedor: %s \n", p[k][j]);
                    }else if (j==2){
                        printf("Preco de custo: R$%d \n", p[k][j]);
                    }else{
                        printf("Preco de venda: R$%d \n", p[k][j]);
                    }
                }
            }
        } else {
            printf("\n --------Não encontrado-------- \n");
        }
    }
*/
}

void alterar(char p[l][c][30]){

}

void remover(char p[l][c][30]){

}

void listar(char p[l][c][30]){
    /*
    printf("\n --------Lista de produtos-------- \n");
    for(int i=0; i < l; i++){
	    for(int j=0; j < c; j++){
            if (j==0){
                printf("\nNome do produto: %s\n", p[i][j]);
            } else if (j==1){
                printf("Entre com o nome do fornecedor: %s\n", p[i][j]);
            }else if (j==2){
               printf("Preco de custo: R$%d\n", p[i][j]);
            }else{
                printf("Preco de venda: R$%d\n", p[i][j]);
            }
        }
    }
*/
}

void menu(char p[l][c][30]){
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
    char nomes[l][25];
    char fornecedor[l][25];
    int precoC[l], precoV[l];

    for(int lin = 0; lin < l; l++){
        printf("\nDigite o nome da posicao %d. ", lin);
        scanf("%25[^\n]", nomes[lin]);
        scanf("%c");
    }

    for(l = 0; l < 5; l++)
        printf("\nNome na posicao %d: %s", l, nomes[l]);

    cadastro();
    menu(produtos);

system("PAUSE");
return 0;
}