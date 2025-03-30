#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

    float lado;

    printf("\tCALCULE A AREA DE QUADRADOS!\n");
    system("pause");

    printf("Insira o valor do lado: ");
    scanf("%f", &lado);

    float area_quadrado = pow(lado, 2);
    printf("A area do quadrado e de: %.2f", area_quadrado);

    return 0;
}