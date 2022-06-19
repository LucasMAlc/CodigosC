#include <stdio.h>

int main(){

    int n, vetor[10];
    printf("Entre com um numero: ");
    scanf("%d", &n);
    
    for (int i = 1; i < 10; i++){
        vetor[i] = n * i;
    }

    printf("Tabuada de %f: \n", n);
    for (int j = 1; j < 10; j++){
        printf("%f ", vetor[j]);
    }
    
    return 0;
}