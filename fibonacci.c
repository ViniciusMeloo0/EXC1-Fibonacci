#include <stdio.h>
//Vinicius Oliveira Melo #10845061

//Encontrar o nsimo valor da sequencia de Fibonacci
//Em seguida, atraves do metodo recursivo

int fibonacci(int n){
  int valor;
  if(n <= 0){
    valor = 0;
  }
  if(n == 1){
    valor = 1;
  }
  if(n>1){
    valor = fibonacci(n-1)+fibonacci(n-2);
   }
  return valor;
  }

int main(void){
  int a,b;
  printf("Digite um valor\n");
  scanf("%d",&a);
  b = fibonacci(a);
  printf("O %d-esimo valor da sequencia, atraves do metodo recursivo, vale %d",a,b);
  return 0;

}