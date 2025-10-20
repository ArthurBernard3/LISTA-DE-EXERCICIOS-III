#include <stdio.h>

int main(){
int num1, num2, i;

printf("Digite o primeiro numero\n");
scanf("%d", &num1);

printf("Digite o segundo numero\n");
scanf("%d",&num2);

 if (num1 > num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    }
 

for (i = num1 + 1; i < num2; i++) {
 printf("%d ", i);
}

 printf("\n");


return 0;



}
