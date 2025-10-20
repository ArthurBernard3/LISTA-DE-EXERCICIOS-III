#include <stdio.h>

int main() {
int numero;

 printf("Digite um numero: ");
 scanf("%d", &numero);

 if(numero > 0) {
  printf("\nO numero %d e positivo.\n", numero);
 } else if(numero < 0) {
  printf("\nO numero %d e negativo.\n", numero);
 } else {
  printf("\nO numero e zero.\n");
 }
 return 0;
}