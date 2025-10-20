#include <stdio.h>
#include <string.h>

int main() {
 char palavra[100];
 int i, tamanho, palindromo = 1;

 printf("Digite uma palavra: ");
 scanf("%s", palavra);

 tamanho = strlen(palavra);

 for(i = 0; i < tamanho / 2; i++) {
  if(palavra[i] != palavra[tamanho - 1 - i]) {
   palindromo = 0;
   break;
    }
    }
 if(palindromo) {
  printf("\na palavra e um palindromo.\n");
 } else {
  printf("\na palavra nao e um palindromo.\n");
 }
 return 0;
}