#include <stdio.h>

int main() {
 int matriz[4][4];
 int i, j;
 int somaD = 0;

 for(i = 0; i < 4; i++) {
 for(j = 0; j < 4; j++) {
   printf("Digite o valor da posicao [%d][%d]: ", i, j);
   scanf("%d", &matriz[i][j]);
 }
}
 for(i = 0; i < 4; i++) {
  somaD += matriz[i][i];
    }
 printf("\nSoma dos valores da diagonal principal: %d\n", somaD);

 return 0;
}