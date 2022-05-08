#include <stdio.h>

int main(){
    float a, b;
    printf("Entre com o valores: ");
    scanf("%f %f", &a, &b);

    if (a > 0 && b > 0){
        printf("Valores válidos");
    } else {
        printf("Valores inválidos");
    }
    
    return 0;
}