#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  char estadoCarta1, estadoCarta2, nomeCidade1[20], nomeCidade2[20];
  float areaCidade1, areaCidade2, pibCidade1, pibCidade2;
  int codCarta1, codCarta2, pontosTuristicosCidade1, pontosTuristicosCidade2, populacaoCidade1, populacaoCidade2;

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

  // Infos
  printf("\nPrimeira Carta:\n");

  printf("Estado: %c\n", estadoCarta1);
  printf("Código: %c%02d\n", estadoCarta1, codCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacaoCidade1);
  printf("Área: %.2f km²\n", areaCidade1);
  printf("PIB: %.2f Bilhões de Reais\n", pibCidade1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade1);

  printf("\n-----------------------------\n");

  printf("\nSegunda Carta:\n");

  printf("Estado: %c\n", estadoCarta2);
  printf("Código: %c%02d\n", estadoCarta2, codCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacaoCidade2);
  printf("Área: %.2f km²\n", areaCidade2);
  printf("PIB: %.2f Bilhões de Reais\n", pibCidade2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);

  return 0;
}
