#include <stdio.h>

int main (){
    float C, F;
	printf("Digite uma temperatura em Graus Celsius: ");
    scanf(" %f,", &C);
    F = (9*C+160)/5;
    printf("A temperatura em Fahrenheit é: %.4f", F); 
    return 0;
}