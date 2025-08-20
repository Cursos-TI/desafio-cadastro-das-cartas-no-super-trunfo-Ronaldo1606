#include <stdio.h>
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

    int main() {
    char estado[20];
    char código_da_carta [10];
    char nome_da_cidade [30];
    int população;
    float área_em_km²;
    float pib;
    int numero_de_pontos_turisticos;
    float Densidade_Populacional;
    float PIB_per_Capita;
  
    //Entrada de dados carta 1
    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", &código_da_carta);
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a População: \n");
    scanf("%d", &população);

    printf("Digite a Área: \n");
    scanf("%f", &área_em_km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    //Cálculo para Oter Média densidade populacional e pibb per capita//
    Densidade_Populacional = (float)(população / área_em_km²);
    PIB_per_Capita = (float)(pib / população);
    
    //Impressão de dados carta 1
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", código_da_carta);
    printf("Cidade: %s \n", nome_da_cidade);
    printf("População: %d \n", população);
    printf("Área: %.4f Km² \n", área_em_km²);
    printf("PIB: %.4f Bilhões de Reais \n", pib);
    printf("Números de Pontos Turíticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade_Populacional é: %.4f\n", Densidade_Populacional);
    printf("PIB_per_Capita: %.4f\n\n", PIB_per_Capita);
    
    //Entrada de dados carta 2
    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", &código_da_carta);
    
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a População: \n");
    scanf("%d", &população);

    printf("Digite a Área: \n");
    scanf("%f", &área_em_km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    //Cálculo para Oter Média densidade populacional e pibb per capita//
    Densidade_Populacional = (float)(população / área_em_km²);
    PIB_per_Capita = (float)(pib / população);
    
    //Impressão de dados carta 2
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", código_da_carta);
    printf("Cidade: %s \n", nome_da_cidade);
    printf("População: %d \n", população);
    printf("Área: %.4f Km² \n", área_em_km²);
    printf("PIB: %.4f Bilhões de Reais \n", pib);
    printf("Números de Pontos Turíticos: %d \n", numero_de_pontos_turisticos);
    printf("Densidade_Populacional é: %.4f\n", Densidade_Populacional);
    printf("PIB_per_Capita: %.4f\n\n", PIB_per_Capita);
 
    return 0;

}
