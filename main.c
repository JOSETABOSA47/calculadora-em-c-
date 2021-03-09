#include <stdio.h>

int soma(a, b){
  return a+b;
}
int subtracao(a, b){
  return a-b;
}
int multiplicacao(a, b){
  return a*b;
}
int divisao(a, b){
  return a/b;
}

int main(){
    int n, v1 = 10, v2=5;

    printf("\n Menu inicial!");
    printf("\n 1 - soma");
    printf("\n 2 - subtrção");
    printf("\n 3 - multiplicação");
    printf("\n 4 - divisão");
    printf(" \n");
    printf(" \n");
    printf(" Digite o que Deseja: ");
    scanf("%d", &n);
    printf(" \n");

    if(n==1)
      printf(" Valor da soma de %d e %d é: %d\n",v1, v2, soma(v1, v2));
    else
      if(n==2)
        printf(" Valor da subtração de %d e %d é: %d\n",v1, v2, subtracao(v1, v2));
      else
        if(n==3)
          printf(" Valor da multiplicação de %d e %d é: %d\n", v1, v2, multiplicacao(v1, v2));
        else
          if(n==4)
            printf(" Valor da divisão de %d e %d é: %d\n",v1, v2, divisao(v1, v2));
          else
            printf(" Operação não encontrada!");
return 0;
}