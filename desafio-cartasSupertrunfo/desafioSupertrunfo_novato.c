#include <stdio.h>
#include <stdlib.h>

#define MAX_PAIS 10
#define MAX_ESTADOS 4
#define MAX_CIDADES 8

typedef struct {
    int codigo;
    char nome[50];
    int populacao;
    float area; // em km²
    float pib; // em milhões
    int pontos_turisticos;
} Cidade;

typedef struct {
    char nome[50];
    Cidade cidades[MAX_CIDADES];
} Estado;

typedef struct {
    char nome[50];
    Estado estados[MAX_ESTADOS];
} Pais;

void cadastrarCidades(Estado *estado) {
    for (int j = 0; j < MAX_CIDADES; j++) {
        printf("\n--- Cadastro da Cidade %d ---\n", j + 1);
        printf("Código: ");
        scanf("%d", &estado->cidades[j].codigo);
        printf("Nome: ");
        scanf("%s", estado->cidades[j].nome);
        printf("População: ");
        scanf("%d", &estado->cidades[j].populacao);
        printf("Área (km²): ");
        scanf("%f", &estado->cidades[j].area);
        printf("PIB (milhões): ");
        scanf("%f", &estado->cidades[j].pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &estado->cidades[j].pontos_turisticos);
    }
}

void exibirDados(Pais pais) {
    printf("\n--- Dados do País: %s ---\n", pais.nome);
    for (int i = 0; i < MAX_ESTADOS; i++) {
        if (pais.estados[i].nome[0] != '\0') { // Verifica se o estado foi cadastrado
            printf("\nEstado: %s\n", pais.estados[i].nome);
            for (int j = 0; j < MAX_CIDADES; j++) {
                Cidade cidade = pais.estados[i].cidades[j];
                if (cidade.nome[0] != '\0') { // Verifica se a cidade foi cadastrada
                    printf("\nCidade %d:\n", j + 1);
                    printf("Código: %d\n", cidade.codigo);
                    printf("Nome: %s\n", cidade.nome);
                    printf("População: %d\n", cidade.populacao);
                    printf("Área: %.2f km²\n", cidade.area);
                    printf("PIB: %.2f milhões\n", cidade.pib);
                    printf("Pontos turísticos: %d\n", cidade.pontos_turisticos);
                }
            }
        }
    }
}

void menu() {
    printf("\n=== Jogo Super Trunfo - Cadastro de Países ===\n");
    printf("1. Cadastrar Países e Cidades\n");
    printf("2. Exibir Dados Cadastrados\n");
    printf("3. Sair\n");
}

int main() {
    Pais paises[MAX_PAIS];
    int numPaises = 0;
    int opcao;

    while (1) {
        menu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numPaises < MAX_PAIS) {
                    printf("\n--- Cadastro do País ---\n");
                    printf("Nome do país: ");
                    scanf("%s", paises[numPaises].nome);

                    for (int j = 0; j < MAX_ESTADOS; j++) {
                        printf("\nCadastro do Estado %d:\n", j + 1);
                        printf("Nome do estado: ");
                        scanf("%s", paises[numPaises].estados[j].nome);
                        cadastrarCidades(&paises[numPaises].estados[j]);
                    }

                    numPaises++;
                } else {
                    printf("Limite de países atingido!\n");
                }
                break;

            case 2:
                for (int i = 0; i < numPaises; i++) {
                    exibirDados(paises[i]);
                }
                break;

            case 3:
                printf("Saindo do programa. Até logo!\n");
                exit(0);

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}
