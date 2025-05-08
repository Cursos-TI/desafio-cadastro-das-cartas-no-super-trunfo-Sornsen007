#include <stdio.h>


int main() {



printf("Provocando a existência do xadrez!\n");

printf("commint\n");

double soma, subtracao, multiplicacao, divisao;

float resultadodadivisao; 


char estado;

char codigo[100];

char cidade[100];

int populacao;

float area;

float pib;

int turistico;

 



/* Criei os printf, para printar na tela as perguntas ao usuário.
Também criei as scanf, para pedir ao usuário que responda as perguntas do printf criado e assim 
adicione os dados da sua carta. */

printf("\n\nIndique á letra do estado:\n");
scanf("%c", &estado);

printf("\n\nDigite o Código da carta, sua letra do estado, seguida de dois números: \n\n ");
scanf("%s", &codigo);

printf("\n\nDigite o nome da sua cidade: \n");
scanf("%s", &cidade);

printf("\n\nQual o número da população da sua cidade: \n");
scanf("%d", &populacao);

printf("\n\nQual a distância por km² da sua cidade: \n");
scanf("%f", &area );

printf("\n\nQual o PIB da sua cidade: \n");
scanf("%f", &pib);
 
printf("\n\nQual a quantidade de pontos turistiscos que á em sua cidade: \n");
scanf("%d", &turistico);

resultadodadivisao =  populacao / pib;

divisao =  populacao / area;

/*Aqui criei as printf para retornar os dados que solicitei ao usuário, através das scanf. Utilizei
também os especificadores para retornar os dados. */

printf("A letra do estado selecionado é: %c \n O código da cidade é:  %s \n O nome da sua cidade é: %s \n \n A quantidade de habitantes é: %d \n", estado, codigo, cidade, populacao);
printf(" A distância por km² é: %2f km² \n \n O pib da sua cidade é: %f \n \n Os pontos turisticos da sua cidade é: \n %i \n", area, pib, turistico);
printf(" O número de habitantes por km² é: %e  \n", divisao); 
printf(" \n A renda percapita por pessoa da sua cidade é: %f \n ", resultadodadivisao);






printf(" \n ***Ola bem vindo ao jogo Triunfo7*** \n");
printf(" \n Adicione a sua segunda carta ao jogo! \n ");

//Aqui se refere ao estado
char regiao;

//Aqui se refere ao código
char cep[100];

//Aqui se refere a cidade
char municipio[100];

//Aqui se refere a população
int habitantes;

//Aqui se refere a area
float areakm;

//Aqui se refere ao pib
float produtointernobruto;

//Aqui se refere ao pontos turísticos
int pontosturisticos;

float quociente ;

double resultadodacisao;






printf("\n\n Indique á letra do estado:\n");
scanf("%s", &regiao);

printf("\n\nDigite o Código da carta, sua letra do estado, seguida de dois números:  \n");
scanf("%s", &cep);

printf("\n\nDigite o nome da sua cidade: \n");
scanf("%s", &municipio);

printf("\n\nQual o número da população da sua cidade: \n");
scanf("%d", &habitantes);

printf("\n\nQual a distância por km² da sua cidade: \n");
scanf("%f", &areakm );

printf("\n\nQual o PIB da sua cidade: \n");
scanf("%f", &produtointernobruto);
 
printf("\n\nQual a quantidade de pontos turistiscos que á em sua cidade: \n");
scanf("%d", &pontosturisticos);


resultadodacisao = habitantes / produtointernobruto;

quociente = habitantes / areakm;

/*Aqui criei as printf para retornar os dados que solicitei ao usuário, através das scanf. Utilizei
também os especificadores para retornar os dados. */

printf("\n A letra do estado selecionado é: %c \n \n O código da cidade é:  %s \n \n O nome da sua cidade é: %s \n \n A quantidade de habitantes é: %d \n\n", regiao, cep, municipio, habitantes);
printf("\n A distância por km² é: %2f km² \n \n O pib da sua cidade é: %f \n \n Os pontos turisticos da sua cidade é: \n\n %i \n\n", areakm, produtointernobruto, pontosturisticos);
printf("\n O número de habitantes por km² é: %f  \n", quociente); 
printf(" \n A renda percapita por pessoa da sua cidade é: %e \n ", resultadodacisao);


/* Utilizei a palavra chave if para comparar os valores armazenados nas variáveis: população e habitantes; e 
ver se o valor eram iguais. */
if(populacao == habitantes){
printf(" \n A população da carta 01: %c %s %d é igual a carta 02: %c %s %d! \n ", estado, cidade, populacao, regiao, municipio, habitantes);

/* Useia a palavra chave else if para verificar se á variável população é menor do que a variável habitantes,
 e se for, a de maior valor vence!*/
}else if(populacao < habitantes){
 printf( " \n A população da carta 01: %c %s %d é menor que a  população da carta 02: %c %s  %d! \n PARABÉNS A CARTA 02 É A VENCEDORA! \n ", estado, cidade, populacao, regiao, municipio, habitantes);

 
 /*Aqui usei a palavra chave else para trazer a última verificação, em que se
 a variável população, não for igual, nem menor, que habitantes ela é maior que a segunda variável.
  Se a variável população for maior do que a variável habitantes, é  printado na tela que ela é a vencedora*/

}else{
    printf(" \n A população da carta 01: %c %s %d é maior que a população da carta 02: %c %s %d ! \n A CARTA NÚMERO 1: %c %s %d FOI A VENCEDORA! \n ", estado, cidade, populacao, regiao, municipio, habitantes);
}




return 0;



}