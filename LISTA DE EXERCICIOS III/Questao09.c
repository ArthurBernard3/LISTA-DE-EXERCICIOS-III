#include <stdio.h>

int main() {
 int valores[8];
 int i, j, aux;

 for(i = 0; i < 8; i++) {
  printf("Digite o valor %d: ", i + 1);
  scanf("%d", &valores[i]);
    }
  for(i = 0; i < 8; i++) {
  for(j = 0; j < 8; j++) {
    if(valores[i] > valores[j]) {
     aux = valores[i];
     valores[i] = valores[j];
     valores[j] = aux;
        }
     }
}
    printf("\nValores em ordem decrescente:\n");
    for(i = 0; i < 8; i++) {
     printf("%d ", valores[i]);
    }
     printf("\n");

 return 0;
}