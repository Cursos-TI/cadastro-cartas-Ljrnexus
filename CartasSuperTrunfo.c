#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Definição das variáveis da carta 1 feita no VS Code;
    
    char estado[20];
    char codigo[3];
    char Cidade[50];
    int pontos_turisticos;
    int area;
    float PIB;
    float Populacao;

  // Quando executei o programa, percebi que não tinha declarado as variáveis da segunda carta e numerei com "2" de "carta 2"
    
    char estado2[20];
    char codigo2[3];
    char Cidade2[50];
    int pontos_turisticos2;
    int area2;
    float PIB2;
    float Populacao2;

  // Área para entrada de dados | Mesmo que o enunciado tenha pedido a variável char no estado, deixei como string porque quis explorar os estados nordestinos

    printf("Para a carta 1, responda:\n");
    
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

  // Área para exibição dos dados da cidade | Deixei a estrutura bem identada porque errei bastante no começo, mesmo com a ajuda do VS code. Essa estrutura limpa tornou mais fácil identificar os erros
  
    printf("\n\nInformacoes da carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", Cidade);
    printf("Codigo: %s\n", codigo);
    printf("Quantidade de Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Area em km2: %d \n", area);
    printf("PIB: R$%.2f\n", PIB);
    printf("Populacao: %.2f habitantes\n", Populacao);


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
