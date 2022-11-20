#include <stdio.h>

void calculo (int *p, int *q){
    *p = *p * 10;
    *q = *q + 10;
}
int main(){
    int x = 2, y = 5;
    calculo(&x, &y);
    printf("%d - %d", x, y);
    return 0;
}