#include <stdio.h>

int main() {
 int tabela[4][4];
 int linha, coluna;
 int maiorDaLinha;

 for(linha = 0; linha < 4; linha++) {
 for(coluna = 0; coluna < 4; coluna++) {
  printf("Digite o valor da posicao [%d][%d]: ", linha, coluna);
  scanf("%d", &tabela[linha][coluna]);
  }
}
 for(linha = 0; linha < 4; linha++) {
  maiorDaLinha = tabela[linha][0];
  
   for(coluna = 1; coluna < 4; coluna++) {
    if(tabela[linha][coluna] > maiorDaLinha) {
    maiorDaLinha = tabela[linha][coluna];
  }
    }
  printf("Maior valor da linha %d: %d\n", linha, maiorDaLinha);
    }
return 0;
}