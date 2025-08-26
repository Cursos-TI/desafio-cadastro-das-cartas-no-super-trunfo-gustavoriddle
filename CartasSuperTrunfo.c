#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
   char estado;
   char codigo[4]; // Supondo um comprimento máximo de 3 caracteres + ''
   char cidade[50];
   int populacao;
   float area;
   float pib;
   int turismo;
};

void lerCarta(struct CartaSuperTrunfo *carta) {
   printf("\nDigite o estado (uma letra de A a H): ");
   scanf(" %c", &carta->estado);
   printf("Digite o código da carta: ");
   scanf(" %s", carta->codigo);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", carta->cidade); //Início do scanf assim para poder exibir depois o que o usuário entrou com espaço, por exemplo "São Paulo"
   printf("Digite a população da cidade: ");
   scanf(" %d", &carta->populacao);
   printf("Digite a área da cidade: ");
   scanf(" %f", &carta->area);
   printf("Digite o PIB: ");
   scanf(" %f", &carta->pib);
   printf("Digite a quantidade de pontos turísticos na cidade: ");
   scanf(" %d", &carta->turismo);
}

int main() {

   struct CartaSuperTrunfo carta1, carta2;

   printf("Insira os dados da primeira carta:");
   lerCarta(&carta1);

   printf("\nInsira os dados da segunda carta:");
   lerCarta(&carta2);

   printf("\n\nDados da primeira carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", //Pulo duplo para melhor exibição
          carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.area, carta1.pib, carta1.turismo);

   printf("\nDados da segunda carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", //Pulo duplo para melhor exibição
          carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao, carta2.area, carta2.pib, carta2.turismo);

   return 0;
}
