#include <stdio.h>

int main() {
 char palavra[100];
 int i = 0, contador = 0;

 printf("Digite uma palavra: ");
 scanf("%s", palavra);

 while(palavra[i] != '\0') {
  if(palavra[i] == 'a' || palavra[i] == 'A') {
   contador++;
    }
  i++;
    }
 printf("\nA letra 'a' aparece %d vez'es na palavra.\n", contador);
 return 0;
}
