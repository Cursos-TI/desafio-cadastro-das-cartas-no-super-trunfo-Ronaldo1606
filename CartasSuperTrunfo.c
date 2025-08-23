#include <stdio.h>
int main() {
    // Declaração das variáveis da Carta 1
    char estado_1[3];
    char codigo_1[4];
    char nome_Cidade_1[50];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int pontos_Turisticos_1;
    float Densidade_Populacional_1;
    float pib_Per_Capita_1;
    float super_Poder_1;

    // Declaração das variáveis da Carta 2
    char estado_2[3];
    char codigo_2[4];
    char nome_Cidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int pontos_Turisticos_2;
    float Densidade_Populacional_2;
    float pib_Per_Capita_2;
    float super_Poder_2;
  
    //Entrada de dados carta 1
    printf("Digite o Estado: \n");
    scanf("%2s", estado_1);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", codigo_1);
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nome_Cidade_1);

    printf("Digite a Populacão: \n");
    scanf("%lu", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_Turisticos_1);

    //Cálculo para Oter Média densidade populacional e pib per capita//
    Densidade_Populacional_1 = (float)populacao_1 / area_1;
    pib_Per_Capita_1 = (float)((pib_1 * 1e9) / populacao_1);
    super_Poder_1 = (float) populacao_1 + area_1 + pib_1 + (float) pontos_Turisticos_1 + pib_Per_Capita_1 + (1 / Densidade_Populacional_1);


    //Entrada de dados carta 2
    printf("\nDigite o Estado: \n");
    scanf("%2s", estado_2);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", codigo_2);
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nome_Cidade_2);

    printf("Digite a Populacão: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_Turisticos_2);

    //Cálculo para Oter Média densidade populacional e pib per capita//
    Densidade_Populacional_2 = (float)populacao_2 / area_2;
    pib_Per_Capita_2 = (float)((pib_2 * 1e9) / populacao_2);
    super_Poder_2 = (float) populacao_2 + area_2 + pib_2 + (float) pontos_Turisticos_2 + pib_Per_Capita_2 + (1 / Densidade_Populacional_2);


    //Impressão de dados carta 1
    printf("*** Carta 1 ***\n");
    printf("Estado: %2s \n", estado_1);
    printf("Código: %s \n", codigo_1);
    printf("Cidade: %s \n", nome_Cidade_1);
    printf("População: %lu \n", populacao_1);
    printf("Área: %.2f Km² \n", area_1);
    printf("PIB: %.2f Bilhões de Reais \n", pib_1);
    printf("Números de Pontos Turíticos: %d\n", pontos_Turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_1);
    printf("PIB per Capita: %.2f reais\n\n", pib_Per_Capita_1);
    

    //Impressão de dados carta 2
    printf("\n*** Carta 2 ***\n");
    printf("Estado: %2s \n", estado_2);
    printf("Código: %s \n", codigo_2);
    printf("Cidade: %s \n", nome_Cidade_2);
    printf("População: %lu \n", populacao_2);
    printf("Área: %.2f Km² \n", area_2);
    printf("PIB: %.2f Bilhões de Reais \n", pib_2);
    printf("Números de Pontos Turíticos: %d\n", pontos_Turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_Per_Capita_2);

    // Exibição das comparações
    printf("\n=== Comparação de Cartas ===\n");

    printf("População: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
    printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_Turisticos_1 > pontos_Turisticos_2);

    // regra especial para densidade: vence a menor
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_Populacional_1 < Densidade_Populacional_2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_Per_Capita_1 > pib_Per_Capita_2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_Poder_1 > super_Poder_2);
 
    return 0;
}