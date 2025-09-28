#include <stdio.h>

int main(void) {
    // ----- CARTA 1 (RJ) -----
    char carta1[3];
    char estado1[3];
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // ----- CARTA 2 (SP) -----
    char carta2[3];
    char estado2[3];
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Usei dados ficticios para as informaçoes apenas para testar a copilação e funcionamento ex: POP=1234 AREA 12345
    
    //exemplos dos codigos e UF serão exibidos na hora da pergunta

    //usei um tecnica mais avançada para permitir nomes com espaços (ja estou no nivel a frente so nao tinha enviado)
    //O fgets é projetado para trabalhar com entradas completas (permitindo espaços).
    //getchar para poder achar o espaço corretamente e nao pyuklar a linha 
    
  
    
   
    
    // ===== Entrada Carta 1 =====

    printf("\n----- Primeira Carta -----\n");
    
  printf("Digite a sigla da carta (ex: A1):\n");
    scanf("%2s", carta1);

    printf("Digite a UF (ex: RJ):\n");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta (ex: RJ1):\n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade:\n");
    getchar(); // (tecnica nivel a frente) Captura o '\n' remanescente de scanf
    fgets(nome_cidade1, 50, stdin);

    printf("Digite a populacao (em habitantes):\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km2):\n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB (em milhoes de R$):\n");
    scanf("%f", &pib1);

    printf("Digite o total de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);

    // ===== Entrada Carta 2 =====
    printf("\n----- Segunda Carta -----\n");

    printf("Digite a sigla da carta (ex: A2):\n");
    scanf("%2s", carta2);

    printf("Digite a UF (ex: SP):\n");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta (ex: SP1):\n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade:\n");
    getchar(); 
    fgets(nome_cidade2, 50, stdin);

    printf("Digite a populacao (em habitantes):\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km2):\n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB (em milhoes de R$):\n");
    scanf("%f", &pib2);

    printf("Digite o total de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);

    // ===== Saída das 2 =====
    // resumo das cartas escolhidas pelo jogador
    printf("\n===== CARTAS =====\n");
    printf("Carta 1: %s\n | UF: %s\n | Cod: %s\n | Cidade: %s | Populacao: %d habitantes\n | Area: %.2f km2\n | PIB: %.2f milhoes R$\n | Pontos: %d\n",
           carta1, estado1, codigo1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("Carta 2: %s\n | UF: %s\n | Cod: %s\n | Cidade: %s | Populacao: %d habitantes\n | Area: %.2f km2\n | PIB: %.2f milhoes R$\n | Pontos: %d\n",
           carta2, estado2, codigo2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}
