#include <stdio.h>
#include <string.h> // Adicionado para a função strcpy

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Variáveis para a Carta 1
    char estado1[60];
    char codigo_carta1[10];
    char cidade1[50];
    long long populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2[60];
    char codigo_carta2[10];
    char cidade2[50];
    long long populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Variáveis para a lógica de comparação
    float densidade1, densidade2;
    int escolha1, escolha2;
    float valor1_carta1, valor2_carta1;
    float valor1_carta2, valor2_carta2;
    char nome_atributo1[50], nome_atributo2[50];
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Coleta de dados da Carta 1
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o nome do estado: ");
    scanf(" %59[^\n]", estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lld", &populacao1);
    printf("Digite a area em km2 (Use ponto): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes, use ponto): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Coleta de dados da Carta 2
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite o nome do estado: ");
    scanf(" %59[^\n]", estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lld", &populacao2);
    printf("Digite a area em km2 (Use ponto): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes, use ponto): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Primeiro, calculamos os valores derivados que podem ser usados na comparação
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\n\n--- CARTAS PRONTAS PARA O DUELO FINAL ---\n");
    printf("-----------------------------------------\n");
    printf("--- Carta 1: %s\n", cidade1);
    printf("--- Carta 2: %s\n", cidade2);
    printf("-----------------------------------------\n");

    // Lógica para o jogador escolher o primeiro atributo
    printf("\n--- Escolha o PRIMEIRO atributo para comparar ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica (menor valor e melhor)\n");
    printf("\nDigite sua escolha (1-5): ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1: strcpy(nome_atributo1, "Populacao"); valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: strcpy(nome_atributo1, "Area"); valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: strcpy(nome_atributo1, "PIB"); valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: strcpy(nome_atributo1, "Pontos Turisticos"); valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: strcpy(nome_atributo1, "Densidade Demografica"); valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Opcao invalida! Fim de jogo.\n"); return 1;
    }
    
    // Lógica para o jogador escolher o segundo atributo (Menu Dinâmico)
    printf("\n--- Escolha o SEGUNDO atributo para comparar ---\n");
    if (escolha1 != 1) printf("1. Populacao\n");
    if (escolha1 != 2) printf("2. Area\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos Turisticos\n");
    if (escolha1 != 5) printf("5. Densidade Demografica (menor valor e melhor)\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes! Fim de jogo.\n");
        return 1;
    }
    
    switch (escolha2) {
        case 1: strcpy(nome_atributo2, "Populacao"); valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: strcpy(nome_atributo2, "Area"); valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: strcpy(nome_atributo2, "PIB"); valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: strcpy(nome_atributo2, "Pontos Turisticos"); valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 5: strcpy(nome_atributo2, "Densidade Demografica"); valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Opcao invalida! Fim de jogo.\n"); return 1;
    }
    
    // Cálculo final para a comparação
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("\n\n--- RESULTADO DA RODADA ---\n");
    printf("Atributos escolhidos: %s e %s\n", nome_atributo1, nome_atributo2);
    
    printf("\n--- Carta: %s ---\n", cidade1);
    printf("%s: %.2f\n", nome_atributo1, valor1_carta1);
    printf("%s: %.2f\n", nome_atributo2, valor2_carta1);
    printf("SOMA TOTAL: %.2f\n", soma1);
    
    printf("\n--- Carta: %s ---\n", cidade2);
    printf("%s: %.2f\n", nome_atributo1, valor1_carta2);
    printf("%s: %.2f\n", nome_atributo2, valor2_carta2);
    printf("SOMA TOTAL: %.2f\n", soma2);
    
    printf("\n--- Veredito ---\n");
    if (soma1 == soma2) {
        printf("Resultado: Empate! Ambas as cartas somaram %.2f.\n", soma1);
    } else {
        char* cidade_vencedora = (soma1 > soma2) ? cidade1 : cidade2;
        float soma_vencedora = (soma1 > soma2) ? soma1 : soma2;
        float soma_perdedora = (soma1 > soma2) ? soma2 : soma1;
        
        printf("A carta vencedora e %s com uma soma maior (%.2f vs %.2f)!\n", 
               cidade_vencedora, soma_vencedora, soma_perdedora);
    }

    return 0;
}