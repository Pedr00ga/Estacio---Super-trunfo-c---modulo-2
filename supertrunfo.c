#include <stdio.h>

int main(){


    // Definindo as variáveis para a primeira carta
    char a[100]; //São Paulo
    char s01[100] = "S01"; // S01
    char cidade1[100]; //Americana
    int populacao1; //237240
    float area1; //133.9
    int pontosTuristicos1; //20
    float densidade1; 
    float pib1;
    float pibPerCapita1;
    float sp1;
    int pontos1 = 0; // Inicializa a variável de pontos


    // Definindo as variáveis para a segunda carta
    char b[100]; //S02
    char s02[100] = "S02"; //S03
    char cidade2[100]; //Sorocaba
    int populacao2; // 650000
    float area2; // 450.5
    int pontosTuristicos2; // 15
    float densidade2;
    float pib2;
    float pibPerCapita2;
    float sp2;
    int pontos2 = 0; // Inicializa a variável de pontos

    // Entrega para o usuario preencher a carta
    printf("Vamos desenvolver a primeira carta do jogo Super Trunfo!\n");
    printf("Digite o nome do estado: ");
    scanf("%s", a);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade (m2): ");
    scanf("%f", &area1);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("                                                \n");
    //Calcula densidade e PIB per capita carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;

    sp1 = (populacao1 + area1 + pontosTuristicos1 + pib1 + densidade1) / 5;

    // Entrega para o usuario preencher a carta 2
    printf("Vamos desenvolver a segunda carta\n");
    printf("Digite o nome do estado: ");
    scanf("%s", b);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade (m2): ");
    scanf("%f", &area2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("                                                \n");

    //Calcula densidade e PIB per capita carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    sp2 = (populacao2 + area2 + pontosTuristicos2 + pib2 + densidade2) / 5;

    // Exibe as cartas
    printf("Carta 01\n");
    printf("Estado: %s\n", a);
    printf("Codigo: %s\n", s01);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("                                                \n");
    
    printf("Carta 02\n");
    printf("Estado: %s\n", b);
    printf("Codigo: %s\n", s02);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("                                                \n");


    // Compara as cartas
    if (populacao1 > populacao2){
        printf("A carta 1 ganhou!\n");
        pontos1++;
    } else if (populacao1 < populacao2){
        printf("A carta 2 ganhou!\n");
        pontos2++;
    } else {
        printf("As cartas sao iguais!\n");
    }

    if (area1 > area2){
        printf("A carta 1 ganhou!\n");
        pontos1++;
    } else if (area1 < area2){
        printf("A carta 2 ganhou!\n");
        pontos2++;
    } else {
        printf("As cartas sao iguais!\n");
  
    printf("                                                \n");

    // Exibe o resultado final
    printf("Resultado Final:\n");
    printf("Carta 1: %d pontos\n", pontos1);
    printf("Carta 2: %d pontos\n", pontos2);

    if (pontos1 > pontos2){
        printf("A carta 1 ganhou!\n");
    } else if (pontos1 < pontos2){
        printf("A carta 2 ganhou!\n");
    } else {
        printf("EMPATE!!    \n");
    }
    return 0;
}
}