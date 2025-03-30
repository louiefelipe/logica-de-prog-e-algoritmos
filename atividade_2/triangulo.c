#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

    float base, altura;

    printf("\tCALCULE A AREA DE TRIANGULOS!\n");
system("pause");

printf("Insira o valor da base: ");
scanf("%f", &base);

printf("Insira o valor da altura: ");
scanf("%f", &altura);

float area_triangulo = base * altura / 2;
printf("A area do triangulo e de: %.2f", area_triangulo);

return 0;
}
