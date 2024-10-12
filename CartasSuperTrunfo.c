#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Países: Brasil, Holanada, EUA e Reino Unido.

    printf("Desafio Cartas Super Trunfo!\n");

    char carta[100];
    char capital[100];
    float populacao;
    float PIB; 
    float area;
    int atracoes;
    

    // Brasil:

    
    printf("Qual o código desta carta? \n");
    scanf("%s", &carta);

    printf("Qual a capital do Brasil? \n");
    scanf("%s", &capital);

    printf("Qual a população do Brasil em milhões? \n");
    scanf("%f", &populacao);

    printf("Qual o PIB de 2023 do Brasil em trilhões? \n");
    scanf("%f", &PIB);

    printf("Qual a área territorial do Brasil em km²? \n");
    scanf("%f", &area);

    printf("Quantas são as principais atrações turísticas do Brasil \n");
    scanf("%d", &atracoes);
    

    printf("Código desta carta: %s", carta);
    printf("Capital do Brasil: %s - População em milhões: %f", capital, populacao);
    printf(" - PIB 2023 em trilhões: %f - Área territorial em km²: %f", PIB, area);
    printf(" - Quantidade de principais atrações turísticas: %d", atracoes);

    
    
    
    


 

    

    return 0;
}
