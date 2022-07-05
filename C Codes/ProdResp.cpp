#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void printMenu()
{
    printf("\n1 - Para registrar um produto \n");
    printf("2 - Para consultar \n");
    printf("3 - Para alterar \n");
    printf("4 - Para remover \n");
    printf("5 - Para listar \n");
    printf("6 - Finalizar \n");
    printf("Digite a opicao: ");
}
void cadastrar(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda)
{
    printf( "\n--Insira os dados--\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Dados do produto no.%d :", i + 1 );
        printf("\n Digite o nome: ");
        gets(produto[i]);
        printf( "\n Digite o fornecedor: ");
        gets(fornecedor[i]);
        printf("\n Preco de custo: R$");
        gets(custo[i]);
        printf("\n Preco de venda: R$");
        gets(venda[i]);
        printf("\n --Produto cadastrado-- \n\n");
    }
}

int procurar(vector<string> &produto){ 
    string proc;
    printf("\nDigite o nome do produto a ser procurado: ");
    gets(proc); 
    for (int i = 0; i < produto.size(); i++)
    {
        string temp = produto[i];
        if (proc == temp)
        {
            return i;
        }
    }
    return -1; 
}

void consultar(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda){
    int itm = procurar(produto);
    if (itm == -1)
    {
        printf("\nProduto não encontrado\n");
    }
    else
    {
        printf("Nome do produto: %s", produto[itm]);
        printf("Nome do fornecedor: %s", fornecedor[itm]);
        printf("Preco de custo: %s", custo[itm]);
        printf("Preco de venda: %s", venda[itm]);
    }
} 

void alterar(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda)
{
    int itm = procurar(produto);
    char opicao = 'N';
    if (itm == -1)
    {
        printf("Produto não encontrado\n");
    }
    else
    {
        printf("\nNome do produto: %s", produto[itm] );
        printf("\nNome do fornecedor: %s", fornecedor[itm] );
        printf("\npreco de custo: %s", custo[itm] );
        printf("\npreco de venda: %s", venda[itm] );
        printf("\nDeseja alterar?(S/N): " );
        gets(opicao);
        opicao = toupper(opicao);
    }
    if (opicao == 'S')
    {
        printf("Digite os novo dados \n");
        printf("Nome do produto: ");
        gets(produto[itm]);
        printf( "\nDigite o nome do fornecedor: ");
        gets(fornecedor[itm]);
        printf( "\nDigite o preco de custo: ");
        gets(custo[itm]);
        printf( "\nDigite o preco de venda: ");
        gets(venda[itm]);
        printf("\nProduto cadastrado");
    }
    else
    {
        printf("Cadastro não alterado" );
    }
}

void remover(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda){

    int itm = procurar(produto);
    if (itm == -1) {

        printf("Produto não encontrado\n");

    } else {

        //strcpy(produto[itm],""); 
        produto[itm] = "";
        //strcpy(fornecedor[itm],""); 
        custo[itm] = "";
        //strcpy(custo[itm],""); 
        fornecedor[itm] = "";
        //strcpy(venda[itm],"");  
        venda[itm] = "";
        
        printf("Produto removido\n" );

    }

}

void listar(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda)
{
    for (int i = 0; i < 10; i++){

        if (produto[i] != ""){

            printf("\nNome do produto: %s", produto[i]);
            printf("\nNome do fornecedor: %s", fornecedor[i]);
            printf("\nPreco de custo: %s", custo[i]);
            printf("\npreco de venda: %s", venda[i]);

        }

    }
}

int main(){

    vector<string> produto(10); 
    vector<string> custo(10);
    vector<string> fornecedor(10);
    vector<string> venda(10);

    printf( "\n --Pagina de cadastro-- \n");
    int opicao;

    do{
        printMenu();
        scanf("%d", &opicao);
        switch (opicao){
        case 1:
            cadastrar(produto, fornecedor, custo, venda);
            break;
        case 2:
            consultar(produto, fornecedor, custo, venda);
            break;
        case 3:
            alterar(produto, fornecedor, custo, venda);
            break;
        case 4:
            remover(produto, fornecedor, custo, venda);
            break;
        case 5:
            listar(produto, fornecedor, custo, venda);
            break;
        case 6:
            printf("\n--Programa finalizado!--\n");
            break;
        default:
            break;
        }
    }while (opicao!=6);

}