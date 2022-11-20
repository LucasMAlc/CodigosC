#include <stdio.h>

int main(void){

  int num, vetor[10];
  printf("Entre com um numero: ");
  scanf("%d", &num);

	printf("Tabuada de %d: \n", num);
	
  for (int i = 1; i <= 10; i++){
    vetor[i] = num * i;
		printf("%d x %d = %d \n", i, num, vetor[i]);
  }
    
  return 0;
}