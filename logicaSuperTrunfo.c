#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int carta1, carta2;
    char codigo1[4], codigo2[4];
    char estado1[2], estado2[2];
    char cidade1[30] = "Itabaianinha", cidade2[30] = "Estância";
    unsigned long int populacao1 = 40000, populacao2 = 60000;
    float area1 = 420000, area2 = 860000;    
    float PIB1 = 536000000, PIB2 = 1210000000;
    int pontos_tur1 = 50, pontos_tur2 = 20;
    float densidade_pop1, densidade_pop2;
    float PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    
    /*
    inicio da transformacão em comentário
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
    fim da transformação em comentario
    */

    densidade_pop1 = (populacao1 / area1);
    PIB_per_capita1 = (PIB1 / populacao1);
    super_poder1 = (populacao1 + area1 + PIB1 + pontos_tur1 + (1 / densidade_pop1) + PIB_per_capita1);

    densidade_pop2 = (populacao2 / area2);
    PIB_per_capita2 = (PIB2 / populacao2);
    super_poder2 = (populacao2 + area2 + PIB2 + pontos_tur2 + (1 / densidade_pop2) + PIB_per_capita2);

    /*
    inicio da transformação em comentário
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
    fim da transformação de comentario
    */
    int escolhajogador1, escolhajogador2;
    int comparacao1, comparacao2;
    int atributo1carta1, atributo1carta2, atributo2carta1, atributo2carta2;
    float vencedor;

    printf("*** Menu Principal ***\n");
    printf("As opções abaixo são os atributos para comparação das cartas: \n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    scanf("%d", &escolhajogador1);
    printf("Escolha o segundo atributo para comparação:\n");
    scanf("%d", &escolhajogador2);

        if (escolhajogador1 == escolhajogador2)
        {
            printf("A escolha dos atributos foram iguais! Reescolha o segundo atributo!\n");
            scanf("%d", &escolhajogador2);
        } else {
            switch (escolhajogador1) {
                case 1:
                    printf("O primeiro atributo escolhido para comparação foi a POPULAÇÃO.\n");
                    printf("A população de %s é: %ld habitantes.\n", cidade1, populacao1);
                    printf("A população de %s é: %ld habitantes.\n", cidade2, populacao2);
                    atributo1carta1 = populacao1;
                    atributo1carta2 = populacao2;
                    comparacao1 = (populacao1 > populacao2) ? 1 : 0;
                    if (comparacao1 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (populacao1 == populacao2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                break;
                case 2:
                    printf("O primeiro atributo escolhido para comparação foi a ÁREA.\n");
                    printf("A área da cidade 1 %s é: %.2f Km²\n", cidade1, area1);
                    printf("A área da cidade 1 %s é: %.2f Km²\n", cidade2, area2);
                    atributo1carta1 = area1;
                    atributo1carta2 = area2;
                    comparacao1 = (area1 > area2) ? 1 : 0;
                    if (comparacao1 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (area1 == area2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                case 3:
                    printf("O primeiro atributo escolhido para comparação foi o PIB.\n");
                    printf("O PIB da cidade 1 %s é: R$ %.2f\n", cidade1, PIB1);
                    printf("O PIB da cidade 2 %s é: R$ %.2f\n", cidade2, PIB2);
                    atributo1carta1 = PIB1;
                    atributo1carta2 = PIB2;
                    comparacao1 = (PIB1 > PIB2) ? 1 : 0;
                    if (comparacao1 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (PIB1 == PIB2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                case 4:
                    printf("O primeiro atributo escolhido para comparação foi o NÚMERO DE PONTOS TURÍSTICOS.\n");
                    printf("O número de pontos turísticos da cidade 1 %s é: %d\n", cidade1, pontos_tur1);
                    printf("O número de pontos turísticos da cidade 2 %s é: %d\n", cidade2, pontos_tur2);
                    atributo1carta1 = pontos_tur1;
                    atributo1carta2 = pontos_tur2;
                    comparacao1 = (pontos_tur1 > pontos_tur2) ? 1 : 0;
                    if (comparacao1 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (pontos_tur1 == pontos_tur2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                case 5:
                    printf("O primeiro atributo escolhido para comparação foi a DENSIDADE DEMOGRÁFICA.\n");
                    printf("A densidade demográfica da cidade 1 %s é: %.2f hab/Km²\n", cidade1, densidade_pop1);
                    printf("A densidade demográfica da cidade 2 %s é: %.2f hab/Km²\n", cidade2, densidade_pop2);
                    atributo1carta1 = densidade_pop1;
                    atributo1carta2 = densidade_pop2;
                    comparacao1 = (densidade_pop1 > densidade_pop2) ? 1 : 0;
                    if (comparacao1 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (densidade_pop1 == densidade_pop2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                default:
                    printf("Primeira opção inválida");
                    break;
                }          
            switch (escolhajogador2) {
                case 1:
                    printf("O segundo atributo escolhido para comparação foi a POPULAÇÃO.\n");
                    printf("A população de %s é: %ld habitantes.\n", cidade1, populacao1);
                    printf("A população de %s é: %ld habitantes.\n", cidade2, populacao2);
                    atributo2carta1 = populacao1;
                    atributo2carta2 = populacao2;
                    comparacao2 = (populacao1 > populacao2) ? 1 : 0;
                    if (comparacao2 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (populacao1 == populacao2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                break;
                case 2:
                    printf("O segundo atributo escolhido para comparação foi a ÁREA.\n");
                    printf("A área da cidade 1 %s é: %.2f Km²\n", cidade1, area1);
                    printf("A área da cidade 1 %s é: %.2f Km²\n", cidade2, area2);
                    atributo2carta1 = area1;
                    atributo2carta2 = area2;
                    comparacao2 = (area1 > area2) ? 1 : 0;
                    if (comparacao2 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (area1 == area2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                case 3:
                    printf("O segundo atributo escolhido para comparação foi o PIB.\n");
                    printf("O PIB da cidade 1 %s é: R$ %.2f\n", cidade1, PIB1);
                    printf("O PIB da cidade 2 %s é: R$ %.2f\n", cidade2, PIB2);
                    atributo2carta1 = PIB1;
                    atributo2carta2 = PIB2;
                    comparacao2 = (PIB1 > PIB2) ? 1 : 0;
                    if (comparacao2 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (PIB1 == PIB2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                case 4:
                    printf("O segundo atributo escolhido para comparação foi o NÚMERO DE PONTOS TURÍSTICOS.\n");
                    printf("O número de pontos turísticos da cidade 1 %s é: %d\n", cidade1, pontos_tur1);
                    printf("O número de pontos turísticos da cidade 2 %s é: %d\n", cidade2, pontos_tur2);
                    atributo2carta1 = pontos_tur1;
                    atributo2carta2 = pontos_tur2;
                    comparacao2 = (pontos_tur1 > pontos_tur2) ? 1 : 0;
                    if (comparacao2 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (pontos_tur1 == pontos_tur2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                case 5:
                    printf("O segundo atributo escolhido para comparação foi a DENSIDADE DEMOGRÁFICA.\n");
                    printf("A densidade demográfica da cidade 1 %s é: %.2f hab/Km²\n", cidade1, densidade_pop1);
                    printf("A densidade demográfica da cidade 2 %s é: %.2f hab/Km²\n", cidade2, densidade_pop2);
                    atributo2carta1 = densidade_pop1;
                    atributo2carta2 = densidade_pop2;
                    comparacao2 = (densidade_pop1 > densidade_pop2) ? 1 : 0;
                    if (comparacao2 == 1) {
                        printf("** A Carta 1 %s VENCEU! **\n", cidade1);
                    } else if (densidade_pop1 == densidade_pop2) {
                        printf("Empate\n");
                    } else {
                        printf("*** A Carta 2 %s VENCEU **\n", cidade2);
                    }
                    break;
                default:
                    
                    break;
                
                }
        
            vencedor = ((atributo1carta1 + atributo2carta1) > (atributo1carta2 + atributo2carta2)) ? 1 : 0 ;
            if (vencedor == 1) {
                printf("O vencedor da rodada foi %s!\n", cidade1);
            } else if (vencedor == 0) {
                printf("O vencedor da rodada foi %s!\n", cidade2);
            }  else  {
                printf("Empate!\n");
            }
                 
        }
        return 0;
                      
}
    
          
  

    


           




