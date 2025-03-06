//  EX 1 - Altere o código abaixo para que todas as 6 operações do menu funcionem corretamente

// #include <stdio.h>

// int findConta(int *conta, int cc[1000], int n);
// void openConta(int conta, float *saldo, int cc[1000], int *n);
// void fazerDeposito(float saldo[1000], int i);
// void fazerSaque(float saldo[1000], int i);
// void fazerPix(float saldo[1000], int i, int j);
// float tomaValor(void);
// void menu(int *p);

// int main(void) {
//     int cc[1000], n = 0, i, op, conta;
//     float saldo[1000], valor;

//     for (i = 0; i < 1000; i++) {
//         cc[i] = 0;
//         saldo[i] = 0;
//     }

//     do {
//         menu(&op);

//         if (op == 1) {
//             i = findConta(&conta, cc, n);
//             if (i != n) {
//                 printf("esta conta-corrente ja existe\n");
//             } else {
//                 openConta(conta, saldo, cc, &n);
//             }
//         }

//         if (op == 2) {
//             i = findConta(&conta, cc, n);
//             if (i == n) {
//                 printf("numero de conta-corrente invalido\n");
//             } else {
//                 printf("saldo: %.2f\n", saldo[i]);
//             }
//         }

//         if (op == 3) {
//             i = findConta(&conta, cc, n);
//             if (i == n) {
//                 printf("numero de conta-corrente invalido\n");
//             } else {
//                 fazerDeposito(saldo, i);
//             }
//         }

//         if (op == 4) {
//             // Implementar função de saque
//             i = findConta(&conta, cc, n);
//             if (i == n){
//                 printf("numero de conta-corrente invalido\n");
//             } else {
//                 fazerSaque(saldo, i);
//             }
//         }

//         if (op == 5) {
//             // Implementar função de PIX
//             printf("sua conta: \n");
//             int i = findConta(&conta, cc, n);
//             printf("conta de destino: \n");
//             int j = findConta(&conta, cc, n);
//             if (i == n) {
//                 printf("numero de conta-corrente invalido\n");
//             } else {
//                 fazerPix(saldo, i, j);
//             }
//         }
//     } while (op != 6);

//     return 0;
// }

// void menu(int *p) {
//     printf("1) Abrir conta\n");
//     printf("2) Verificar saldo\n");
//     printf("3) Fazer Deposito\n");
//     printf("4) Fazer Saque\n");
//     printf("5) Fazer PIX\n");
//     printf("6) Sair do sistema\n");
//     scanf("%d", p);
// }

// int findConta(int *conta, int cc[1000], int n) {
//     int j;
//     printf("numero da conta: ");
//     scanf("%d", conta);
//     for (j = 0; j < n && *conta != cc[j]; j++);
//     return j;
// }

// void openConta(int conta, float *saldo, int cc[1000], int *n) {
//     float valor;
//     printf("valor do deposito inicial: ");
//     valor = tomaValor();
//     cc[*n] = conta;
//     saldo[*n] = valor;
//     (*n)++;
//     printf("operacao realizada com sucesso\n");
// }

// void fazerDeposito(float saldo[1000], int i) {
//     float valor;
//     printf("valor do deposito: ");
//     valor = tomaValor();
//     saldo[i] = saldo[i] + valor;
//     printf("operacao realizada com sucesso\n");
// }

// void fazerSaque(float saldo[1000], int i) {
//     float valor;
//     printf("valor do saque: ");
//     valor = tomaValor();
//     saldo[i] = saldo[i] - valor;
//     printf("operacao realizada com sucesso\n");
// }

// void fazerPix(float saldo[1000], int i, int j) {
//     float valor;
//     printf("valor do PIX: ");
//     valor = tomaValor();
    
//     if(saldo[i] < valor) {
//         printf("saldo insuficiente");
//     } else {
//         saldo[i] -= valor;
//         saldo[j] += valor;
//         printf("operacao realizada com sucesso\n");
//     }
// }

// float tomaValor(void) {
//     float valor;
//     scanf("%f", &valor);
//     while (valor <= 0) {
//         printf("o valor deve ser positivo.\n");
//         printf("valor: ");
//         scanf("%f", &valor);
//     }
//     return valor;
// }

//  EX 2 - Faça um programa em C que permita que o usuário entre com os valores de duas matrizes quadradas de ordem 3 nomeadas por A e B. O programa deverá oferecer um menu para que o usuário escolha, em seguida, que opções pretende executar:
// (1) C=A*B
// (2) C=A-B
// (3) C = A+B
// (4) A Transposta da matriz C, sendo que C=A*B
// (5) Sair do Programa
// O usuário poderá fazer quantas escolhas desejar. O programa somente será finalizado quando ele escolher a opção (5). 


