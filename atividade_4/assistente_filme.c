#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
int opcao;

printf("\tASSISTENTE CINEFILO\n");
system("pause");
printf("\tQual tipo de filme deseja assistir?\n");
printf("1. Filmes Leves\n");
printf("2. Filmes Intensos\n");

scanf("%d", &opcao);
if(opcao == 1){
    printf("\tFilmes Leves\n");
    printf("Escolha um genero: \n");
    printf("1. Animacao\n");
    printf("2. Comedia\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("\tANIMACAO\n");
        printf("Assita a TOY STORY!\n");
        system("pause");

    }
    if(opcao == 2){
        printf("\tCOMEDIA\n");
        printf("Assista a AS BRANQUELAS!\n");
        system("pause");
    }
}

if(opcao == 2){
    printf("\tFilmes Intensos\n");
    printf("Escolha um genero: \n");
    printf("1. Terror\n");
    printf("2. Acao\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("\tTERROR\n");
        printf("Qual tipo de Terror?\n");
        printf("1. Terror Psicologico\n");
        printf("2. Terror Sobrenatural\n");
        scanf("%d", &opcao);
      if(opcao == 1){
        printf("\tTerror Psicologico\n");
        printf("Assista a CORRA!\n");
        system("pause");
        } 
      if(opcao == 2){
        printf("\tTerror Sobrenatural\n");
        printf("Assista a INVOCACAO DO MAL!\n");
        system("pause");

      }
     }  
    if(opcao == 2){
        printf("\tACAO\n");
        printf("Qual tipo de Acao?\n");
        printf("1. Super Herois\n");
        printf("2. Aventura Realista\n");
    scanf("%d", &opcao);
        if(opcao == 1){
        printf("\tSuper Herois\n");
        printf("Assista a VINGADORES ULTIMATO!\n");
        system("pause");
        } 
      if(opcao == 2){
        printf("\tAventura Realista\n");
        printf("Assista a MAD MAX: ESTRADA DA FURIA!\n");
        system("pause");
    }
    
 }
}

    return 0;
}