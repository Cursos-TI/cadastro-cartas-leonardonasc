#include <stdio.h>
#include <string.h>

/*

Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.

Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

*/

int main()
{
    char estadoCarta1, estadoCarta2, nomeCidade1[20], nomeCidade2[20];
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2, superPoder1, superPoder2;
    int codCarta1, codCarta2, pontosTuristicosCidade1, pontosTuristicosCidade2;
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
    scanf("%d", &populacaoCidade1);

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
    scanf("%d", &populacaoCidade2);

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
    printf("População: %d\n", populacaoCidade1);
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
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n-----------------------------\n");

    printf("\nComparação de Cartas: ");

    printf("\nPopulação: Carta 1 venceu (%d)", populacaoCidade1 > populacaoCidade2);
    printf("\nÁrea: Carta 1 venceu (%d)", areaCidade1 > areaCidade2);
    printf("\nPIB: Carta 1 venceu (%d)", pibCidade1 > pibCidade2);
    printf("\nPontos Turísticos: Carta 1 venceu (%d)", pontosTuristicosCidade1 > pontosTuristicosCidade2);
    printf("\nDensidade Populacional: Carta 1 venceu (%d)", densidadePopulacional1 < densidadePopulacional2);
    printf("\nPIB per Capita: Carta 1 venceu (%d)", pibPerCapita1 > pibPerCapita2);
    printf("\nSuper Poder: Carta 1 venceu (%d)", superPoder1 > superPoder2);

    return 0;
}
