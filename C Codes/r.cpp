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
        printf( "Dados do produto no.%d :", i + 1 );
        printf( "\ndigite o nome: ");
        cin >> produto[i];
        printf( "\nDigite o fornecedor: ");
        cin >> fornecedor[i];
        printf("\nPreco de custo: R$");
        cin >> custo[i];
        printf("\nPreco de venda: R$");
        cin >> venda[i];
        printf("\nProduto cadastrado \n\n");
    }
}

int procurar(vector<string> &produto){ 
    string s;
    printf("\nDigite o nome do produto a ser procurado: ");
    cin >> s; 
    for (int i = 0; i < produto.size(); i++)
    {
        string temp = produto[i];
        if (s == temp)
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
        printf( "Nome do produto: %s", produto[itm] );
        printf( "Nome do fornecedor: %s", fornecedor[itm] );
        printf( "Preco de custo: %s", custo[itm] );
        printf( "Preco de venda: %s", venda[itm] );
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
        printf( "\nNome do produto: %s", produto[itm] );
        printf( "\nNome do fornecedor: %s", fornecedor[itm] );
        printf( "\npreco de custo: %s", custo[itm] );
        printf( "\npreco de venda: %s", venda[itm] );
        printf( "\nDeseja alterar?(S/N): " );
        cin >> opicao;
        opicao = toupper(opicao);
    }
    if (opicao == 'S')
    {
        printf( "Digite os novo dados \n");
        printf( "Nome do produto: ");
        cin >> produto[itm];
        printf( "\nDigite o nome do fornecedor: ");
        cin >> fornecedor[itm];
        printf( "\nDigite o preco de custo: ");
        cin >> custo[itm];
        printf( "\nDigite o preco de venda: ");
        cin >> venda[itm];
        printf("\nProduto cadastrado");
    }
    else
    {
        printf( "Cadastro não alterado" );
    }
}

void remover(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda){

    int itm = procurar(produto);
    if (itm == -1) {

        printf("Produto não encontrado\n");

    } else {

        produto[itm] = "";
        custo[itm] = "";
        fornecedor[itm] = "";
        venda[itm] = "";
        printf( "Produto removido\n" );

    }

}

void listar(vector<string> &produto, vector<string> &custo, vector<string> &fornecedor, vector<string> &venda)
{
    for (int i = 0; i < 10; i++){

        if (produto[i] != ""){

            printf( "\nNome do produto: %s", produto[i]);
            printf( "\nNome do fornecedor: %s", fornecedor[i]);
            printf( "\nPreco de custo: %d", custo[i]);
            printf( "\npreco de venda: %d \n", venda[i]);

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
        cin >> opicao;
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
            printf("\n --Obrigado!-- \n");
            break;
        default:
            break;
        }
    }while (opicao!=6);

}