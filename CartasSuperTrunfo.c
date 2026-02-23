#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* Objetivo: No nível novato irei criar as cartas representando as cidades utilizando 'scanf' para entrada 
de dados e 'printf' saída de dados com o objetivo de exibir as informações.*/

int main() {

    /*Variáveis para armazenar os dados de Estado, Código da Carta, 
    Nome da Cidade, População, Área (em km²), PIB, Número de Pontos Turísticos.*/

    // Carta 1
    char estado1[20], codigoe1[20], cidade1[20];  
    int habitantes1, pontos1; 
    float area1, PIB1; 

    // Carta 2
    char estado2[20], codigoe2[20], cidade2[20];  
    int habitantes2, pontos2; 
    float area2, PIB2;
    
    /*O sistema vai gerar um pedido pelo "printf" ao usuário para inserir os dados das cartas,
    o "scanf", por sua vez, lê os dados e armazena nas respectivas variáveis*/

    printf("Digite o estado da 1ª carta: ");
    scanf(" %c", estado1);

    printf("Digite o código da 1ª carta: ");
    scanf("%s", codigoe1);

    printf("Digite a cidade da 1ª carta: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da 1ª carta: ");
    scanf("%d", &habitantes1);

    printf("Digite a área da 1ª carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da 1ª carta: ");
    scanf("%f", &PIB1);

    printf("Digite os pontos turísticos da 1ª carta: ");
    scanf("%d", &pontos1);


    printf("Digite o estado da 2ª carta: ");
    scanf(" %c", estado2);

    printf("Digite o código da 2ª carta: ");
    scanf("%s", codigoe2);

    printf("Digite a cidade da 2ª carta: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da 2ª carta: ");
    scanf("%d", &habitantes2);

    printf("Digite a área da 2ª carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da 2ª carta: ");
    scanf("%f", &PIB2);

    printf("Digite os pontos turísticos da 2ª carta: ");
    scanf("%d", &pontos2);

    /*A partir daqui, iremos mostrar os dados das cartas que foram solicitados ao usuário
    em tela para que possam ser visualizados.*/

    printf("\nDados da 1ª carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoe1);
    printf("Cidade: %s\n", cidade1);
    printf("Número de habitantes: %d\n", habitantes1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    
    printf("\nDados da 2ª carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoe2);
    printf("Cidade: %s\n", cidade2);
    printf("Número de habitantes: %d\n", habitantes2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    printf("\nFim de jogo!\n"); // Mensagem de encerramento do jogo
 
    return 0;

}