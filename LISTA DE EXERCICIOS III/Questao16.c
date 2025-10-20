
#include <stdio.h>

int main() {
 int matriz[3][3];
 int i, j;
 int somaLinha, somaColuna;
 int diagonalPrincipal = 0, diagonalSecundaria = 0;
 int quadradoMagico = 1;

 for(i = 0; i < 3; i++) {
 for(j = 0; j < 3; j++) {
  printf("Digite o valor da posicao [%d][%d]: ", i, j);
  scanf("%d", &matriz[i][j]);
  }
 }
 for(i = 0; i < 3; i++) {
  diagonalPrincipal += matriz[i][i];
  diagonalSecundaria += matriz[i][2 - i];
    }
 for(i = 0; i < 3; i++) {
   somaLinha = 0;
   somaColuna = 0;
  for(j = 0; j < 3; j++) {
   somaLinha += matriz[i][j];
   somaColuna += matriz[j][i];
    }
  if(somaLinha != diagonalPrincipal || somaColuna != diagonalPrincipal) {
   quadradoMagico = 0;
   break;
    }
    }

 if(diagonalPrincipal != diagonalSecundaria) {
  quadradoMagico = 0;
    }
 if(quadradoMagico) {
  printf("\na matriz e um quadrado magico.\n");
    } else {
  printf("\na matriz nao e um quadrado magico.\n");
    }
 return 0;
}