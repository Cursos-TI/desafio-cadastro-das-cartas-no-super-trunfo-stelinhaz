#include <stdio.h>

int main(){

char estado[2];
char codigo[5], cidade[20];
int população;
float área;
float pib;
int pontos;

printf("Carta 1: \n");

printf("Estado: ");
scanf("%1s", estado);
printf("Estado: %s\n", estado);

printf("Código: ");
scanf("%s", codigo);
printf("Código: %s\n", codigo);

printf("Nome da Cidade: ");
scanf("%s", cidade);
printf("Nome da Cidade: %s\n", cidade);

printf("População: ");
scanf("%d", &população);
printf("População: %d\n", população);

printf("Área: ");
scanf("%f", &área);
printf("Área: %.2f km²\n", área);

printf("PIB: ");
scanf("%f", &pib);
printf("PIB: %.2f Bilhões de Reais\n", pib);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos);
printf("Número de pontos turísticos: %d\n", pontos);


printf("Carta 2: \n");

printf("Estado: ");
scanf("%1s", estado);
printf("Estado: %s\n", estado);

printf("Código: ");
scanf("%s", codigo);
printf("Código: %s\n", codigo);

printf("Nome da Cidade: ");
scanf("%s", cidade);
printf("Nome da Cidade: %s\n", cidade);

printf("População: ");
scanf("%d", &população);
printf("População: %d\n", população);

printf("Área: ");
scanf("%f", &área);
printf("Área: %.2f km²\n", área);

printf("PIB: ");
scanf("%f", &pib);
printf("PIB: %.2f Bilhões de Reais\n", pib);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos);
printf("Número de pontos turísticos: %d\n", pontos);

return 0;

}