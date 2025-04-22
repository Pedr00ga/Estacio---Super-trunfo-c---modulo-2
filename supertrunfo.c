#include <stdio.h>

int main(){

    //Definindo variaveis gerais
    int opcoes1;
    int opcoes2;
    int atEscolhido1 = 0;
    int atEscolhido2 = 0;

    // Definindo as variáveis para a primeira carta
    char a[100] = "SP"; //São Paulo
    char s01[100] = "S01"; // S01
    char cidade1[100] = "Americana"; //Americana
    int populacao1 = 237240; //237240
    float area1 = 133910; //133.9
    int pontosTuristicos1 = 20; //20
    float densidade1 = 1771; 
    float pib1 = 70.27;
    float pibPerCapita1;
    float sp1;
    int pontos1 = 0;
    float sTotal1 = 0;


    // Definindo as variáveis para a segunda carta
    char b[100] = "SP"; 
    char s02[100] = "S02";
    char cidade2[100] = "Sorocaba"; //Sorocaba
    int populacao2 = 757459;  // 650000
    float area2 = 449872; // 450.5
    int pontosTuristicos2 = 15; // 15
    float densidade2 = 1608;
    float pib2 = 67.24;
    float pibPerCapita2;
    float sp2;
    int pontos2 = 0;
    float sTotal2 = 0;

    // Entrega para o usuario preencher a carta
    // printf("Vamos desenvolver a primeira carta do jogo Super Trunfo!\n");
    // printf("Digite o nome do estado: ");
    // scanf("%s", a);
    // printf("Digite o nome da cidade: ");
    // scanf("%s", cidade1);
    // printf("Digite a populacao da cidade: ");
    // scanf("%d", &populacao1);
    // printf("Digite a area da cidade (m2): ");
    // scanf("%f", &area1);
    // printf("Digite o numero de pontos turisticos da cidade: ");
    // scanf("%d", &pontosTuristicos1);
    // printf("Digite o PIB da cidade: ");
    // scanf("%f", &pib1);
    // printf("                                                \n");

    // //Calcula densidade e PIB per capita carta 1
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1;

    //Calcula SP e soma total carta 1
    sp1 = (populacao1 + area1 + pontosTuristicos1 + pib1 + densidade1) / 5;
    sTotal1 = (populacao1 + area1 + pontosTuristicos1 + pib1 + densidade1);

    // // Entrega para o usuario preencher a carta 2
    // printf("Vamos desenvolver a segunda carta\n");
    // printf("Digite o nome do estado: ");
    // scanf("%s", b);
    // printf("Digite o nome da cidade: ");
    // scanf("%s", cidade2);
    // printf("Digite a populacao da cidade: ");
    // scanf("%d", &populacao2);
    // printf("Digite a area da cidade (m2): ");
    // scanf("%f", &area2);
    // printf("Digite o numero de pontos turisticos da cidade: ");
    // scanf("%d", &pontosTuristicos2);
    // printf("Digite o PIB da cidade: ");
    // scanf("%f", &pib2);
    // printf("                                                \n");

    //Calcula densidade e PIB per capita carta 2
    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;

    //Calcula SP e soma total carta 2
    sp2 = (populacao2 + area2 + pontosTuristicos2 + pib2 + densidade2) / 5;
    sTotal2 = (populacao2 + area2 + pontosTuristicos2 + pib2 + densidade2);
    


    // Exibe as cartas
    printf("Carta 01\n");
    printf("Estado: %s\n", a);
    printf("Codigo: %s\n", s01);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
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
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("                                                \n");

    // Menu do usuario para selecionar o primeiro atributo
    printf("Selecione o primeiro atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Numero de Pontos Turisticos\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB\n");
    printf("6. PIB per capita\n");
    printf("7. SP\n");
    printf("8. Soma total\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcoes1);

    //Tratamento de erro para o primeiro atributo
    if (opcoes1 < 1 || opcoes1 > 8){
        printf("Opcao invalida!\n");
        return 1;
    }
    printf("                                                \n");

    // Menu do usuario para selecionar o segundo atributo
    printf("Seleciona o segundo atributo para comparar:\n");
    if (opcoes1 != 1) printf("1. Populacao\n");
    if (opcoes1 != 1) printf("2. Area\n");
    if (opcoes1 != 1) printf("3. Numero de pontos Turisticos\n");
    if (opcoes1 != 1) printf("4. Densidade Populacional\n");
    if (opcoes1 != 1) printf("5. PIB\n");
    if (opcoes1 != 1) printf("6. PIB per capita\n");
    if (opcoes1 != 1) printf("7. SP\n");
    if (opcoes1 != 1) printf("8. Soma total\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcoes2);

    //Tratamento de erro para o segundo atributo
    if (opcoes2 < 1 || opcoes2 > 8){
        printf("Opcao invalida!\n");
        return 1;
    }

    if (opcoes1 == opcoes2)
    {
        printf("Voce nao pode escolher o mesmo atributo!\n");
        return 1;
    }

    // Faz a comparação entre os atributos escolhidos
    switch (opcoes1){
        case 1: atEscolhido1 = 1; 
        if (populacao1 > populacao2){
            pontos1++;
        } else if (populacao1 < populacao2){
            pontos2++;
        } else {
            printf("Populacao igual!\n");
        } break;

        case 2: atEscolhido1 = 2; 
        if (area1 > area2){
            pontos1++;
        } else if (area1 < area2){
            pontos2++;
        } else {
            printf("Area igual!\n");
        } break;

        case 3: atEscolhido1 = 3;
        if (pontosTuristicos1 > pontosTuristicos2){
            pontos1++;
        } else if (pontosTuristicos1 < pontosTuristicos2){
            pontos2++;
        } else {
            printf("Pontos turisticos iguais!\n");
        } break;
    
        case 4: atEscolhido1 = 4;
        if (densidade1 < densidade2){
            pontos1++;
        } else if (densidade1 > densidade2){
            pontos2++;
        } else {
            printf("Densidade igual!\n");
        } break;

        case 5: atEscolhido1 = 5;
        if (pib1 > pib2){
            pontos1++;
        } else if (pib1 < pib2){
            pontos2++;
        } else {
            printf("PIB igual!\n");
        } break;

        case 6: atEscolhido1 = 6;
        if (pibPerCapita1 > pibPerCapita2){
            pontos1++;
        } else if (pibPerCapita1 < pibPerCapita2){
            pontos2++;
        } else {
            printf("PIB per capita igual!\n");
        } break;

        case 7: atEscolhido1 = 7;
        if (sp1 > sp2){
            pontos1++;
        } else if (sp1 < sp2){
            pontos2++;
        } else {
            printf("SP igual!\n");
        } break;

        case 8: atEscolhido1 = 8;
        if (sTotal1 > sTotal2){
            pontos1++;
        } else if (sTotal1 < sTotal2){
            pontos2++;
        } else {
            printf("Soma total igual!\n");
        } break;

        default: printf("Opcao invalida!\n"); break;
    }
  
    printf("                                                \n");

    // Faz a comparação entre os atributos escolhidos
    switch (opcoes2){
        case 1: atEscolhido2 = 1; 
        if (populacao1 > populacao2){
            pontos1++;
        } else if (populacao1 < populacao2){
            pontos2++;
        } else {
            printf("Populacao igual!\n");
        } break;

        case 2: atEscolhido2 = 2; 
        if (area1 > area2){
            pontos1++;
        } else if (area1 < area2){
            pontos2++;
        } else {
            printf("Area igual!\n");
        } break;

        case 3: atEscolhido2 = 3;
        if (pontosTuristicos1 > pontosTuristicos2){
            pontos1++;
        } else if (pontosTuristicos1 < pontosTuristicos2){
            pontos2++;
        } else {
            printf("Pontos turisticos iguais!\n");
        } break;
    
        case 4: atEscolhido2 = 4;
        if (densidade1 < densidade2){
            pontos1++;
        } else if (densidade1 > densidade2){
            pontos2++;
        } else {
            printf("Densidade igual!\n");
        } break;

        case 5: atEscolhido2 = 5;
        if (pib1 > pib2){
            pontos1++;
        } else if (pib1 < pib2){
            pontos2++;
        } else {
            printf("PIB igual!\n");
        } break;

        case 6: atEscolhido2 = 6;
        if (pibPerCapita1 > pibPerCapita2){
            pontos1++;
        } else if (pibPerCapita1 < pibPerCapita2){
            pontos2++;
        } else {
            printf("PIB per capita igual!\n");
        } break;

        case 7: atEscolhido2 = 7;
        if (sp1 > sp2){
            pontos1++;
        } else if (sp1 < sp2){
            pontos2++;
        } else {
            printf("SP igual!\n");
        } break;

        case 8: atEscolhido2 = 8;
        if (sTotal1 > sTotal2){
            pontos1++;
        } else if (sTotal1 < sTotal2){
            pontos2++;
        } else {
            printf("Soma total igual!\n");
        } break;

        default: printf("Opcao invalida!\n"); break;
    }

    // Exibe o resultado final
    printf("Resultado Final:\n");


    // Verifica quem ganhou, quais atributos foram escolhidos e exibe os pontos
    if (pontos1 >> pontos2){
        printf("A carta 1 ganhou!\n");
        printf("Carta 1: %d pontos\n", pontos1);
        printf("Cidade: %s\n", cidade1);
        printf("O primeiro atributo escolihdo foi: ");
        switch (atEscolhido1) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("Area\n"); break;
            case 3: printf("Pontos Turisticos\n"); break;
            case 4: printf("Densidade\n"); break;
            case 5: printf("PIB\n"); break;
            case 6: printf("PIB per capita\n"); break;
            case 7: printf("SP (Super Pontuação)\n"); break;
            default: printf("Soma total\n"); break;
        } ;
        printf("O segundo atributo escolhido foi: ");
        switch (atEscolhido2) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("Area\n"); break;
            case 3: printf("Pontos Turisticos\n"); break;
            case 4: printf("Densidade\n"); break;
            case 5: printf("PIB\n"); break;
            case 6: printf("PIB per capita\n"); break;
            case 7: printf("SP (Super Pontuação)\n"); break;
            default: printf("Soma total\n"); break;
        }
        printf("A soma total da carta 1 é: %.2f\n", sTotal1);
        printf("A soma total da carta 2 é: %.2f\n", sTotal2);

    } else if (pontos2 >> pontos1){
        printf("A carta 2 ganhou!\n");
        printf("Carta 2: %d pontos\n", pontos2);
        printf("Cidade: %s\n", cidade2);
        printf("O primeiro atributo escolihdo foi: ");
        switch (atEscolhido1) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("Area\n"); break;
            case 3: printf("Pontos Turisticos\n"); break;
            case 4: printf("Densidade\n"); break;
            case 5: printf("PIB\n"); break;
            case 6: printf("PIB per capita\n"); break;
            case 7: printf("SP (Super Pontuação)\n"); break;
            default: printf("Soma total\n"); break;
        } ;
        printf("O segundo atributo escolhido foi: ");
        switch (atEscolhido2) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("Area\n"); break;
            case 3: printf("Pontos Turisticos\n"); break;
            case 4: printf("Densidade\n"); break;
            case 5: printf("PIB\n"); break;
            case 6: printf("PIB per capita\n"); break;
            case 7: printf("SP (Super Pontuação)\n"); break;
            default: printf("Soma total\n"); break;
        }
        printf("A soma total da carta 1 e: %.2f\n", sTotal1);
        printf("A soma total da carta 2 e: %.2f\n", sTotal2);
    } else if (pontos1 == pontos2){
        printf("EMPATE!!    \n");
    }
    return 0;
}
