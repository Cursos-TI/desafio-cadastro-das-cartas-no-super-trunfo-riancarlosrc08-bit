#include <stdio.h>
#include <string.h>


int main (){
    /*Abaixo esta as variaveis usadas para a carta */
    char estado, estado2;
    char carta[3], carta2[3];
    char cidade[30], cidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turistico, turistico2;
    float densidade, densidade2;
    float pibpc, pibpc2;
    float superpoder, superpoder2;

    //variaveis para comparação das cartas

    char resultadoPopulacao, resultadoPib, resultadoArea, resultadoTuristico;
    char resultadoDensidade, resultadoPibpc, resultadoSuperpoder;
    
   
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
    scanf("%lu", &populacao);    

    printf("Digite a area de sua Primeira Carta: \n");  
    scanf("%f", &area);

    printf("Digite o pib de sua Primeira Carta: \n");  
    scanf("%f", &pib);  

    printf("Digite numero de pontos turistico de sua cidade:\n");  
    scanf("%d", &turistico);

    densidade = (float) populacao / area; 
    pibpc = (float) pib / populacao;
    superpoder = (float) populacao + pib + area + turistico + (-densidade) + pibpc;
    
    //RESUMO DA CARTA 1

    printf("\nAbaixo o Resumo da sua carta\n");
    printf("\nCarta 01\n\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado,carta);  
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Numero de Pontos Turisticos: %d\n", turistico);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpc);
    printf("Super Poder da Carta: %.2f\n", superpoder);

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
    scanf("%lu", &populacao2);    

    printf("Digite a area de sua Segunda Carta: \n");  
    scanf("%f", &area2);

    printf("Digite o pib de sua Segunda Carta: \n");  
    scanf("%f", &pib2);  

    printf("Digite numero de pontos turistico de sua cidade:\n");  
    scanf("%d", &turistico2);

    densidade2 = (float) populacao2 / area2;
    pibpc2 = (float) pib2 / populacao2;
    superpoder2 = (float) populacao2 + pib2 + area2 + turistico2 + (-densidade2) + pibpc2;
    

//RESUMO DA CARTA 2

    printf("\nAbaixo o Resumo da sua carta\n");
    printf("\nCarta 02\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n",estado2,carta2);  
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Area: %.2f km2\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder da Carta: %.2f\n", superpoder2);

//COMPARAÇÃO DAS CARTAS 

    printf("\n*****Agora vamos comparar as cartas*****\n\n");

    printf("População: Carta %s venceu (%s)\n", 
           (populacao > populacao2) ? carta : carta2, 
           (populacao > populacao2) ? "1" : "0");
           //Usei o operador ternário para determinar qual carta venceu em cada comparação.

    printf("PIB: Carta %s venceu (%s)\n", 
           (pib > pib2) ? carta : carta2, 
           (pib > pib2) ? "1" : "0");
           //Usei o operador ternário para determinar qual carta venceu em cada comparação.

    printf("Área: Carta %s venceu (%s)\n", 
           (area > area2) ? carta : carta2, 
           (area > area2) ? "1" : "0");
            //Usei o operador ternário para determinar qual carta venceu em cada comparação.


    printf("Número de Pontos Turísticos: Carta %s venceu (%s)\n", 
           (turistico > turistico2) ? carta : carta2,  
           (turistico > turistico2) ? "1" : "0");
            //Usei o operador ternário para determinar qual carta venceu em cada comparação.

    printf("Densidade Demográfica:Carta %s venceu (%s)\n", 
           (densidade < densidade2) ? carta : carta2,  
           (densidade < densidade2) ? "1" : "0");
            //Usei o operador ternário para determinar qual carta venceu em cada comparação.
    printf("PIB per Capita: Carta %s venceu (%s)\n", 
           (pibpc > pibpc2) ? carta : carta2, 
           (pibpc > pibpc2) ? "1" : "0");
            //Usei o operador ternário para determinar qual carta venceu em cada comparação.
    printf("Super Poder da Carta: Carta %s venceu (%s) \n", 
           (superpoder > superpoder2) ? carta : carta2,
           (superpoder > superpoder2) ? "1" : "0");
            //Usei o operador ternário para determinar qual carta venceu em cada comparação.

/*
//USADO PARA TESTES

    printf("\nAgora vamos comparar as cartas\n\n");
    printf("\nCarta 01\n\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado,carta);  
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Numero de Pontos Turisticos: %d\n", turistico);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibpc);


    printf("\n\nCarta 02\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n",estado2,carta2);  
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Area: %.2f km2\n", area2);
    printf("Numero de Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibpc2);

*/





//AGRADECIMENTO POR JOGAR O JOGO

    printf("\n ****** Obrigado por jogar nosso jogo de cartas Super Trunfo ******\n");

return 0;

}

 