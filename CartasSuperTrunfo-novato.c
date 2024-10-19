#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este c�digo inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os coment�rios para implementar cada parte do desafio.

int main() {

setlocale(LC_ALL,"Portuguese_Brazil");

    // Sugest�o: Defina vari�veis separadas para cada atributo da cidade.
    // Exemplos de atributos: c�digo da cidade, nome, popula��o, �rea, PIB, n�mero de pontos tur�sticos.
    
    // Cadastro das Cartas:
    // Sugest�o: Utilize a fun��o scanf para capturar as entradas do usu�rio para cada atributo.
    // Solicite ao usu�rio que insira as informa��es de cada cidade, como o c�digo, nome, popula��o, �rea, etc.
    
    // Exibi��o dos Dados das Cartas:
    // Sugest�o: Utilize a fun��o printf para exibir as informa��es das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Países: Brasil, Holanda.

    printf("Desafio Cartas Super Trunfo!\n");

    char carta[100];
    char capital[100];
    int populacao;
    int PIB; 
    int area;
    int atracoes;
    

    // Brasil:

    
    printf("Qual o c�digo desta carta? \n");
    scanf("%s", &carta);

    printf("Qual a capital do Brasil? \n");
    scanf("%s", &capital);

    printf("Qual a popula��o do Brasil em milh�es? \n");
    scanf("%d", &populacao);

    printf("Qual o PIB de 2023 do Brasil em trilhões? \n");
    scanf("%d", &PIB);

    printf("Qual a área territorial do Brasil em milhões de km²? \n");
    scanf("%d", &area);

    printf("Quantas são as principais atrações turísticas do Brasil \n");
    scanf("%d", &atracoes);
    

    printf("Código desta carta: %s", carta);
    printf(" - Capital do Brasil: %s - População em milhões: %d", capital, populacao);
    printf(" - PIB 2023 em trilhões: %d - Área territorial em milhões de km²: %d", PIB, area);
    printf(" - Quantidade de principais atrações turísticas: %d - ", atracoes);


    // Holanda

    printf("Qual o código desta carta? \n");
    scanf("%s", &carta);

    printf("Qual a capital do Brasil? \n");
    scanf("%s", &capital);

    printf("Qual a população do Brasil em milhões? \n");
    scanf("%d", &populacao);

    printf("Qual o PIB de 2023 do Brasil em trilhões? \n");
    scanf("%d", &PIB);

    printf("Qual a área territorial do Brasil em milhões de km²? \n");
    scanf("%d", &area);

    printf("Quantas são as principais atrações turísticas do Brasil \n");
    scanf("%d", &atracoes);
    

    printf("Código desta carta: %s", carta);
    printf(" - Capital do Brasil: %s - População em milhões: %d", capital, populacao);
    printf(" - PIB 2023 em trilhões: %d - Área territorial em milhões de km²: %d", PIB, area);
    printf(" - Quantidade de principais atrações turísticas: %d - ", atracoes);

    return 0;
}
