#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int a, b, soma;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &a); 
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &b);
  soma = a + b;
  
  printf("O valor da soma = %d\n", soma);
  
  
  return(0);
}
