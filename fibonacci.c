#include <stdio.h>
//Vinicius Oliveira Melo #10845061

//Encontrar o nsimo valor da sequencia de Fibonacci
//Primeiramente, atraves de uma estrutura de repetiçao for

int main(void){
  int valor1 = 0, valor2 = 1, a,b=1;
  printf("Digite um valor\n");

  scanf("%d",&a);
  for(int i = 0;i <= a-1; i++){
    if(a-1 < 0){
      b = 0;
      break;
    }
    valor1 = valor2;
    valor2 = b;
    b = valor1+valor2;
  }

  printf("O %d-esimo valor da sequencia, atraves do for, vale %d",a,valor1);
  return 0;
}