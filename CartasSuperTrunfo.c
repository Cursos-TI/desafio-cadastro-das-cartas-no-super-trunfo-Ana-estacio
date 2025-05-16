#include <stdio.h>

int main() {

  #include <stdio.h>

    char estado1;
    char codigo1[4];//para "A01"+caracteristica numerica´0`
    char cidade1[50];//espaço para o nome da cidade
    int Populacao1;
    float area1;
    float pib1;
    int numeroturisticos1;
    float desidadepopulacao1;
    float pibpercapita1;

    printf("digite o estado1 (A-H): \n ");
    scanf( " %c", &estado1 );

    printf("digite o codigo1 (A01): \n ");
    scanf("%s", codigo1);

    printf("didgite nome da cidade1: \n ");
    scanf("%c", cidade1 );

    printf("digite o numero de Populacao1: \n " );
    scanf("%d", &Populacao1 );

    printf("digite a area1: \n ");
    scanf("%.2f", &area1);

    printf("digite pib1: \n ");
    scanf("%.2f", &pib1);

    printf("digite numeroturisticos1: \n ");
    scanf("%d", &numeroturisticos1);

    printf("digite valor populacao1/area1: \n ");
    scanf("%.2f", desidadepopulacao1 );

    printf("digite valor pib1/populacao1: \n ");
    scanf("%.2f",pibpercapita1 );
    

    char estado2;
    char codigo2[4];//para "A01"+caracteristica numerica´0`
    char cidade2[50];//espaço para o nome da cidade
    int Populacao2;
    float area2;
    float pib2;
    int numeroturisticos2;
    float desitadepopulacao2;
    float pibpercapita2;
    
    printf("digite o estado2 (A-H): \n ");
    scanf( " %c", &estado2 );

    printf("digite o codigo2 (A01): \n ");
    scanf("%s", codigo2);

    printf("didgite nome da cidade2: \n ");
    scanf("%c",&cidade2 );

    printf("digite o numero de Populacao2: \n " );
    scanf("%.2f",&Populacao2);

    printf("digite a area2: \n ");
    scanf("%.2f", &area2);

    printf("digite pib2: \n ");
    scanf("%.2f", &pib2);

    printf("digite numeroturisticos2: \n ");
    scanf("%d", &numeroturisticos2);

    printf("digite valor populacao2/area2: \n ");
    scanf("%.2f",desitadepopulacao2 );

    printf("digite valor pib2/populacao2: \n ");
    scanf("%.2f",pibpercapita2 );

    return 0;
}
