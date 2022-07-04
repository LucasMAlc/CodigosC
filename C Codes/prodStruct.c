#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

// incompleto 

struct cadastra{
    int quantidade;
    char nome[30];
    char fornecedor[30];
    float precocusto, precovenda;
};

struct cadastra cad[MAX];
int quantp=0;

void cadastraProduto(struct cadastra produto){
    cad[quantp]=produto;
    quantp++;
}


struct cadastra leDados(){
    struct cadastra auxiliar;
    srand(time (NULL));
    fflush(stdin);
    printf("Digite o nome do produto\n");
    scanf("%s",auxiliar.nome);
    printf("Quantide de produtos para o estoque\n");
    scanf("%d",&auxiliar.quantidade);
    fflush(stdin);
    printf("Nome do fornecedor\n");
    scanf("%s",auxiliar.fornecedor);
    printf("Digite o preco do produto\n");
    scanf("%f",&auxiliar.precocusto);
    fflush(stdin);
    printf("Digite o preco do produto\n");
    scanf("%f",&auxiliar.precovenda);
    fflush(stdin);
    system("CLS");
return auxiliar;
}

void buscar(){
    int i,opica;
    char nome[30];
        do{
            printf("MENU DE BUSCA\n");
            printf("1- Mostrar lista de produtos\n");
            printf("2- Buscar pelo nome produto ou pelo nome do fornecedor\n");;
            printf("3- Sair do menu busca\n");
            printf("Digite o numero da opicao desejada \n");
            scanf("%d",&opica);
            system("CLS");
            switch(opica){
                case 1:
                    printf("Lista de produtos cadastrados\n");
                    for(i=0;i<quantp;i++){
                        printf("Produto %d \n",i+1);
                        printf("+++++++++++++++++++++++\n");
                        printf("Nome do produto:       %s\n",cad[i].nome);
                        printf("Quantidade no estoque: %d\n",cad[i].quantidade);
                        printf("Nome do fornecedor:    %s\n",cad[i].fornecedor);
                        printf("Preço de custo do produto:      %.2f\n",cad[i].precocusto);
                        printf("Preço de venda do produto:      %.2f\n",cad[i].precovenda);
                        printf("+++++++++++++++++++++++\n");
                    }
                    break;
                case 2:
                    printf("Digite o nome do produto ou nome do fornecedor\n");
                    scanf("%s",&nome);
                    for(i=0;i<quantp;i++){
                        if((strcmp (nome, cad[i].nome) == 0) || strcmp (nome, cad[i].fornecedor) == 0) {
                            printf("+++++++++++++++++++++++\n");
                            printf("Nome do produto:       %s\n",cad[i].nome);
                            printf("Quantidade no estoque: %d\n",cad[i].quantidade);
                            printf("Nome do fornecedor:    %s\n",cad[i].fornecedor);
                            printf("Preço do produto:      %.2f\n",cad[i].precocusto);
                            printf("Preço do produto:      %.2f\n",cad[i].precovenda);
                            printf("+++++++++++++++++++++++\n");
                        }
                    }
                    break;
                case 3:
                    break;
            }
        }while(opica!=3);
        system("CLS");
}
void alterar (){
    int i;
    char nome[30];
    fflush(stdin);
    printf("Digite o nome do produto que deseja alterar: ");
    scanf("%s",&nome);
    for(i=0;i<quantp;i++){
        if(strcmp (nome, cad[i].nome) == 0){
            fflush(stdin);
            printf("Digite o nome do produto\n");
            scanf("%s",&cad[i].nome);
            printf("Quantide de produtos para o estoque\n");
            scanf("%d",&cad[i].quantidade);
            fflush(stdin);
            printf("Nome do fornecedor\n");
            scanf("%s",&cad[i].fornecedor);
            printf("Digite o preço de custo\n");
            scanf("%f",&cad[i].precocusto);
            fflush(stdin);
            printf("Digite o preço de venda\n");
            scanf("%f",&cad[i].precovenda);
            fflush(stdin);
        }
    }
    system("CLS");
}
void remover () {    			// Função remover
	int i,cont=0;
	char nomeRem[30];
	printf("veja numero do produto que você deseja remover\n");
	buscar();                   // Chama a função listar para que seja visto qual codigo relacionado ao produto
	printf("Informe o Codigo do Produto que se Deseja Excluir: "); // Pede o codigo para busca
	scanf("%i",&nomeRem);
	for(i = 0 ; i < quantp ; i++){

		if (cad[i].nome == nomeRem) {  // Compara o codigo relacionado e exclui

			cad[i] = cad[i+1];                // Realoca a Memória

            quantp--;                         // decrementa o indice do vetor para que ocupe o cadastro removido
            cont++;

		}
	}
	if(cont>0){
        printf ("\n\nPRODUTO EXCLUIDO COM SUCESSO !");
        printf ("\nPressione ENTER Para Continuar !");
        setbuf(stdin,NULL);
        getchar ();
        system ("cls");
    }else {
        printf("Esse numero de codigo nao existe\n");
    }
}

void menu(){
    int opicao;
    struct cadastra novoProduto;
    for (int i = 0; i < MAX; i++){
    novoProduto=leDados();
    cadastraProduto(novoProduto);
    }
   
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

int main (){
    menu();
system("PAUSE");
return 0;
}