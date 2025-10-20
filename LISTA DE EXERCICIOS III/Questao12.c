#include <stdio.h>

int main() {
 int vetor1[5], vetor2[5];
 int i, produto = 0;

 for(i = 0; i < 5; i++) {
  printf("Digite o elemento %d do primeiro vetor: ", i);
  scanf("%d", &vetor1[i]);
    }
  for(i = 0; i < 5; i++) {
  printf("Digite o elemento %d do segundo vetor: ", i);
  scanf("%d", &vetor2[i]);
    }
 for(i = 0; i < 5; i++) {
    produto += vetor1[i] * vetor2[i];
  }
 printf("\nO produto escalar entre os vetores e: %d\n", produto);

  return 0;
}






