#include <stdio.h>

int main() {

    /*Variáveis para armazenar os dados de Estado, Código da Carta, 
    Nome da Cidade, População, Área (em km²), PIB, Número de Pontos Turísticos, Densidade Populacional e PIB per capita.*/

    // Carta 1
    char estado1, codigoe1[20], cidade1[20];  
    unsigned long int habitantes1;
    int pontos1; 
    float area1, PIB1, densidade1, perCapita1, superPoder1;

    // Carta 2
    char estado2, codigoe2[20], cidade2[20];  
    unsigned long int habitantes2;
    int pontos2; 
    float area2, PIB2, densidade2, perCapita2, superPoder2;

    // Comparativo
    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;
    
    /*O sistema vai gerar um pedido pelo "printf" ao usuário para inserir os dados das cartas,
    o "scanf", por sua vez, lê os dados e armazena nas respectivas variáveis*/

    // Carta 1
    printf("Digite o estado da 1ª carta: ");
    scanf(" %c", &estado1);

    printf("Digite o código da 1ª carta: ");
    scanf("%s", codigoe1);

    printf("Digite a cidade da 1ª carta: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da 1ª carta: ");
    scanf("%lu", &habitantes1);

    printf("Digite a área da 1ª carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da 1ª carta: ");
    scanf("%f", &PIB1);

    printf("Digite os pontos turísticos da 1ª carta: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("Digite o estado da 2ª carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da 2ª carta: ");
    scanf("%s", codigoe2);

    printf("Digite a cidade da 2ª carta: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da 2ª carta: ");
    scanf("%lu", &habitantes2);

    printf("Digite a área da 2ª carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da 2ª carta: ");
    scanf("%f", &PIB2);

    printf("Digite os pontos turísticos da 2ª carta: ");
    scanf("%d", &pontos2);

    /*A partir daqui, iremos mostrar os dados das cartas que foram solicitados ao usuário
    em tela para que possam ser visualizados.*/

    printf("\nDados da 1ª carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoe1);
    printf("Cidade: %s\n", cidade1);
    printf("Número de habitantes: %lu\n", habitantes1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1 = habitantes1/area1); // Cálculo da densidade populacional
    printf("PIB per capita: %.2f reais\n", perCapita1 = PIB1/habitantes1); // Cálculo do PIB per capita
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("O Super Poder da Carta 1 é: %.2f\n", superPoder1 = (float)(habitantes1 + area1 + PIB1 + pontos1 + perCapita1 + (1/densidade1)));
    
    printf("\nDados da 2ª carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoe2);
    printf("Cidade: %s\n", cidade2);
    printf("Número de habitantes: %lu\n", habitantes2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2 = habitantes2/area2); // Cálculo da densidade populacional
    printf("PIB per capita: %.2f reais\n", perCapita2 = PIB2/habitantes2); // Cálculo do PIB per capita
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("O Super Poder da Carta 2 é: %.2f\n", superPoder2 = (float)(habitantes2 + area2 + PIB2 + pontos2 + perCapita2 + (1/densidade2)));

    // Comparação entre as cartas
    printf("\nSuper Trunfo Países: Duelo\n");
    printf("Habitantes: Carta 1 vence? %d\n", resultadoA = habitantes1 > habitantes2);
    printf("Área: Carta 1 vence? %d\n", resultadoB = area1 > area2);
    printf("PIB: Carta 1 vence? %d\n", resultadoC = PIB1 > PIB2);
    printf("Pontos turísticos: Carta 1 vence? %d\n", resultadoD = pontos1 > pontos2);
    printf("PIB per Capita: Carta 1 vence? %d\n", resultadoE = perCapita1 > perCapita2);
    printf("Densidade Populacional: Carta 1 vence? %d\n", resultadoF = densidade1 < densidade2);
    printf("Super Poder: Carta 1 vence? %d\n", resultadoG = superPoder1 > superPoder2);

    printf("\nFim de jogo!\n"); // Mensagem de encerramento do jogo
 
    return 0;

}