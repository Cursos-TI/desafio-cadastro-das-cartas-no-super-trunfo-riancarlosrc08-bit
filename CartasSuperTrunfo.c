#include <stdio.h>
#include <string.h>


int main (){
    /*Abaixo esta as variaveis usadas para a carta */
    char estado, estado2;
    char carta[3], carta2[3];
    char cidade[30], cidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turistico, turistico2;
    float densidade, densidade2;
    float pibpc, pibpc2;
   
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

    densidade = (float) populacao / area; 
    pibpc = (float) pib / populacao;
    
    //RESUMO DA CARTA 1

    printf("\nAbaixo o Resumo da sua carta\n");
    printf("\nCarta 01\n\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado,carta);  
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Numero de Pontos Turisticos: %d\n", turistico);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpc);

    // SOLICITANDO OS DADOS DA SEGUNDA CARTA

    printf("\nAgora vamos para os dados de sua segunda carta:\n\n");

     printf("Digite o estado de sua Segunda Carta (A-H)): \n");
    scanf(" %c", &estado2);

     printf("Digite o codigo de sua Segunda Carta (Somente numero) : \n");
    scanf("%s", carta2);

    printf("Digite a cidade de sua Segunda Carta: \n");
    getchar();  // Limpa o buffer
    fgets(cidade2, sizeof(cidade2), stdin); // Lê a cidade, permitindo espaços
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha

    // getchar();  // Limpa o buffer

    printf("Digite a populacao de sua Segunda Carta: \n");
    scanf("%d", &populacao2);    

    printf("Digite a area de sua Segunda Carta: \n");  
    scanf("%f", &area2);

    printf("Digite o pib de sua Segunda Carta: \n");  
    scanf("%f", &pib2);  

    printf("Digite numero de pontos turistico de sua cidade:\n");  
    scanf("%d", &turistico2);

    densidade2 = (float) populacao2 / area2;
    pibpc2 = (float) pib2 / populacao2;

//RESUMO DA CARTA 2

    printf("\nAbaixo o Resumo da sua carta\n");
    printf("\nCarta 02\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n",estado2,carta2);  
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Area: %.2f km2\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

//COMPARAÇÃO DAS CARTAS 

    printf("\nAgora vamos comparar as cartas\n\n");
    printf("\nCarta 01\n\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado,carta);  
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Numero de Pontos Turisticos: %d\n", turistico);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibpc);


    printf("\n\nCarta 02\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n",estado2,carta2);  
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Area: %.2f km2\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibpc2);







//AGRADECIMENTO POR JOGAR O JOGO
    printf("\n ****** Obrigado por jogar nosso jogo de cartas Super Trunfo ******\n");

return 0;

}

 