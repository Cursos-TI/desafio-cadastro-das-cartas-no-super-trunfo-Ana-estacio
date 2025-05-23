#include <stdio.h>

int main() {
  
  printf("Carta1: \n");

    char estado1;
    char codigo1[4];//para "A01"+caracteristica numerica´0`
    char cidade1[50];//espaço para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontturisticos1;
    float densidadepopulacao1;
    float pibpercapita1;
    float densidadepopulacao1= populacao1/ area1;
    float pibpercapita1= pib1/ populacao1;

    printf("digite o estado1 (A-H): \n " );
    scanf( " %c", &estado1 );

    printf("digite o codigo1 (A01): \n " );
    scanf(" %s", codigo1);

    printf("didgite nome da cidade1: \n " );
    scanf(" %[^\n]", cidade1 );

    printf("digite o numero de populacao1: \n " );
    scanf(" %d", &populacao1 );

    printf("digite a area1(em Km²): \n " );
    scanf(" %f", &area1 );

    printf("digite pib1(em reais): \n " );
    scanf(" %f", &pib1);

    printf("digite pontturisticos1: \n " );
    scanf(" %d", &pontturisticos1);
   
    //informação carta1
    
    printf("\n---dados da carta1");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n",area1);
    printf("Pib: %.2f\n", pib1);
    printf("Ponto Turistico: %d\n", pontturisticos1);
    printf("Densidade Poulacional: %.2f\n", densidadepopulacao1);
    printf("Pib per Capita: R$ %.2f\n", pibpercapita1);
   
    printf("Carta2: \n" );

    char estado2;
    char codigo2[4];//para "A01"+caracteristica numerica´0`
    char cidade2[50];//espaço para o nome da cidade
    int populacao2;
    float area2;
    float pib2;
    int pontturisticos2;
    float desitadepopulacao2;
    float pibpercapita2;
    float densidadepopulacao2= populacao2/ area2;
    float pibpercapita2= pib2/ populacao2;
    
    printf("digite o estado2 (A-H): \n " );
    scanf( " %c", &estado2 );

    printf("digite o codigo2 (A01): \n " );
    scanf(" %s", codigo2);

    printf("didgite nome da cidade2: \n " );
    scanf(" %[^\n]", cidade2 );

    printf("digite o numero de populacao2: \n " );
    scanf(" %d", &populacao2 );

    printf("digite a area2(em Km²): \n " );
    scanf(" %f", &area2 );

    printf("digite pib2(em reais): \n " );
    scanf(" %f", &pib2);

    printf("digite pontturisticos2: \n " );
    scanf(" %d", &pontturisticos2);
   
    printf("densidadepopulacao2.: %f. \n, area2");
    scanf( "=densidadepopulacao2/area2" );

    printf("pib1. : %.2f. \n ,populacao2 " );
    scanf("=pibpercapita2 ");

   // informação carta2
    printf("\n---dados da carta1");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n",area1);
    printf("Pib: %.2f\n", pib1);
    printf("Ponto Turistico: %d\n", pontturisticos1);
    printf("Densidade Poulacional: %.2f\n", densidadepopulacao1);
    printf("Pib per Capita: R$ %.2f\n", pibpercapita1);

    return 0;
}