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
  
    //Entrada de dados carta 1
    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", &código_da_carta);
    
    printf("Digite o Nme da Cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a Populaão: \n");
    scanf("%d", &população);

    printf("Digite a Área: \n");
    scanf("%f", &área_em_km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    //Impressão de dados carta 1
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", código_da_carta);
    printf("Cidade: %s \n", nome_da_cidade);
    printf("População: %d \n", população);
    printf("Área: %f Km² \n", área_em_km²);
    printf("PIB: %F Bilhões de Reais \n", pib);
    printf("Números de Pontos Turíticos: %d\n\n", numero_de_pontos_turisticos);
    
    //Entrada de dados carta 2
    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o Código da Cidade: \n");
    scanf("%s", &código_da_carta);
    
    printf("Digite o Nme da Cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a Populaão: \n");
    scanf("%d", &população);

    printf("Digite a Área: \n");
    scanf("%f", &área_em_km²);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    //Impressão de dados carta 2
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", código_da_carta);
    printf("Cidade: %s \n", nome_da_cidade);
    printf("População: %d \n", população);
    printf("Área: %f Km² \n", área_em_km²);
    printf("PIB: %F Bilhões de Reais \n", pib);
    printf("Números de Pontos Turíticos: %d \n", numero_de_pontos_turisticos);
 
    return 0;

}
