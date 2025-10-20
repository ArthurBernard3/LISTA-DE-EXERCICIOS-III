#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
 char palavra[100];
 int i, vogais = 0, consoantes = 0;

 printf("Digite a palavra: ");
 scanf("%s", palavra); 

 for (i = 0; palavra[i] != '\0'; i++) { 
  char letra = palavra[i];

  if (isalpha(letra)) { 
  if (letra == 'a' || letra == 'A' ||
    letra == 'e' || letra == 'E' ||
    letra == 'i' || letra == 'I' ||
    letra == 'o' || letra == 'O' ||
    letra == 'u' || letra == 'U') {
     vogais++;
    } else {
     consoantes++;
 }
 }
}
  printf("%d vogais\n", vogais);
  printf("%d consoantes\n", consoantes);

  return 0;
}
