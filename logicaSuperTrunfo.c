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
	
	printf("### CARTA 1 ###\n");
	// Estado da carta 1
	printf("Digite o estado da cidade: ");
	scanf("%s", &estado);
	printf("----------------------------------------------------\n");
	
	// ID da carta 1
	printf("\nDigite o código da carta: ");
	scanf("%d", &id_carta);
	printf("----------------------------------------------------\n");
	
	// Nome da cidade da carta 1
	printf("\nDigite o nome da cidade (Sem espaços): ");
	scanf("%s", &cidade);
	printf("----------------------------------------------------\n");
	
	// População da carta 1
	printf("\nDigite o tamanho da população da cidade: ");
	scanf("%d", &populacao);
	printf("----------------------------------------------------\n");
	
	// Tamanho da area da carta 1
	printf("\nDigite o tamanho da àrea em km²: ");
	scanf("%f", &area);
	printf("----------------------------------------------------\n");
	
	// PIB da carta 1
	printf("\nDigite o PIB da cidade: ");
	scanf("%f", &pib);
	printf("----------------------------------------------------\n");
	
	// Numero de pontos turísticos da carta 1
	printf("\nDigite a quantidade de pontos turísticos da cidade: \n");
	scanf("%d", &pontos_turisticos);
	printf("----------------------------------------------------\n");
	
	printf("### CARTA 2 ###\n");
	// Estado da carta 2
	printf("\nDigite o estado da cidade: ");
	scanf(" %s", &estado1);
	printf("----------------------------------------------------\n");
	
	// ID da carta 2
	printf("\nDigite o código da carta: ");
	scanf("%d", &id_carta1);
	printf("----------------------------------------------------\n");
	
	// Nome da cidade da carta 2
	printf("\nDigite o nome da cidade (Sem espaços): ");
	scanf("%s", &cidade1);
	printf("----------------------------------------------------\n");
	
	// População da carta 2
	printf("\nDigite o tamanho da população da cidade: ");
	scanf("%d", &populacao1);
	printf("----------------------------------------------------\n");
	
	// Tamanho da area da carta 2
	printf("\nDigite o tamanho da àrea em km²: ");
	scanf("%f", &area1);
	printf("----------------------------------------------------\n");
	
	// PIB da carta 2
	printf("\nDigite o PIB da cidade: \n");
	scanf("%f", &pib1);
	printf("----------------------------------------------------\n");
	
	// Numero de pontos turísticos da carta 2
	printf("\nDigite a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos1);
	printf("----------------------------------------------------\n");
	
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
	printf("Àrea (em km²): %.2f\n", area);
	printf("PIB: %.2f\n", pib);
	printf("Número de pontos turísticos: %d\n", pontos_turisticos);
	printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
	printf("PIB per capita: %.2e reais\n", pib_capita);
	printf("----------------------------------------------------\n");
	
	// Exibindo as informações da carta 2 na tela
	printf("*** ATRIBUTOS DA CARTA 2 ***\n");
	printf("Estado: %s\n", estado1);
	printf("Código: %s%d\n", estado1, id_carta1);
	printf("Nome da cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Àrea (em km²): %.2f\n", area1);
	printf("PIB: %.2f\n", pib1);
	printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
	printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
	printf("PIB per capita: %.2e reais\n", pib_capita1);
	printf("----------------------------------------------------\n");
	
	int atributo1, atributo2;
	float valor1_carta1 = 0, valor1_carta2 = 0;
	float valor2_carta1 = 0, valor2_carta2 = 0;
	
	printf("Escolha o atributo que você quer comparar: \n");
	printf("[1] - População.\n");
	printf("[2] - Àrea.\n");
	printf("[3] - PIB.\n");
	printf("[4] - Número de pontos turísticos.\n");
	printf("[5] - Densidade populacional.\n");
	scanf("%d", &atributo1);
	
	switch (atributo1){
		case 1:
			printf("----------------------------------------------------\n");
			printf("Escolha o segundo atributo que você quer comparar: \n");
			printf("[2] - Àrea.\n");
			printf("[3] - PIB.\n");
			printf("[4] - Número de pontos turísticos.\n");
			printf("[5] - Densidade populacional.\n");
		break;
		case 2:
			printf("----------------------------------------------------\n");
			printf("Escolha o segundo atributo que você quer comparar: \n");
			printf("[1] - População.\n");
			printf("[3] - PIB.\n");
			printf("[4] - Número de pontos turísticos.\n");
			printf("[5] - Densidade populacional.\n");	
		break;
		case 3:
			printf("----------------------------------------------------\n");
			printf("Escolha o segundo atributo que você quer comparar: \n");
			printf("[1] - População.\n");
			printf("[2] - Àrea.\n");
			printf("[4] - Número de pontos turísticos.\n");
			printf("[5] - Densidade populacional.\n");	
		break;
		case 4:
			printf("----------------------------------------------------\n");
			printf("Escolha o segundo atributo que você quer comparar: \n");
			printf("[1] - População.\n");
			printf("[2] - Àrea.\n");
			printf("[3] - PIB.\n");
			printf("[5] - Densidade populacional.\n");
		break;
		case 5:
			printf("----------------------------------------------------\n");
			printf("Escolha o segundo atributo que você quer comparar: \n");
			printf("[1] - População.\n");
			printf("[2] - Àrea.\n");
			printf("[3] - PIB.\n");
			printf("[4] - Número de pontos turísticos.\n");
		break;
		default:
			printf("Opção inválida.\n");
	}
	scanf("%d", &atributo2);
	
	switch(atributo1){
		case 1:
			valor1_carta1 = populacao;
			valor1_carta2 = populacao1;
		break;
		case 2:
			valor1_carta1 = area;
			valor1_carta2 = area1;
		break;
		case 3: 
			valor1_carta1 = pib;
			valor1_carta2 = pib1;
		break;
		case 4:
			valor1_carta1 = pontos_turisticos;
			valor1_carta2 = pontos_turisticos1;
		break;
		case 5:
			valor1_carta1 = densidade_populacional;
			valor1_carta2 = densidade_populacional1;
		break;	
	}
	
	switch(atributo2){
		case 1:
			valor2_carta1 = populacao;
			valor2_carta2 = populacao1;
		break;
		case 2:
			valor2_carta1 = area;
			valor2_carta2 = area1;
		break;
		case 3:
			valor2_carta1 = pib;
			valor2_carta2 = pib1;
		break;
		case 4:
			valor2_carta1 = pontos_turisticos;
			valor2_carta2 = pontos_turisticos1;
		break;
		case 5:
			valor2_carta1 = densidade_populacional;
			valor2_carta2 = densidade_populacional1;
		break;
	}
	
	int vitoria_atributo1 = 0;
	int vitoria_atributo2 = 0;
	
	if (atributo1 == 5){
		if (valor1_carta1 < valor1_carta2){
			vitoria_atributo1 = 1;
		}else if(valor1_carta1 < valor1_carta2){
			vitoria_atributo1 = 2;
		}
	}
	
	if (atributo2 == 5){
		if (valor2_carta1 < valor2_carta2){
			vitoria_atributo2 = 1;
		} else if(valor2_carta1 > valor2_carta2){
			vitoria_atributo2 = 2;
		}
	}
	
	float soma_carta1 = valor1_carta1 + valor2_carta1;
	float soma_carta2 = valor1_carta2 + valor2_carta2;
	
	printf("\n===== RESULTADO =====\n");
    printf("Carta 1 - %s:\n", cidade);
    printf("Atributo %d: %.2f\n", atributo1, valor1_carta1);
    printf("Atributo %d: %.2f\n", atributo2, valor2_carta1);
    printf("Soma: %.2f\n\n", soma_carta1);

    printf("Carta 2 - %s:\n", cidade1);
    printf("Atributo %d: %.2f\n", atributo1, valor1_carta2);
    printf("Atributo %d: %.2f\n", atributo2, valor2_carta2);
    printf("Soma: %.2f\n\n", soma_carta2);
	
	if (soma_carta1 > soma_carta2){
		printf("%s venceu!", cidade);
	} else if (soma_carta1 < soma_carta2){
		printf("%s venceu!", cidade1);
	} else{
		printf("Empate!");
	}
}