#include <stdio.h>

int main() {

 int numeros[10];
 int i, j, contador;

 for (i = 0; i < 10; i++) {

  printf("Digite o numero %d: ", i + 1);
  scanf("%d", &numeros[i]);
}
  printf("\nNumeros sem repeticao: ");
  
  for (i = 0; i < 10; i++) {
   contador = 0;
  for (j = 0; j < 10; j++) {

  if (numeros[i] == numeros[j]) {
   contador++;
}
  }    
 if (contador == 1) {
  printf("%d ", numeros[i]);
    }
}
  printf("\n");
  
  return 0;
}
