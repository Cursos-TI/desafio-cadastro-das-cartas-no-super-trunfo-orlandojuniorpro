#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Pa√≠ses
// Tema 1 - Cadastro das Cartas
// Este cÛdigo inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os coment·rios para implementar cada parte do desafio.

int main() {

setlocale(LC_ALL,"Portuguese_Brazil");

    // Sugest„o: Defina vari·veis separadas para cada atributo da cidade.
    // Exemplos de atributos: cÛdigo da cidade, nome, populaÁ„o, ·rea, PIB, n˙mero de pontos turÌsticos.
    
    // Cadastro das Cartas:
    // Sugest„o: Utilize a funÁ„o scanf para capturar as entradas do usu·rio para cada atributo.
    // Solicite ao usu·rio que insira as informaÁıes de cada cidade, como o cÛdigo, nome, populaÁ„o, ·rea, etc.
    
    // ExibiÁ„o dos Dados das Cartas:
    // Sugest„o: Utilize a funÁ„o printf para exibir as informaÁıes das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Pa√≠ses: Brasil, Holanda.

    printf("Desafio Cartas Super Trunfo!\n");

    char carta[100];
    char capital[100];
    int populacao;
    int PIB; 
    int area;
    int atracoes;
    

    // Brasil:

    
    printf("Qual o cÛdigo desta carta? \n");
    scanf("%s", &carta);

    printf("Qual a capital do Brasil? \n");
    scanf("%s", &capital);

    printf("Qual a populaÁ„o do Brasil em milhıes? \n");
    scanf("%d", &populacao);

    printf("Qual o PIB de 2023 do Brasil em trilh√µes? \n");
    scanf("%d", &PIB);

    printf("Qual a √°rea territorial do Brasil em milh√µes de km¬≤? \n");
    scanf("%d", &area);

    printf("Quantas s√£o as principais atra√ß√µes tur√≠sticas do Brasil \n");
    scanf("%d", &atracoes);
    

    printf("C√≥digo desta carta: %s", carta);
    printf(" - Capital do Brasil: %s - Popula√ß√£o em milh√µes: %d", capital, populacao);
    printf(" - PIB 2023 em trilh√µes: %d - √Årea territorial em milh√µes de km¬≤: %d", PIB, area);
    printf(" - Quantidade de principais atra√ß√µes tur√≠sticas: %d - ", atracoes);


    // Holanda

    printf("Qual o c√≥digo desta carta? \n");
    scanf("%s", &carta);

    printf("Qual a capital do Brasil? \n");
    scanf("%s", &capital);

    printf("Qual a popula√ß√£o do Brasil em milh√µes? \n");
    scanf("%d", &populacao);

    printf("Qual o PIB de 2023 do Brasil em trilh√µes? \n");
    scanf("%d", &PIB);

    printf("Qual a √°rea territorial do Brasil em milh√µes de km¬≤? \n");
    scanf("%d", &area);

    printf("Quantas s√£o as principais atra√ß√µes tur√≠sticas do Brasil \n");
    scanf("%d", &atracoes);
    

    printf("C√≥digo desta carta: %s", carta);
    printf(" - Capital do Brasil: %s - Popula√ß√£o em milh√µes: %d", capital, populacao);
    printf(" - PIB 2023 em trilh√µes: %d - √Årea territorial em milh√µes de km¬≤: %d", PIB, area);
    printf(" - Quantidade de principais atra√ß√µes tur√≠sticas: %d - ", atracoes);

    return 0;
}
