#include <stdio.h>
#include <string.h>

int main() {
 char pa1[50], pa2[50];

 printf("Digite a primeira palavra: ");
 scanf("%s", pa1);

 printf("Digite a segunda palavra: ");
 scanf("%s", pa2);

 if(strcmp(pa1, pa2) == 0) {
  printf("\nas palavras sao iguais.\n");
 } else {
  printf("\nas palavras sao diferentes.\n");
 }
 return 0;
}