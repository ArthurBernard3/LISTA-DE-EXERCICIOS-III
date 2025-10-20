#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n, i, somaP = 0, somaI = 0;

 
  printf("digite quantos numeros serao gerados: ");
  scanf("%d", &n);

  int numeros[n];

  srand(time(NULL));

  printf("\nNumeros gerados:\n");

   for (i = 0; i < n; i++) {
     numeros[i] = rand() % 1000;

     printf("%d ", numeros[i]);

     if (numeros[i] % 2 == 0)
      somaP += numeros[i];
     else 
      somaI += numeros[i];
 }

  printf("\n\nSoma dos numeros pares gerados: %d\n", somaP);
  printf("Soma dos numeros impares gerados : %d\n", somaI);

  return 0;
}
