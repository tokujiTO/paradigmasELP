//  Ex 01

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 3


int main(int argc, char *argv[])
{
	int **mat;
	mat = (int**)malloc(LINHAS * sizeof(int*));
	int i;
	for(i = 0; i < LINHAS; i++)
		mat[i] = (int*)malloc(COLUNAS * sizeof(int));
	int j;
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
			mat[i][j] = i + j;
	}
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}

	printf("\n\n\n\n\n");

	int **mat2;
	mat2 = (int**)malloc(LINHAS * sizeof(int*));
	int a;
	for (a = 0; a< LINHAS; a++)
	    mat2[a] = (int*)malloc(COLUNAS * sizeof(int));
	int b;
	for(a = 0; a < LINHAS; a++ ){
	    for(b= 0; b<COLUNAS; b++)
	        mat2[a][b] = a + b;
	}
	for(a=0; a<LINHAS; a++) {
	    for(b=0; b<COLUNAS; b++)
	        printf("%d\t", mat2[a][b]);
	    printf("\n");
	}

	printf("\n\n\n\n\n");

	int **soma;
	soma = (int**)malloc(LINHAS * sizeof(int*));
	for(a=0; a< LINHAS; a++)
	    soma[a] = (int*)malloc(COLUNAS * sizeof(int));
	for(a=0; a<LINHAS;a++){
	    for(b=0;b<COLUNAS;b++)
	        soma[a][b] = mat[a][b] + mat2[a][b];
	}
	for(a=0; a<LINHAS;a++){
	    for(b=0;b<COLUNAS;b++)
	        printf("%d\t", soma[a][b]);
	    printf("\n");
	}
	    
	
	
	
	for(i = 0; i < LINHAS; i++)
		free(mat[i]);
	free(mat);
	for(i = 0; i < LINHAS; i++)
		free(mat2[i]);
	free(mat2);
	for(i = 0; i < LINHAS; i++)
		free(soma[i]);
	free(soma);
	return 0;
}

// EX 02

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    char *stri;
    
    printf("Digite um valor decimal: ");
    scanf("%f", &num);
    
    stri = (char*)malloc(50 * sizeof(char));
    
    sprintf(stri, "%.2f", num);
    
    printf("valor decimal: %f\n", num);
    printf("valor string: %s", stri);
    
    free(stri);
    return 0;
}

// EX 3
// Write a C program to get the indices of two numbers in a given array of integers. This will enable you to get the sum of two numbers equal to a specific target.
// Expected Output:

// Original Array: 4  2  1  5  
// Target Value: 7
// Indices of the two numbers whose sum equal to target value: 7
// 1 3

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int length = sizeof(a)/sizeof(a[0]);
    int target = 7;
    int pair[2];
    int i;
    int j;
    
    printf("Original array: ");
    for(i=0; i<length; i++)
        printf("%d ", a[i]);
    
    printf("\nTarget Value: %d\n", target);
    
    for(i=0; i<length; i++){
        for(j=0; j<length; j++){
            if(a[i] + a[j] == target){
                pair[0] = i;
                pair[1] = j;
            }
        }
    }    
    
    printf("Indices of the two numbers whose sum equal to terget value: %d\n", target);
    for(i = 0 ; i<2; i++)
        printf("%d ", pair[i]);
    
    return 0;
}

// EX 04
// 6. Write a C program to convert a given integer to a Roman number. >

// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// Expected Output:
// Original integer: 12
// Roman number of the said integer: XII


#include <stdio.h>

void intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (num < 1 || num > 3999) {
        printf("Número fora do intervalo válido (1 a 3999).\n");
        return;
    }

    printf("Número romano: ");
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Digite um número (1 a 3999): ");
    scanf("%d", &num);

    printf("O número %d em romano fica: ", num);
    intToRoman(num);

    return 0;
}
