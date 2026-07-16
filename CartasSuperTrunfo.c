#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
    
    char estado[20];
    char codigo[3];
    char Cidade[50];
    int pontos_turisticos;
    int area;
    float PIB;
    float Populacao;

  // Carta 2
    
    char estado2[20];
    char codigo2[3];
    char Cidade2[50];
    int pontos_turisticos2;
    int area2;
    float PIB2;
    float Populacao2;

  // Área para entrada de dados | Carta 1

    printf("Para a carta 1, responda:\n");

    //Nome do estado está como string para que o usuário possa inserir o nome de qualquer estado
    
    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da cidade: ");
    scanf("%d", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a populacao da cidade: ");
    scanf("%f", &Populacao);

  // Área para entrada de dados | Carta 2

    printf("\n\nPara a carta 2, responda:\n");
    
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a area da cidade: ");
    scanf("%d", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a populacao da cidade: ");
    scanf("%f", &Populacao2);

  // Área para exibição dos dados da cidade | Carta 1
  
    printf("\n\nInformacoes da carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", Cidade);
    printf("Codigo: %s\n", codigo);
    printf("Quantidade de Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Area em km2: %d \n", area);
    printf("PIB: R$%.2f\n", PIB);
    printf("Populacao: %.2f habitantes\n", Populacao);

      // Área para exibição dos dados da cidade | Carta 2

    printf("\nInformacoes da carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Quantidade de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Area em km2: %d \n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Populacao: %.2f habitantes\n", Populacao2);

return 0;
} 
