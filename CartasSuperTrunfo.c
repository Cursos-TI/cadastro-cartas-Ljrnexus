#include <stdio.h>

int  main () {
  // Área para definição das variáveis ​​para armazenar as propriedades das cidades

// Carta 1

    char  estado [ 20 ];
    char  codigo [ 5 ];
    char  cidade [ 50 ];
    int  pontos_turisticos ;
    int area;
    float  PIB;
    float  população;
    float densidade_populacional;
    float PIB_per_capita;

// Carta 2

    char  estado2 [ 20 ];
    char  codigo2 [ 5 ];
    char  cidade2 [ 50 ];
    int  pontos_turisticos2 ;
    int  area2 ;
    float  PIB2 ;
    float  população2 ;
    float densidade_populacional2;
    float PIB_per_capita2;

// Declaração de variáveis ​​para armazenar os resultados da comparação das cartas

    int  resultado_populacao;
    int  resultado_area;
    int  resultado_PIB;
    int  resultado_pontos_turisticos;
    int  resultado_densidade_populacional;
    int  resultado_PIB_per_capita;
    int  resultado_superpoder;

//Área para entrada de dados | Carta 1

    printf("Para a carta 1, responda:\n" );

//Nome do estado é como string para que o usuário possa inserir o nome de qualquer estado

    printf ("Digite o nome do estado: " );
    scanf ("%s" , estado );

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf ("Digite a área da cidade: " );
    scanf ( "%d" , &area );

    printf ("Digite o PIB da cidade: ");
    scanf ("%f" , &PIB);

    printf ("Digite a população da cidade: ");
    scanf ("%f" , &população);

// Cálculo da densidade populacional e PIB per capita para a carta 1

    densidade_populacional = população / area;
    PIB_per_capita = PIB / população;

//Área para entrada de dados | Carta 2

    printf ( "\n\nPara a carta 2, responda:\n" );

    printf ( "Digite o nome do estado: " );
    scanf ( "%s" , estado2 );

    printf ( "Digite o nome da cidade: " );
    scanf ( "%s" , cidade2 );

    printf ( "Digite o código da cidade: " );
    scanf ( "%s" , codigo2 );

    printf ( "Digite a quantidade de pontos turísticos: " );
    scanf ( "%d" , &pontos_turisticos2 );

    printf ( "Digite a área da cidade: " );
    scanf ( "%d" , &area2 );

    printf ( "Digite o PIB da cidade: " );
    scanf ( "%f" , &PIB2 );

    printf ( "Digite a população da cidade: " );
    scanf ( "%f" , &população2 );

// Cálculo da densidade populacional e PIB per capita para a carta 2

    densidade_populacional2 = população2 / area2;
    PIB_per_capita2 = PIB2 / população2;

// Área para exibição dos dados da cidade | Carta 1

    printf ( "\n\nInformações da carta 1:\n" );
    printf ( "Estado: %s\n" , estado );
    printf ( "Nome da cidade: %s\n" , cidade );
    printf ( "Código: %s\n" , codigo );
    printf ( "Quantidade de Pontos Turísticos: %d\n" , pontos_turisticos );
    printf ( "Área em km2: %d \n" , area );
    printf ( "PIB: R$%.2f\n" , PIB );
    printf ( "Densidade Populacional: %.2f habitantes/km2\n" , densidade_populacional );
    printf ( "PIB per Capita: R$%.2f\n" , PIB_per_capita );
    printf ( "População: %.2f habitantes\n" , população );

    float superpoder = pontos_turisticos + area + PIB + população + (1.0f / densidade_populacional) + PIB_per_capita;

    printf ( "O superpoder da carta é: %.2f\n" , superpoder );

// Área para exibição dos dados da cidade | Carta 2

    printf ( "\nInformações da carta 2:\n" );
    printf ( "Estado: %s\n" , estado2 );
    printf ( "Nome da cidade: %s\n" , cidade2 );
    printf ( "Código: %s\n" , codigo2 );
    printf ( "Quantidade de Pontos Turísticos: %d\n" , pontos_turisticos2 );
    printf ( "Área em km2: %d \n" , area2 );
    printf ( "PIB: R$%.2f\n" , PIB2 );
    printf ( "Densidade Populacional: %.2f habitantes/km2\n" , densidade_populacional2 );
    printf ( "PIB per Capita: R$%.2f\n" , PIB_per_capita2 );
    printf ( "População: %.2f habitantes\n" , população2 );

    float superpoder2 = pontos_turisticos2 + area2 + PIB2 + população2 + (1.0f / densidade_populacional2) + PIB_per_capita2;
    
    printf ( "O superpoder da carta é: %.2f\n" , superpoder2 );

//Comparativo das cartas

  printf("\nComparação de Cartas: Atributo 'PIB per capita'\n");

    printf("Carta 1: R$%.2f\n", PIB_per_capita);
    printf("Carta 2: R$%.2f\n", PIB_per_capita2);

    if (PIB_per_capita > PIB_per_capita2) {
        printf("Resultado: Carta 1 tem maior PIB per capita: R$%.2f\n", PIB_per_capita);
    } else if (PIB_per_capita < PIB_per_capita2) {
        printf("Resultado: Carta 2 tem maior PIB per capita: R$%.2f\n", PIB_per_capita2);
    } else {
        printf("Resultado: As duas cartas têm o mesmo PIB per capita: R$%.2f\n", PIB_per_capita);
    }


return  0 ;
}
