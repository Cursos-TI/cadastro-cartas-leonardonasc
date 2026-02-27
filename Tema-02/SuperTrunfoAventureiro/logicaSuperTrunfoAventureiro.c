#include <stdio.h>
#include <string.h>

int main()
{

    char paisCarta1[30], paisCarta2[30], nomeCidade1[20], nomeCidade2[20], atributo[30];
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2, superPoder1, superPoder2, resultado;
    int codCarta1, codCarta2, pontosTuristicosCidade1, pontosTuristicosCidade2, escolhaAtributo;
    unsigned long int populacaoCidade1, populacaoCidade2;

    // Carta 1
    printf("Digite o nome do país da primeira carta: ");
    fgets(paisCarta1, sizeof(paisCarta1), stdin);
    paisCarta1[strcspn(paisCarta1, "\n")] = '\0';

    printf("Digite o código da primeira carta: ");
    scanf("%d", &codCarta1);
    getchar();

    printf("Digite o nome da cidade da primeira carta: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    // Remover o caractere de nova linha do final da string
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &populacaoCidade1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &areaCidade1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pibCidade1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicosCidade1);
    getchar();

    // Carta 2
    printf("Digite o nome do país da segunda carta: ");
    fgets(paisCarta2, sizeof(paisCarta2), stdin);
    paisCarta2[strcspn(paisCarta2, "\n")] = '\0';

    printf("Digite o código da segunda carta: ");
    scanf("%d", &codCarta2);
    getchar();

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    // Remover o caractere de nova linha do final da string
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população da segunda cidade: ");
    scanf("%lu", &populacaoCidade2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &areaCidade2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pibCidade2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicosCidade2);
    getchar();
    // Densidade Populacional: Divida a população da cidade pela sua área
    float densidadePopulacional1 = populacaoCidade1 / areaCidade1;
    float densidadePopulacional2 = populacaoCidade2 / areaCidade2;

    // PIB per Capita: Divida o PIB da cidade pela sua população.
    double pibPerCapita1 = (pibCidade1 * 1000000000.0) / populacaoCidade1;
    double pibPerCapita2 = (pibCidade2 * 1000000000.0) / populacaoCidade2;

    // O inverso de um número é: 1 / número ou seja inverso_da_densidade = 1 / densidade
    superPoder1 = (float)populacaoCidade1 + areaCidade1 + pibCidade1 + pontosTuristicosCidade1 + pibPerCapita1 + ((float)1 / densidadePopulacional1);
    superPoder2 = (float)populacaoCidade2 + areaCidade2 + pibCidade2 + pontosTuristicosCidade2 + pibPerCapita2 + ((float)1 / densidadePopulacional2);

    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolhaAtributo);

    // selecao de atributos
    switch (escolhaAtributo)
    {
    case 1:
        printf("Atributo escolhido foi: População\n");
        escolhaAtributo = 1;
        break;
    case 2:
        printf("Atributo escolhido foi: Área\n");
        escolhaAtributo = 2;
        break;
    case 3:
        printf("Atributo escolhido foi: PIB\n");
        escolhaAtributo = 3;
        break;
    case 4:
        printf("Atributo escolhido foi: Pontos Turísticos\n");
        escolhaAtributo = 4;
        break;
    case 5:
        printf("Atributo escolhido foi: Densidade Populacional\n");
        escolhaAtributo = 5;
        break;
    default:
        printf("Opção inválida. Encerrando o programa.\n");
        break;
    }

    // Infos
    printf("\nPrimeira Carta:\n");

    printf("País: %s\n", paisCarta1);
    printf("Codigo: %d\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f Bilhões de Reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade1);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);

    printf("\n-----------------------------\n");

    printf("\nSegunda Carta:\n");

    printf("País: %s\n", paisCarta2);
    printf("Codigo: %d\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);
    printf("PIB per Capita: %.2f Reais\n", pibPerCapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);


    printf("\n-----------------------------\n");
    printf("\nResultado Final: \n");
    printf("\n-----------------------------\n");

    if (escolhaAtributo == 1)
    {
        strcpy(atributo, "População");
    }
    else if (escolhaAtributo == 2)
    {
        strcpy(atributo, "Área");
    }
    else if (escolhaAtributo == 3)
    {
        strcpy(atributo, "PIB");
    }
    else if (escolhaAtributo == 4)
    {
        strcpy(atributo, "Pontos Turísticos");
    }
    else if (escolhaAtributo == 5)
    {
        strcpy(atributo, "Densidade Populacional");
    }

    printf("Países: %s vs %s\n", paisCarta1, paisCarta2);
    printf("Atributo escolhido: %s\n", atributo);

    if (escolhaAtributo == 1)
    {
        printf("%s (%s): População de %lu habitantes | %s (%s): População de %lu habitantes\n", nomeCidade1, paisCarta1, populacaoCidade1, nomeCidade2, paisCarta2, populacaoCidade2);
        if (populacaoCidade1 > populacaoCidade2) {
            resultado = 1; 
        } else if (populacaoCidade1 < populacaoCidade2) {
            resultado = 2; 
        } else {
            resultado = 0; 
        }
    }

    else if (escolhaAtributo == 2)
    {
        printf("Area: %s (%s): %.2f km² | %s (%s): %.2f km²\n", nomeCidade1, paisCarta1, areaCidade1, nomeCidade2, paisCarta2, areaCidade2);
        if (areaCidade1 > areaCidade2) {
            resultado = 1; 
        } else if (areaCidade1 < areaCidade2) {
            resultado = 2; 
        } else {
            resultado = 0; 
        }
    }

    else if (escolhaAtributo == 3)
    {
        printf("%s (%s): PIB de %.2f bilhões de reais | %s (%s): PIB de %.2f bilhões de reais\n", nomeCidade1, paisCarta1, pibCidade1 / 1000000000.0, nomeCidade2, paisCarta2, pibCidade2 / 1000000000.0);
        if (pibCidade1 > pibCidade2) {
            resultado = 1; 
        } else if (pibCidade1 < pibCidade2) {
            resultado = 2; 
        } else {
            resultado = 0; 
        }
    }

    else if (escolhaAtributo == 4)
    {
        printf("%s (%s): %d pontos turísticos | %s (%s): %d pontos turísticos\n", nomeCidade1, paisCarta1, pontosTuristicosCidade1, nomeCidade2, paisCarta2, pontosTuristicosCidade2);
        if (pontosTuristicosCidade1 > pontosTuristicosCidade2) {
            resultado = 1; 
        } else if (pontosTuristicosCidade1 < pontosTuristicosCidade2) {
            resultado = 2; 
        } else {
            resultado = 0; 
        }
    }

    else if (escolhaAtributo == 5)
    {
        printf("%s (%s): Densidade Populacional de %.2f hab/km² | %s (%s): Densidade Populacional de %.2f hab/km²\n", nomeCidade1, paisCarta1, densidadePopulacional1, nomeCidade2, paisCarta2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2) {
            resultado = 1; 
        } else if (densidadePopulacional1 > densidadePopulacional2) {
            resultado = 2; 
        } else {
            resultado = 0; 
        }
    }

    // vencedor
    if (resultado == 0)
    {
        printf("O resultado é um empate!\n");
    }
    else if (resultado == 1)
    {
        printf("A carta vencedora é: %s (%s) com o atributo %s\n", nomeCidade1, paisCarta1, atributo);
    }
    else
    {
        printf("A carta vencedora é: %s (%s) com o atributo %s\n", nomeCidade2, paisCarta2, atributo);
    }

    return 0;
}