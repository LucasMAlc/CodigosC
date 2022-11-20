#include <stdio.h>
#include <stdlib.h>

int main() {

    char numeros[50]= "16.25, 18.96, 22.34, 18.94, 17.42, 22.63";
    FILE *arq;
    arq = fopen("result.txt", "w");

    
    if (arq == NULL) {
        printf("Erro!");
        exit(1);
    }

    fprintf(arq, "%s", numeros);
    fclose(arq);

    return 0;
}