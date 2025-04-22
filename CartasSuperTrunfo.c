#include <stdio.h>

int main() {
    // Váriavéis da Primeira Carta
    char estadoa; 
    char codigodacartaa[10];
    char nomedacidadea[50];
    unsigned long int populacaoa;  
    float areaa;
    float piba; 
    int pontosturisticosa;


    // Váriavéis da Segunda Carta
    char estadob;
    char codigodacartab[10];
    char nomedacidadeb[50];
    unsigned long int populacaob;  
    float areab;
    float pibb; 
    int pontosturisticosb;


    // Entradas da Primeira Carta
    printf("\nDigite os dados da Primeira Carta:\n");

    printf("Estado (letra de A a H): "); // Pergunta ao Usuário
    scanf(" %c", &estadoa); // Armazena a Váriavel
    getchar(); // Limpa o Enter

    printf("Código da Carta (ex: A01): ");
    fgets(codigodacartaa, sizeof(codigodacartaa), stdin);

    printf("Nome da Cidade: ");
    fgets(nomedacidadea, sizeof(nomedacidadea), stdin);

    printf("População: ");
    scanf("%lu", &populacaoa);

    getchar();
    printf("Área (em km²): ");
    scanf("%f", &areaa);

    getchar();
    printf("PIB (em bilhões): ");
    scanf("%f", &piba);

    getchar();
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticosa);

    float densidadepopa = populacaoa/areaa; // Divide a População da Primeira Carta pela Area da Primeira Carta
    float pibpercapa = (piba * 1000000000) / populacaoa; // Multiplica o PIB da Primeira Carta por 1000000000 e Divide pela População da Primeira Carta

    getchar();
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopa);

    printf("PIB per capita: %.2f reais\n", pibpercapa);


    // Entradas da Segunda Carta
    printf("\nDigite os dados da Segunda Carta:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estadob);

    getchar(); // Limpa o Enter
    printf("Código da Carta (ex: A01): ");
    fgets(codigodacartab, sizeof(codigodacartab), stdin);

  
    printf("Nome da Cidade: ");
    fgets(nomedacidadeb, sizeof(nomedacidadeb), stdin);

    printf("População: ");
    scanf("%lu", &populacaob);

    getchar();
    printf("Área (em km²): ");
    scanf("%f", &areab);

    getchar();
    printf("PIB (em bilhões): ");
    scanf("%f", &pibb);

    getchar();
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticosb);

    float densidadepopb = populacaob / areab; // Divide a População da Segunda Carta pela Area da Primeira Carta
    float pibpercapb = (pibb * 1000000000) / populacaob; // Multiplica o PIB da Segunda Carta por 1000000000 e Divide pela População da Primeira Carta

    getchar();
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopb);

    printf("PIB per capita: %.2f reais\n ", pibpercapb);
    
    float superpodera = (float)populacaoa + areaa + (piba * 1000000000) + pontosturisticosa + pibpercapa + (1 / densidadepopa);  //Calcula os Resultados das Váriaveis da Primeira Carta para a Comparação
    float superpoderb = (float)populacaob + areab + (pibb * 1000000000) + pontosturisticosb + pibpercapb + (1 / densidadepopb);  //Calcula os Resultados das Váriaveis da Segunda Carta para a Comparação


    // Compara os Resultados das Váriaveis da Primeira Carta e da Segunda Carta
    printf("\nComparação de Cartas:\n");  

    printf("População: Carta %d venceu %s\n", populacaoa > populacaob ? 1 : 2, populacaoa > populacaob ? "(1)" : "(2)");
    printf("Área: Carta %d venceu %s\n", areaa > areab ? 1 : 2, areaa > areab ? "(1)" : "(2)"); 
    printf("PIB: Carta %d venceu %s\n", piba > pibb ? 1 : 2, piba > pibb ? "(1)" : "(2)");
    printf("Pontos Turísticos: Carta %d venceu %s\n", pontosturisticosa > pontosturisticosb ? 1 : 2, pontosturisticosa > pontosturisticosb ? "(1)" : "(2)");
    printf("Densidade Populacional: Carta %d venceu %s\n", densidadepopa < densidadepopb ? 1 : 2, densidadepopa < densidadepopb ? "(1)" : "(2)");
    printf("PIB per Capita: Carta %d venceu %s\n", pibpercapa > pibpercapb ? 1 : 2, pibpercapa > pibpercapb ? "(1)" : "(2)");
    printf("Super Poder: Carta %d venceu %s\n", superpodera > superpoderb ? 1 : 2, superpodera > superpoderb ? "(1)" : "(2)");


    return 0;
}
