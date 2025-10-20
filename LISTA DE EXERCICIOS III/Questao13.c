#include <stdio.h>

int main() {
 int tabela[3][3];
 int i, j;
 int soma, maiorSoma;
 int linhasMaior[3];
 int qtdLinhas = 0;

  for(i = 0; i < 3; i++) {
  for(j = 0; j < 3; j++) {
   printf("Digite o valor da posicao [%d][%d]: ", i, j);
   scanf("%d", &tabela[i][j]);
    }
    }
 maiorSoma = 0;
 qtdLinhas = 0;

 for(i = 0; i < 3; i++) {
   soma = 0;
 for(j = 0; j < 3; j++) {
    soma += tabela[i][j];
    }
 if(i == 0 || soma > maiorSoma) {
    maiorSoma = soma;
    linhasMaior[0] = i;
    qtdLinhas = 1;
    }
  else if(soma == maiorSoma) {
   linhasMaior[qtdLinhas] = i;
   qtdLinhas++;
    }
    }
 printf("\nLinha(s) com a maior soma = %d: ", maiorSoma);
 for(i = 0; i < qtdLinhas; i++) {
  printf("%d ", linhasMaior[i]);
    }
 printf("\n");

 return 0;
}