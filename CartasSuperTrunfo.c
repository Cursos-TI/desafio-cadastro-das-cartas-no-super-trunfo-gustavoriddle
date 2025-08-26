#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int NumerodePontosTuristicos;

    void lerCarta(struct CartaSuperTrunfo *carta1) {
        printf("\nDigite o estado (uma letra de A a H): ");
        scanf(" %c", &carta->estado);
        printf("Digite o código da carta: ");
        scanf(" %s", carta->codigo);
        printf("Digite o nome da cidade: ");
        scanf(" %s", carta->cidade);
        printf("Digite a população da cidade: ");
        scanf(" %d", &carta->populacao);
        printf("Digite a área da cidade: ");
        scanf("%d", carta->area);
        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", carta->NumerodePontosTuristicos);

    void lerCarta(struct CartaSuperTrunfo *carta2) {
        printf("\nDigite o estado (uma letra de A a H): ");
        scanf(" %c", &carta->estado);
        printf("Digite o código da carta: ");
        scanf(" %s", carta->codigo);
        printf("Digite o nome da cidade: ");
        scanf(" %s", carta->cidade);
        printf("Digite a população da cidade: ");
        scanf(" %d", &carta->populacao);
        printf("Digite a área da cidade: ");
        scanf("%d", carta->area);
        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", carta->NumerodePontosTuristicos);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

int main() {
   struct CartaSuperTrunfo carta1, carta2;

   printf("Insira os dados da primeira carta:");
   lerCarta(&carta1);

   printf("\nInsira os dados da segunda carta:");
   lerCarta(&carta2);

   printf("\n\nDados da primeira carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
          carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.area, carta1.NumerodePontosTuristicos);

   printf("\nDados da segunda carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
          carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao, carta2.area, carta2.NumerodePontosTuristicos));

   return 0;
}
