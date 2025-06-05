#include <stdio.h> 
int main(){

    int populacao;
    int pontos turisticos [10];
    float area [20]; 
    float pib;
    char estado [2];
    char cidade [4];


    printf("digte seu estado: \n ");
    scanf("%s", estado);

    printf("digte sua cidade: \n ");
    scanf("%s", cidade);

    printf("digite os pontos turisticos: \n ");
    scanf("%d", &pontos turisticos);

    printf("digite a area: \n ");
    scanf("%f", &area);

    printf("digite o pib: \n ");
    scanf("%f", &pib);

    printf("digite a populacao: \n ");
    scanf("%d", &populacao);

    printf("carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Pontos turisticos: %d\n", pontos turisticos);
    printf("Area: %.2f\n", area[0]);
    printf("pib: %f\n", pib);
    printf("Populacao: %d\n", populacao);







    return 0;
}
