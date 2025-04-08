#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int carta1, carta2, escolhajogador;
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    char estado1[2], estado2[2];
    float area1, area2;
    char cidade1[30], cidade2[30];
    float PIB1, PIB2;
    int pontos_tur1, pontos_tur2;
    float densidade_pop1, densidade_pop2;
    float PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)

    printf("*Desafio Supertrunfo - Mestre*\n");
    printf("Digite o número da carta 1: \n");
    scanf("%d", &carta1);
    printf("Digite o estado 1: \n");
    scanf("%s", estado1);
    printf("Digite o código da cidade 1: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1: \n");
    scanf("%u", &populacao1);
    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontos_tur1); 

    printf("Digite o número da carta 2: \n");
    scanf("%d", &carta2);
    printf("Digite o estado 2: \n");
    scanf("%s", estado2);
    printf("Digite o código da cidade 2: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2: \n");
    scanf("%u", &populacao2);
    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontos_tur2);

    densidade_pop1 = (populacao1 / area1);
    PIB_per_capita1 = (PIB1 / populacao1);
    super_poder1 = (populacao1 + area1 + PIB1 + pontos_tur1 + (1 / densidade_pop1) + PIB_per_capita1);

    densidade_pop2 = (populacao2 / area2);
    PIB_per_capita2 = (PIB2 / populacao2);
    super_poder2 = (populacao2 + area2 + PIB2 + pontos_tur2 + (1 / densidade_pop2) + PIB_per_capita2);

    printf("Número da carta 1: %d\n", carta1);
    printf("Estado 1: %s\n", estado1);
    printf("Código 1: %s\n", codigo1);
    printf("Nome da Cidade 1: %s\n", cidade2);
    printf("População 1: %u Habitantes\n", populacao1);
    printf("Área 1: %.2f Km²\n", area1);
    printf("PIB 1: R$ %.2f\n", PIB1);
    printf("Pontos Turísticos 1: %d\n", pontos_tur1);
    printf("Densidade Populacional 1: %.2f hab/Km²\n", densidade_pop1);
    printf("PIB per capita 1: R$ %.2f\n", PIB_per_capita1);
    printf("Super-Poder 1: %.2f\n", super_poder1);
    
    printf("\nNúmero da carta 2: %d\n", carta2);
    printf("Estado 2: %s\n", estado2);
    printf("Código 2: %s\n", codigo2);
    printf("Nome da Cidade 2: %s\n", cidade2);
    printf("População 2: %u Habitantes\n", populacao2);
    printf("Área 2: %.2f Km²\n", area2);
    printf("PIB 2: R$ %.2f\n", PIB2);
    printf("Pontos Turísticos 2: %d\n", pontos_tur2);
    printf("Densidade Populacional 2: %.2f hab/Km²\n", densidade_pop2);
    printf("PIB per capita 2: R$ %.2f\n", PIB_per_capita2);
    printf("Super-Poder 2: %.2f\n", super_poder2);

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = pontos_tur1 > pontos_tur2;
    resultado5 = densidade_pop1 < densidade_pop2;
    resultado6 = PIB_per_capita1 > PIB_per_capita2;
    resultado7 = super_poder1 > super_poder2;

    printf("**Comparação das Cartas:**\n");
    printf("**1 para Verdadeiro, Carta 1 venceu**\n");
    printf("**0 para Falso, Carta 2 venceu**\n");
    printf("População: %d\n", resultado1);
    printf("Área: %d\n", resultado2);
    printf("PIB: %d\n", resultado3);
    printf("Pontos Turísticos: %d\n", resultado4);
    printf("Densidade Populacional: %d\n", resultado5);
    printf("PIB per capita: %d\n", resultado6);
    printf("Super Poder: %d\n", resultado7);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("**Comparação das Cartas no quesito POPULAÇÃO:**\n");
    printf("Carta 1 - %s: %u\n", cidade1, populacao1);
    printf("Carta 2 - %s: %u\n", cidade2, populacao2);
    if (populacao1 > populacao2) {  
        printf("A cidade vencedora foi %s.\n", cidade1); 
    } else if (populacao1 == populacao2) {
        printf("A população das cartas são iguais.\n");
    } else {
        printf("A cidade vencedora foi %s.\n", cidade2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("*** Menu Principal ***\n");
    printf("Escolha um atributo abaixo para comparar as cartas: \n");
    printf("1. Nome da cidade.\n");
    printf("2. População.\n");
    printf("3. Área.\n");
    printf("4. PIB.\n");
    printf("5. Número de pontos turísticos.\n");
    printf("6. Densidade demográfica.\n");
    scanf("%d", &escolhajogador);

    switch (escolhajogador)
    {
    case 1:
        printf("O nome das cidades são %s e %s", cidade1, cidade2);
        break;
    case 2:
        printf("O atributo escolhido para comparação foi a POPULAÇÃO.\n");
        printf("A população da cidade 1 %s é %u habitantes e da cidade 2 %s é %u habitantes.\n", cidade1, cidade2, populacao1, populacao2);
        if (populacao1 > populacao2)
        {
            printf("** A Carta 1 %s VENCEU! **", cidade1);
        } else if (populacao1 < populacao2) {
            printf("** A Carta 2 %s VENCEU **", cidade2);
        } else {
            printf("** Empate **");
        }
        break;
    case 3:
        printf("O atributo escolhido para comparação foi a ÁREA.\n");
        printf("A área da cidade 1 %s é: %f Km² e da cidade 2 %s é: %f Km²\n", cidade1, cidade2, area1, area2);
        if (area1 > area2)
        {
        printf("** A Carta 1 %s VENCEU! **", cidade1);
        } else if (area1 < area2) {
            printf("** A Carta 2 %s VENCEU **", cidade2);
        } else {
            printf("** Empate **");
        }
        break;
    case 4:
        printf("O atributo escolhido para comparação foi o PIB.\n");
        printf("O PIB da cidade 1 %s é: R$ %.2f, e da cidade 2 %s é: R$ %.2f\n", cidade1, cidade2, PIB1, PIB2);
        if (PIB1 > PIB2)
        {
            printf("** A Carta 1 %s VENCEU! **", cidade1);
        } else if (PIB1 < PIB2) {
            printf("** A Carta 2 %s VENCEU **", cidade2);
        } else {
            printf("** Empate **");
        }
        break;
    case 5:
        printf("O atributo escolhido para comparação foi o NÚMERO DE PONTOS TURÍSTICOS.\n");
        printf("O número de pontos turísticos da cidade 1 %s é: %d, e da cidade 2 %s é: %d\n", cidade1, cidade2, pontos_tur1, pontos_tur2);
        if (pontos_tur1 > pontos_tur2)
        {
            printf("** A Carta 1 %s VENCEU! **", cidade1);
        } else if (pontos_tur1 < pontos_tur2) {
            printf("** A Carta 2 %s VENCEU **", cidade2);
        } else {
            printf("** Empate **");
        }
        break;
    case 6:
        printf("O atributo escolhido para comparação foi a DENSIDADE DEMOGRÁFICA.\n");
        printf("A densidade demográfica da cidade 1 %s é: %.2f hab/Km², e da cidade 2 %s é: %.2f hab/Km²\n", cidade1, cidade2, densidade_pop1, densidade_pop2);
        if (densidade_pop1 < densidade_pop2)
        {
            printf("** A Carta 1 %s VENCEU! **", cidade1);
        } else if (densidade_pop1 > densidade_pop2) {
            printf("** A Carta 2 %s VENCEU **", cidade2);
        } else {
            printf("** Empate **");
        }
        break;
    default:
        printf("Opção inválida");
        break;
    }
    
      
        

    return 0;
}
