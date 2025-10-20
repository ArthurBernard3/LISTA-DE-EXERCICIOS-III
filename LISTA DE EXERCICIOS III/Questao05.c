#include <stdio.h>

int main() {
 char numero[100];  
 int i;

  printf("Digite um numero inteiro: ");
  scanf("%s", numero); 

  printf("Numero invertido: ");
    
  for (i = 0; numero[i] != '\0'; i++); 
  
    for (i = i - 1; i >= 0; i--) {
   printf("%c", numero[i]);
    }
  printf("\n");

  return 0;
}