// #include <stdio.h>

// void multiplicar(int A[3][3],int B[3][3], int C[3][3]);
// void lermatriz(int x[3][3]);
// void mostrarmatriz(int x[3][3]);
// void subtrair(int A[3][3],int B[3][3], int C[3][3]);
// void somar(int B[3][3],int A[3][3], int C[3][3]);
// void transpor(int C[3][3], int Ctemporario[3][3]);
// void menu(int *p);

// int main(void) {
// 	int i, A[3][3], B[3][3], C[3][3], Ctemporario[3][3], op, j;

// 	lermatriz(A);
// 	printf("\nA:\n");
// 	mostrarmatriz(A);

//     printf("\n");
// 	lermatriz(B);
// 	printf("\nB:\n");
// 	mostrarmatriz(B);

// 	do {
// 		menu(&op);

// 		if (op == 1) {
// 			multiplicar(A, B, C);
// 			mostrarmatriz(C);
// 		}
// 		if (op == 2) {
// 		    subtrair(A, B, C);
// 		    mostrarmatriz(C);
// 		}
// 		if (op == 3) {
// 		    somar(A, B, C);
// 		    mostrarmatriz(C);
// 		}
// 		if (op == 4) {
// 		    transpor(C, Ctemporario);
// 		    mostrarmatriz(Ctemporario);
// 		}
// 	} while (op != 5);

// 	return 0;
// }

// void lermatriz(int x[3][3]) {
// 	int valor;
// 	for (int i = 0; i<3; i++) {
// 		for(int j=0; j<3; j++) {
// 			printf("[%d][%d]", i, j);
// 			scanf("%d", &valor);
// 			x[i][j] = valor;
// 		}
// 	}
// }

// void somar(int A[3][3], int B[3][3], int C[3][3]){
//     for(int i=0; i<3; i++){
//         for (int j=0; j<3; j++)
//             C[i][j] = A[i][j] + B[i][j];
//     }
// }

// void subtrair(int A[3][3], int B[3][3], int C[3][3]){
//     for(int i=0; i<3; i++){
//         for (int j=0; j<3; j++)
//             C[i][j] = A[i][j] - B[i][j];
//     }
// }

// void multiplicar(int A[3][3], int B[3][3], int C[3][3]) {
// 	for(int i = 0; i<3; i++) {
// 		for (int j = 0; j<3; j++) {
// 			C[i][j] = 0;
// 			for(int k=0; k<3; k++) {
// 				C[i][j] += A[i][k] * B[k][j];
// 			}
// 		}
// 	}
// }

// void transpor(int C[3][3],int Ctemporario[3][3]){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             Ctemporario[i][j] = C[j][i];
//         }
//     }
// }

// void mostrarmatriz(int x[3][3]) {
// 	for (int i = 0; i<3; i++) {
// 		printf("\n");
// 		for(int j=0; j<3; j++) {
// 			printf("[%d]", x[i][j]);
// 		}
// 	}
// }

// void menu(int *p) {
// 	printf("\n1)multiplicar\n");
// 	printf("2)subtrair\n");
// 	printf("3)adicionar\n");
// 	printf("4)transpor C, sendo C = A * B\n");
// 	printf("5)sair do programa\n");
// 	scanf("%d", p);
// }

// EX 3 - Faça um programa em C que o usuário digite 10 valores que devem ser armazenados em um vetor. Em seguida, deve-se imprimir os 10 valores em ordem decrescente

// Faça um programa em C que o usuário digite 10 valores que devem ser armazenados em um vetor. Em seguida, deve-se imprimir os 10 valores em ordem decrescente

// #include <stdio.h>

// int main(){
//     int v[10], valor;
    
//     for(int i=0; i<10;i++){
//         printf("numero [%d]", i);
//         scanf("%d", &valor);
//         v[i] = valor;
//     }
    
//     for(int i=0; i<9; i++){
//         for(int j=0; j<9-i; j++){
//             if (v[j] < v[j+1]){
//                 int temp = v[j];
//                 v[j] = v[j+1];
//                 v[j+1] = temp;
//             }
//         }
//     }
    
//     printf("Vetor em ordem decrescente: ");
//     for(int i=0; i<10; i++)
//         printf("%d", v[i]);
    
    
    
//     return 0;
// }

