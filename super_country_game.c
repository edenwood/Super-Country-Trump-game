#include <stdio.h>

// Função principal do programa que exibe informações sobre duas cidades
int main(){
    char state1 = 'A', state2 = 'B'; // 'A' e 'B' são os códigos dos estados
    char cityCode1[10] = "A01", cityCode2[10] = "B02"; //Códigos das cidades
    char cityName1[10] = "Goias", cityName2[20] = "Rio de Janeiro"; // Nomes das cidades
    int population1 = 479553, population2 = 298751; // Populações das cidades
    float area1 = 340.086, area2 = 225.1; // Áreas das cidades em km²
    float gdp1 = 336.7, gdp2 = 52.00; // PIB das cidades em bilhões de reais
    int touristAttractions1 = 250, touristAttractions2 = 550; // Número de pontos turisticos em cada cidade

    // Exibe as informaçoes da primeira carta (Carta 1)
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", state1); // Exibe o estado da primeira cidade
    printf("Código: %s\n", cityCode1); // Exibe o codigo da cidade 1
    printf("Nome da cidade: %s\n", cityName1); //Exibe o nome da cidade 1
    printf("População: %d\n", population1); // Exibe a populaçao da cidade 1
    printf("Área: %.3f km²\n",area1); // Exibe a área da cidade 1
    printf("PIB: %.2f bilhões de reais\n", gdp1); // Exibe o PIB da cidade 1
    printf("Pontos Turísticos: %d\n", touristAttractions1); // Exibe o número de pontos turísticos da cidade 1 

    // Exibe as informaçoes da segunda carta (Carta 2)
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", state2); //Exibe o estado da cidade 2
    printf("Código: %s\n", cityCode2); // Exibe o codigo da cidade 2
    printf("Nome da cidade: %s\n", cityName2); // //Exibe o nome da cidade 2
    printf("População: %d\n", population2); // Exibe a populaçao da cidade 2
    printf("Área: %.2f km²\n", area2); // Exibe a área da cidade 2
    printf("PIB: %.2f bilhões de reais\n", gdp2); // Exibe o PIB da cidade 2
    printf("Pontos Turísticos: %d\n", touristAttractions2); // Exibe o número de pontos turísticos da cidade 2

    return 0;
}
