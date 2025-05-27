#include <stdio.h>

int main(){
	// Variáveis da carta 1
	char estado[4], cidade[30];
	int id_carta, pontos_turisticos;
	float area, pib, densidade_populacional, pib_capita;
	unsigned long int populacao;
	// Variáveis da carta 2
	char estado1[4], cidade1[30];
	int id_carta1, pontos_turisticos1;
	float area1, pib1, densidade_populacional1, pib_capita1;
	unsigned long int populacao1;
	
	printf("CARTA 1: \n");
	// Estado da carta 1
	printf("Digite o estado da cidade: \n");
	scanf(" %s", &estado);
	
	// ID da carta 1
	printf("Digite o código da carta: \n");
	scanf("%d", &id_carta);
	
	// Nome da cidade da carta 1
	printf("Digite o nome da cidade: (Sem espaços)\n");
	scanf("%s", &cidade);
	
	// População da carta 1
	printf("Digite o tamanho da população da cidade: \n");
	scanf("%d", &populacao);
	
	// Tamanho da area da carta 1
	printf("Digite o tamanho da àrea em km²: \n");
	scanf("%f", &area);
	
	// PIB da carta 1
	printf("Digite o PIB da cidade: \n");
	scanf("%f", &pib);
	
	// Numero de pontos turísticos da carta 1
	printf("Digite a quantidade de pontos turísticos da cidade: \n");
	scanf("%d", &pontos_turisticos);
	
	printf("CARTA 2: \n");
	// Estado da carta 2
	printf("Digite o estado da cidade: \n");
	scanf(" %s", &estado1);
	
	// ID da carta 2
	printf("Digite o código da carta: \n");
	scanf("%d", &id_carta1);
	
	// Nome da cidade da carta 2
	printf("Digite o nome da cidade: (Sem espaços)\n");
	scanf("%s", &cidade1);
	
	// População da carta 2
	printf("Digite o tamanho da população da cidade: \n");
	scanf("%d", &populacao1);
	
	// Tamanho da area da carta 2
	printf("Digite o tamanho da àrea em km²: \n");
	scanf("%f", &area1);
	
	// PIB da carta 2
	printf("Digite o PIB da cidade: \n");
	scanf("%f", &pib1);
	
	// Numero de pontos turísticos da carta 2
	printf("Digite a quantidade de pontos turísticos da cidade: \n");
	scanf("%d", &pontos_turisticos1);
	
	//Calculo da densidade populacional
	densidade_populacional = populacao / area;
	densidade_populacional1 = populacao1 / area1;

	//Calculo PIB per capita
	pib_capita = pib / (float) populacao;
	pib_capita1 = pib1 / (float) populacao1;
	
	//Calculo dos Super poderes
	float super_poder = populacao + area + pib + pontos_turisticos + pib_capita + (1.0 / densidade_populacional);
	float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_capita1 + (1.0 / densidade_populacional1);
	
	// Exibindo as informações da carta 1 na tela
	printf("*** ATRIBUTOS DA CARTA 1 ***\n");
	printf("Estado: %s\n", estado);
	printf("Código: %s%d\n", estado, id_carta);
	printf("Nome da cidade: %s\n", cidade);
	printf("População: %d\n", populacao);
	printf("Àrea (em km²): %f\n", area);
	printf("PIB: %f\n", pib);
	printf("Número de pontos turísticos: %d\n", pontos_turisticos);
	printf("Densidade populacional: %f hab/km²\n", densidade_populacional);
	printf("PIB per capita: %e reais", pib_capita);
	
	// Exibindo as informações da carta 2 na tela
	printf("*** ATRIBUTOS DA CARTA 2 ***\n");
	printf("Estado: %s\n", estado1);
	printf("Código: %s%d\n", estado1, id_carta1);
	printf("Nome da cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Àrea (em km²): %f\n", area1);
	printf("PIB: %f\n", pib1);
	printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
	printf("Densidade populacional: %f hab/km²\n", densidade_populacional1);
	printf("PIB per capita: %e reais", pib_capita1);
	
	//Comparação das cartas
	printf("==== Comparação das cartas: \n ====");
	printf("População: Carta 1 venceu (%d)\n", populacao > populacao1);
	printf("Àrea: Carta 1 venceu (%d)\n", area > area1);
	printf("PIB: Carta 1 venceu (%d)\n", pib > pib1);
	printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontos_turisticos > pontos_turisticos1);
	printf("Densidade populacional: Carta 1 venceu (%d)\n", densidade_populacional < densidade_populacional1);
	printf("Densidade populacional: Carta 1 venceu (%d)\n", pib_capita > pib_capita);
	printf("Super Poder: Carta 1 venceu (%d)\n", super_poder > super_poder1);
	
	// Comparando as cartas com if else: desafio novato
	printf("==== Comparação de Cartas (Atributo: PIB): ====\n");
	if (pib > pib1){
		printf("O PIB de %s é %.2f\n", cidade, pib);
		printf("%s venceu!\n", cidade);
	}
	else{
		printf("O PIB de %s é %.2f\n", cidade1, pib1);
		printf("%s venceu!\n", cidade1);
	}
}