
// EX 1 - Crie um programa em C que manipule arquivo texto (com uso de Fopen(), por exemplo)

#include <stdio.h>
#include <stdlib.h>

void criarArquivo();
void lerArquivo();

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1) Criar arquivo\n");
        printf("2) Ler arquivo\n");
        printf("3) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            criarArquivo();
        }
        if(opcao == 2){
            lerArquivo();
        }
        if(opcao == 3){
            printf("Saindo do programa...\n");
        }
    } while (opcao != 3);

    return 0;
}

void criarArquivo() {
    FILE *arquivo;
    char nomeArquivo[100];

    printf("Digite o nome do arquivo (com extensão .txt): ");
    scanf(" %[^\n]", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return;
    }

    fclose(arquivo);
    printf("Arquivo criado com sucesso!\n");
}


void lerArquivo() {
    FILE *arquivo;
    char nomeArquivo[100];
    char linha[1000];

    printf("Digite o nome do arquivo (com extensão .txt): ");
    scanf(" %[^\n]", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r"); 
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("\nConteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) { 
        printf("%s", linha);
    }

    fclose(arquivo);
}

// EX 2 -  Crie um programa em C que manipule strings (com operações de busca nas strings, concatenação de strings, etc.)


#include <stdio.h>
#include <string.h>

void menu(int *opcao) {
    printf("\nMenu de Operações com Strings:\n");
    printf("1) Calcular comprimento de uma string\n");
    printf("2) Concatenar duas strings\n");
    printf("3) Comparar duas strings\n");
    printf("4) Buscar uma substring\n");
    printf("5) Copiar uma string\n");
    printf("6) Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", opcao);
}

int main() {
    char str1[100], str2[100], resultado[200];
    int opcao;

    do {
        menu(&opcao);

        switch (opcao) {
            case 1:
                printf("Digite uma string: ");
                scanf(" %[^\n]", str1);
                printf("Comprimento da string: %zu\n", strlen(str1));
                break;

            case 2:
                printf("Digite a primeira string: ");
                scanf(" %[^\n]", str1);
                printf("Digite a segunda string: ");
                scanf(" %[^\n]", str2);

                strcpy(resultado, str1);
                strcat(resultado, str2);

                printf("Resultado da concatenação: %s\n", resultado);
                break;

            case 3:
                printf("Digite a primeira string: ");
                scanf(" %[^\n]", str1);
                printf("Digite a segunda string: ");
                scanf(" %[^\n]", str2);

                int comparacao = strcmp(str1, str2);
                if (comparacao == 0) {
                    printf("As strings são iguais.\n");
                } else if (comparacao < 0) {
                    printf("A primeira string é menor que a segunda.\n");
                } else {
                    printf("A primeira string é maior que a segunda.\n");
                }
                break;

            case 4:
                printf("Digite a string principal: ");
                scanf(" %[^\n]", str1);
                printf("Digite a substring a ser buscada: ");
                scanf(" %[^\n]", str2);

                char *posicao = strstr(str1, str2);
                if (posicao != NULL) {
                    printf("Substring encontrada na posição: %ld\n", posicao - str1);
                } else {
                    printf("Substring não encontrada.\n");
                }
                break;

            case 5:
                printf("Digite a string a ser copiada: ");
                scanf(" %[^\n]", str1);

                strcpy(resultado, str1);
                printf("String copiada: %s\n", resultado);
                break;

            case 6:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}