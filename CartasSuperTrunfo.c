#include <stdio.h>   // Biblioteca padrão para entrada e saída
#include <string.h>  // Biblioteca para manipulação de strings

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;                     // Estado (letra de 'A' a 'H')
    char codigo1[4];                  // Código da carta (ex: A01)
    char cidade1[50];                 // Nome da cidade
    int populacao1;                   // População
    float area1;                      // Área em km²
    float pib1;                       // PIB em bilhões
    int pontosTuristicos1;            // Número de pontos turísticos

    // Declaração das variáveis para a Carta 2
    char estado2;                     // Estado (letra de 'A' a 'H')
    char codigo2[4];                  // Código da carta (ex: B02)
    char cidade2[50];                 // Nome da cidade
    int populacao2;                   // População
    float area2;                      // Área em km²
    float pib2;                       // PIB em bilhões
    int pontosTuristicos2;            // Número de pontos turísticos

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n"); // Instrução para o usuário
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);                  // Lê o estado (char)
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);                    // Lê o código (string)
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);               // Lê a cidade (string com espaços)
    printf("População: ");
    scanf("%d", &populacao1);                // Lê a população (int)
    printf("Área (em km²): ");
    scanf("%f", &area1);                     // Lê a área (float)
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);                      // Lê o PIB (float)
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);         // Lê o número de pontos turísticos (int)

    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n"); // Instrução para o usuário
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);                   // Lê o estado (char)
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);                     // Lê o código (string)
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);                // Lê a cidade (string com espaços)
    printf("População: ");
    scanf("%d", &populacao2);                 // Lê a população (int)
    printf("Área (em km²): ");
    scanf("%f", &area2);                      // Lê a área (float)
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);                       // Lê o PIB (float)
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);          // Lê o número de pontos turísticos (int)

   // Exibição organizada dos dados da Carta 1
    printf("\nDados da Carta 1:\n");                     // Imprime o título "Carta 1"
    printf("Estado: %c\n", estado1);                     // Mostra a letra do estado da Carta 1
    printf("Código: %s\n", codigo1);                     // Mostra o código da Carta 1 (ex: A01)
    printf("Nome da Cidade: %s\n", cidade1);             // Mostra o nome da cidade da Carta 1
    printf("População: %d\n", populacao1);               // Mostra a população da cidade da Carta 1
    printf("Área: %.2f km²\n", area1);                   // Mostra a área da cidade com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);        // Mostra o PIB em bilhões, com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Mostra o número de pontos turísticos

    // Exibição organizada dos dados da Carta 2
    printf("\nDados da Carta 2:\n");                     // Imprime o título "Carta 2"
    printf("Estado: %c\n", estado2);                     // Mostra a letra do estado da Carta 2
    printf("Código: %s\n", codigo2);                     // Mostra o código da Carta 2 (ex: B02)
    printf("Nome da Cidade: %s\n", cidade2);             // Mostra o nome da cidade da Carta 2
    printf("População: %d\n", populacao2);               // Mostra a população da cidade da Carta 2
    printf("Área: %.2f km²\n", area2);                   // Mostra a área da cidade com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2);        // Mostra o PIB em bilhões, com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Mostra o número de pontos turísticos

    return 0; // Retorno bem-sucedido do programa
}

