#include <stdio.h>

void duplicaValor(int *x){
    *x *= 2;
}

int main()
{
  // EX 1 - CALCULO DE UM CUBO ESCANEADO
  // int num = 0;
  // int cubo = 0;
  //  printf("digite um número: ");
  //  scanf("%d", &num);
  //  cubo = num*num*num;
  //  printf("\nCubo de %d = %d\n", num,cubo);
  //  return 0;

  // EX 2 - USANDO PONTEIROS
  // int numero = 42;
  // int *pointer;
  // pointer = &numero;
  // printf("Valor de 'numero': %d\n", numero);
  // printf("Endereço de 'numero': %p\n",(void*)&numero);
  // printf("Valor apentado por 'ponteiro': %d\n", *pointer);
  // return 0;

  // EX 3 - MODIFICANDO UMA VARIÁVEL PELO PONTEIRO
  // int num = 42;
  // int *pointer = &num;
  // printf("Valor original de 'numero': %d\n", num);
  // *pointer = 100;
  // printf("Novo valor de 'numero' através do ponteiro: %d\n", num);
  // return 0;

  // EX 4 - PONTEIROS E VETORES (ARRAYS)
  // int nums[] = {21, 52, 33, 46, 57};
  // int *pointer = nums;
  // printf("Primeiro elemento do array: %d\n", *pointer);
  // printf("Segundo elemento do array: %d\n", *(pointer + 1));
  // return 0;

  // EX 5 - PONTEIROS E VETORES 2 
  // char *ptr;
  // int i;
  // char vet[5] = {'a', 'b', 'c', 'd', 'e'};
  // ptr = vet;
  // for (i=0; i <  5; i++) {
  //     printf("\nVet[%d] = %c    ptr = %c", i, vet[i], *ptr);
  //     ptr++;
  // }
  // return 0;

  // EX 6 - PASSAGEM DE PARÂMETROS POR PONTEIROS
  // int num = 5;
  // duplicaValor(&num);
  // printf("O dobro de 5 é %d", num);

  // EX 7 - PONTEIROS PARA PONTEIROS
  // int a = 231;
  // int *pd;
  // int **pi;
  // pd = &a;
  // pi = &pd;
  // printf("a está em %p e vale %d\n", &a, a);
  // printf("pd está em %p e vale %p\n", &pd, pd);
  // printf("pi está em %p e vale %p\n", &pi, pi);
  // printf("O valor apontado por *pd é %d\n", *pd);
  // printf("O valor apontado por *pi é %p\n", *pi);
  // printf("O valor apontado por **pi é %d\n", **pi);
  // return 0;
}