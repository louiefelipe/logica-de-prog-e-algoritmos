#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

    float Diagonal_maior, diagonal_menor;

    printf("\t CALCULE A AREA DE LOSANGOS!\n");
    system("pause");

    printf("Insira o valor da Diagonal maior: ");
    scanf("%f", &Diagonal_maior);

    printf("Insira o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    float area_losango = (Diagonal_maior * diagonal_menor) / 2;
    printf("A area do losango e de: %.2f", area_losango);

    return 0;

}