#include <stdio.h>
#include <string.h>

int main (){
    char estado;
    char carta[2];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int turistico;
/*Acima esta as variaveis usadas*/
/*Abaixo incio a solictação das informações para o usuario*/
    printf("Digite o estado de sua Primeira Carta (A-H)): \n");
    scanf(" %c", &estado);

     printf("Digite o codigo de sua Primeira Carta (Somente numero) : \n");
    scanf("%s", carta);

    printf("Digite a cidade de sua Primeira Carta: \n");
    getchar();  // Limpa o buffer
    fgets(cidade, sizeof(cidade), stdin); // Lê a cidade, permitindo espaços
    cidade[strcspn(cidade, "\n")] = 0; // Remove o caractere de nova linha

  
    printf("Digite a populacao de sua Primeira Carta: \n");
    scanf("%d", &populacao);    

    printf("Digite a area de sua Primeira Carta: \n");  
    scanf("%f", &area);

    printf("Digite o pib de sua Primeira Carta: \n");  
    scanf("%f", &pib);  

    printf("Digite numero de pontos turistico de sua cidade:\n");  
    scanf("%d", &turistico);

    printf("\nAbaixo o Resumo da sua carta\n");
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado,carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Numero de Pontos Turisticos: %d\n", turistico);



    printf("\nAgora vamos para os dados de sua segunda carta:\n");

     printf("Digite o estado de sua Segunda Carta (A-H)): \n");
    scanf(" %c", &estado);

     printf("Digite o codigo de sua Segunda Carta (Somente numero) : \n");
    scanf("%s", carta);

    printf("Digite a cidade de sua Segunda Carta: \n");
    getchar();  // Limpa o buffer
    fgets(cidade, sizeof(cidade), stdin); // Lê a cidade, permitindo espaços
    cidade[strcspn(cidade, "\n")] = 0; // Remove o caractere de nova linha

    // getchar();  // Limpa o buffer

    printf("Digite a populacao de sua Segunda Carta: \n");
    scanf("%d", &populacao);    

    printf("Digite a area de sua Segunda Carta: \n");  
    scanf("%f", &area);

    printf("Digite o pib de sua Segunda Carta: \n");  
    scanf("%f", &pib);  

    printf("Digite numero de pontos turistico de sua cidade:\n");  
    scanf("%d", &turistico);

    printf("\nAbaixo o Resumo da sua carta\n");
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado,carta);  
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Numero de Pontos Turisticos: %d\n", turistico);

return 0 

}

