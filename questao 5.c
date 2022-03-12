#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

int main(){
  setlocale(LC_ALL,"Portuguese_Brazil");
  
  printf("Digite um número qualquer: ");
  scanf("%d", &num);
  
  if (num < 0) {
    printf("O número que você digitou é: Negativo");
  }
  else if( num > 0 ) {
    printf("O número que você digitou é: Positivo");
    
    return 0;
  }
}