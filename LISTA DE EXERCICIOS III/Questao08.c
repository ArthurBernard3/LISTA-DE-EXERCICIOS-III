#include <stdio.h>

int main() {
 int valores[10];
 int i;
 int maiorValor, menorValor;
 int posMaior = 0, posMenor = 0;

 for(i = 0; i < 10; i++) {
  printf("Digite o valor %d: ", i + 1);
  scanf("%d", &valores[i]);
    }
  maiorValor = menorValor = valores[0];

  
  for(i = 1; i < 10; i++) {
   if(valores[i] > maiorValor) {
    maiorValor = valores[i];
    posMaior = i; 
    }
  if(valores[i] < menorValor) {
   menorValor = valores[i];
   posMenor = i; 
    }
    }

    printf("\nMaior valor: %d na posicao %d\n", maiorValor, posMaior);
    printf("Menor valor: %d na posicao %d\n", menorValor, posMenor);

    return 0;
}