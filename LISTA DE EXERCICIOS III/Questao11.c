#include <stdio.h>

int main() {
 int valores[10];
 int i, j, vezes;

 for(i = 0; i < 10; i++) {
  printf("Digite o valor %d: ", i + 1);
  scanf("%d", &valores[i]);
}
 printf("\nQuantas vezes cada valor apareceu:\n");

 for(i = 0; i < 10; i++) {
   vezes = 0;

 for(j = 0; j < i; j++) {
   if(valores[i] == valores[j]) {
   vezes = -1;
   break;
   }
 }
  if(vezes == -1)
  continue;
  for(j = 0; j < 10; j++) {
   if(valores[i] == valores[j]) {
    vezes++;
  }
}
  printf("O valor %d apareceu %d vez'es\n", valores[i], vezes);
}
return 0;
}