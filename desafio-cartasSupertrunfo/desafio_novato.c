#include <stdio.h>

#define NUM_PAIS 3
#define NUM_ESTADOS 4
#define NUM_CIDADES 8

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
    Cidade cidades[NUM_CIDADES];
} Estado;

typedef struct {
    char nome[50];
    Estado estados[NUM_ESTADOS];
} Pais;

void cadastrarCidades(Estado *estado) {
    for (int j = 0; j < NUM_CIDADES; j++) {
        printf("Cadastro da cidade %d:\n", j + 1);
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
        printf("\n");
    }
}

void exibirDados(Pais pais) {
    printf("Dados do país: %s\n", pais.nome);
    for (int i = 0; i < NUM_ESTADOS; i++) {
        printf("Estado: %s\n", pais.estados[i].nome);
        for (int j = 0; j < NUM_CIDADES; j++) {
            Cidade cidade = pais.estados[i].cidades[j];
            printf("Cidade %d:\n", j + 1);
            printf("Código: %d\n", cidade.codigo);
            printf("Nome: %s\n", cidade.nome);
            printf("População: %d\n", cidade.populacao);
            printf("Área: %.2f km²\n", cidade.area);
            printf("PIB: %.2f milhões\n", cidade.pib);
            printf("Pontos turísticos: %d\n\n", cidade.pontos_turisticos);
        }
    }
}

int main() {
    Pais paises[NUM_PAIS] = {
        {"Brasil"}, 
        {"Argentina"}, 
        {"Chile"} 
    };

    for (int i = 0; i < NUM_PAIS; i++) {
        for (int j = 0; j < NUM_ESTADOS; j++) {
            printf("Cadastro do estado %d do país %s:\n", j + 1, paises[i].nome);
            printf("Nome do estado: ");
            scanf("%s", paises[i].estados[j].nome);
            cadastrarCidades(&paises[i].estados[j]);
        }
    }

    // Exibir dados cadastrados
    for (int i = 0; i < NUM_PAIS; i++) {
        exibirDados(paises[i]);
    }

    return 0;
}