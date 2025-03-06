
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

