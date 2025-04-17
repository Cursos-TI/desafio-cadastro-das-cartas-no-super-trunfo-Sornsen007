#include <stdio.h>


int main() {



printf("Provocando a existência do xadrez!\n");

printf("commint\n");



char estado;

char codigo[3];

char cidade[100];

int populacao;

float area;

float pib;

int turisticos[2];

/* Criei os printf, para printar na tela as perguntas ao usuário.
Também criei as scanf, para pedir ao usuário que responda as perguntas do printf criado e assim 
adicione os dados da sua carta. */

printf("Indique á letra do estado:\n");
scanf("%c", &estado);

printf("Digite o Código da carta, sua letra do estado, seguida de dois números: \n ");
scanf("%s", &codigo);

printf("Digite o nome da sua cidade: \n");
scanf("%s", &cidade);

printf("Qual o número da população da sua cidade: \n");
scanf("%i", &populacao);

printf("Qual a distância por km² da sua cidade: \n");
scanf("%f", &area );

printf("Qual o PIB da sua cidade: \n");
scanf("%f", &pib);
 
printf("Qual a quantidade de pontos turistiscos que á em sua cidade: \n");
scanf("%i", &turisticos);


/*Aqui criei as printf para retornar os dados que solicitei ao usuário, através das scanf. Utilizei
também os especificadores para retornar os dados. */

printf(" A estado selecionado é: %c \n \n O código da cidade é:  %s \n \n O nome da sua cidade é: %s \n \n A quantidade de habitantes é: %i \n", estado, codigo, cidade, populacao);

printf("\n A distância por km² é: %2f \n \n O pib da sua cidade é: %f \n \n Os pontos turisticos da sua cidade é: %i ", area, pib, turisticos);


return 0;




}