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

    printf("digite o estado1 (A-H): ");
    scanf( " %c", &estado1 );

    printf("digite o codigo (A01): ");
    scanf("%s", codigo1);

    printf("didgite nome da cidade1: ");
    scanf("%c",cidade1 );

    printf("digite o numero de Populacao1: " );
    scanf("%d", Populacao1);

    printf("digite a area1: ");
    scanf("%f", area1);

    printf("digite pib1: ");
    scanf("%f", &pib1);

    printf("digite numeroturisticos1: ");
    scanf("%d", &numeroturisticos1);
    

    char estado2;
    char codigo2[4];//para "A01"+caracteristica numerica´0`
    char cidade2[50];//espaço para o nome da cidade
    int Populacao2;
    float area2;
    float pib2;
    int numeroturisticos2;
    
    printf("digite o estado2 (A-H): ");
    scanf( " %c", &estado2 );

    printf("digite o codigo (A01): ");
    scanf("%s", codigo2);

    printf("didgite nome da cidade2: ");
    scanf("%c",cidade2 );

    printf("digite o numero de Populacao2: " );
    scanf("%d", Populacao2);

    printf("digite a area2: ");
    scanf("%f", area2);

    printf("digite pib2: ");
    scanf("%f", &pib2);

    printf("digite numeroturisticos2: ");
    scanf("%d", &numeroturisticos2);

    return 0;
}
