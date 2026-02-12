#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidade.
    char estado01, estado02;
    char codigo01[4], codigo02[4];
    char cidade01[50], cidade02[50];
    int pop01, pop02;
    float area01, area02;
    float pib01, pib02;
    int pontos01, pontos02;
 
  // Área para entrada de dados
    
    printf("Carta 01\n");
    printf("Estado: ");
    scanf(" %c", &estado01);
    
    printf("Codigo: ")
    scanf("%s", codigo01);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade01);
    
    printf("Populacao: ")
    scanf("%d", &pop01);
    
    printf("Area: ")
    sanf("%f", &area01);
    
    prinf("PIB: ");
    scanf("%f", &pib01);
    
    prinf("Pontos turisticos: ");
    scanf("%d", &pontos01);
    
    printf("Carta 02\n");
    printf("Estado: ");
    scanf(" %c", estado02);
    
    printf("Codigo: ");
    scanf("%s", codigo02);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade02);
    
    print("Populacao: ");
    scanf("%d", &pop02);
    
    printf("Area: ");
    scanf("%f", &area02);
    
    printf("PIB: ");
    scanf("%f", &pib02);
    
    printf("Pontos turisticos: ");
    scanf("%d", &pontos02);
    
    
  // Área para exibição dos dados da cidade
    printf("\n Resulado \n");
    
    printf("\Carta 01\n");
    printf("Estado: %c\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("Populacao: %s\n", pop01);
    printf("Area: %.2f km²\n", area01);
    printf("PIB: %.2f bilhoes\n", pib01);
    printf("Pontos turisticos: %d\n, pontos01);

    printf("\Carta 02\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("Populacao: %s\n", pop02);
    printf("Area: %.2f km²\n", area02);
    printf("PIB: %.2f bilhoes\n", pib02);
    printf("Pontos turisticos: %d\n, pontos02);
    
return 0;
} 
