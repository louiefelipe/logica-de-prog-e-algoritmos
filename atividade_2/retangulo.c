#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

    float base, altura;

    printf("\tCALCULE A AREA DE RETANGULOS!\n");

    printf("Insira o valor da Base: ");
    scanf("%f", &base);

    printf("Insira o valor da Altura: ");
    scanf("%f", &altura);

    float area_retangulo = base * altura;
    printf("A area do retangulo e de: %.2f", area_retangulo);

return 0;
}