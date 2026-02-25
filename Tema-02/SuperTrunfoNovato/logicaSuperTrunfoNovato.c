#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    char estadoCarta1, estadoCarta2, nomeCidade1[20], nomeCidade2[20];
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2, superPoder1, superPoder2;
    int codCarta1, codCarta2, pontosTuristicosCidade1, pontosTuristicosCidade2, pontosCidade1 = 0, pontosCidade2 = 0;
    unsigned long int populacaoCidade1, populacaoCidade2;

    // Carta 1
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estadoCarta1);

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

    // Carta 2
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &estadoCarta2);

    printf("Digite o código da segunda carta: ");
    scanf("%d", &codCarta2);
    getchar();

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(nomeCidade2, 20, stdin);

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

    // Densidade Populacional: Divida a população da cidade pela sua área
    float densidadePopulacional1 = populacaoCidade1 / areaCidade1;
    float densidadePopulacional2 = populacaoCidade2 / areaCidade2;

    // PIB per Capita: Divida o PIB da cidade pela sua população.
    double pibPerCapita1 = (pibCidade1 * 1000000000.0) / populacaoCidade1;
    double pibPerCapita2 = (pibCidade2 * 1000000000.0) / populacaoCidade2;

    // O inverso de um número é: 1 / número ou seja inverso_da_densidade = 1 / densidade
    superPoder1 = (float)populacaoCidade1 + areaCidade1 + pibCidade1 + pontosTuristicosCidade1 + pibPerCapita1 + ((float)1 / densidadePopulacional1);

    superPoder2 = (float)populacaoCidade2 + areaCidade2 + pibCidade2 + pontosTuristicosCidade2 + pibPerCapita2 + ((float)1 / densidadePopulacional2);

    // Infos
    printf("\nPrimeira Carta:\n");

    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %c%02d\n", estadoCarta1, codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f Bilhões de Reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais", pibPerCapita1);
    printf("\nSuper Poder: %.2f\n", superPoder1);

    printf("\n-----------------------------\n");

    printf("\nSegunda Carta:\n");

    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %c%02d\n", estadoCarta2, codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n-----------------------------\n");
    printf("\nComparação de Cartas: \n");
    printf("\n-----------------------------\n");

    // população
    if (populacaoCidade1 > populacaoCidade2)
    {
        printf("População: Carta 1 (%s) venceu com %lu habitantes\n", nomeCidade1, populacaoCidade1);
        pontosCidade1++;
    }
    else
    {
        printf("População: Carta 2 (%s) venceu com %lu habitantes\n", nomeCidade2, populacaoCidade2);
        pontosCidade2++;
    }

    // area
    if (areaCidade1 > areaCidade2)
    {
        printf("Área: Carta 1 (%s) venceu com %.2f km²\n", nomeCidade1, areaCidade1);
        pontosCidade1++;
    }
    else
    {
        printf("Área: Carta 2 (%s) venceu com %.2f km²\n", nomeCidade2, areaCidade2);
        pontosCidade2++;
    }

    // pib
    if (pibCidade1 > pibCidade2)
    {
        printf("PIB: Carta 1 (%s) venceu com %.2f bilhões\n", nomeCidade1, pibCidade1 / 1000000000.0);
        pontosCidade1++;
    }
    else
    {
        printf("PIB: Carta 2 (%s) venceu com %.2f bilhões\n", nomeCidade2, pibCidade2 / 1000000000.0);
        pontosCidade2++;
    }

    // pontos turisticos
    if (pontosTuristicosCidade1 > pontosTuristicosCidade2)
    {
        printf("Pontos Turísticos: Carta 1 (%s) Venceu com %d pontos\n", nomeCidade1, pontosTuristicosCidade1);
        pontosCidade1++;
    }
    else
    {
        printf("Pontos Turísticos: Carta 2 (%s) Venceu com %d pontos\n", nomeCidade2, pontosTuristicosCidade2);
        pontosCidade2++;
    }

    // densidade populacional
    if (densidadePopulacional1 < densidadePopulacional2)
    {
        printf("Densidade Populacional: Carta 1 (%s) venceu com %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
        pontosCidade1++;
    }
    else
    {
        printf("Densidade Populacional: Carta 2 (%s) venceu com %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
        pontosCidade2++;
    }

    // pib per capita
    if (pibPerCapita1 > pibPerCapita2)
    {
        printf("PIB per Capita: Carta 1 (%s) venceu com %.2f reais\n", nomeCidade1, pibPerCapita1);
        pontosCidade1++;
    }
    else
    {
        printf("PIB per Capita: Carta 2 (%s) venceu com %.2f reais\n", nomeCidade2, pibPerCapita2);
        pontosCidade2++;
    }

    // super poder
    if (superPoder1 > superPoder2)
    {
        printf("Super Poder: Carta 1 (%s) venceu com %.2f reais\n", nomeCidade1, superPoder1);
        pontosCidade1++;
    }
    else
    {
        printf("Super Poder: Carta 2 (%s) venceu com %.2f reais\n", nomeCidade2, superPoder2);
        pontosCidade2++;
    }

    // saída
    printf("\n-----------------------------\n");

    if (pontosCidade1 > pontosCidade2)
    {
        printf("\nCarta 1 (%s) venceu com %d pontos!\n", nomeCidade1, pontosCidade1);
    }
    else
    {
        printf("\nCarta 2 (%s) venceu com %d pontos!\n", nomeCidade2, pontosCidade2);
    }
    return 0;
}
