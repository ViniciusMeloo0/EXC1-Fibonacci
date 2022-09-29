#include <stdio.h>
//Vinicius Oliveira Melo #10845061

//Encontrar o nsimo valor da sequencia de Fibonacci
//Em seguida, de acordo com o metodo escolhido

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
  int escolha,posicao, valorf,valor1 = 0,valor2 = 1;
  printf ("Escolha metodo recursivo (1) ou laço de repetiçao for (2)\n");
  scanf("%d",&escolha);

  printf("Digite um valor\n");
  scanf("%d",&posicao);

  if(escolha == 1){
    valorf = fibonacci(posicao);
  }

  if(escolha == 2){
    for(int i = 0;i < posicao; i++){
      if(posicao <= 0){
        valorf = 0;
      }
      else{
        valorf = valor1;
        valor1 = valor2;
        valor2 = valor1 + valorf;
      }
    }
    valorf = valor1;
  }

  printf("O %d-esimo valor da sequencia vale %d",posicao,valorf);
  return 0;

}