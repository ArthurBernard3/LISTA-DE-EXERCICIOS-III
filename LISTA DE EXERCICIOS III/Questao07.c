#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 int vetor[50], unicos[50];
 int i, j, tUnicos = 0;
 int repetido;

 srand(time(NULL));

 for (i = 0; i < 50; i++) {
  vetor[i] = rand() % 100;
}

  printf("Array original:\n");
   for (i = 0; i < 50; i++) {
    printf("%d ", vetor[i]);
    }
    printf("\n");

  for (i = 0; i < 50; i++) {
   repetido = 0;
    for (j = 0; j < tUnicos; j++) {
     if (vetor[i] == unicos[j]) {
        repetido = 1;
        break;
      }
  }
  if (!repetido) {
    unicos[tUnicos] = vetor[i];
    tUnicos++;
    }
}
    printf("numeros unicos:\n");
    for (i = 0; i < tUnicos; i++) {
        printf("%d ", unicos[i]);
    }
    printf("\n");

    return 0;
}