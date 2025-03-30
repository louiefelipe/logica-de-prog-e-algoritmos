#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

float Base_maior, base_menor, altura;
printf("\tCALCULE A AREA DE TRAPEZIOS!\n");
system("pause");

printf("Insira o valor da base maior: ");
scanf("%f", &Base_maior);

printf("Insira o valor da base menor: ");
scanf("%f", &base_menor);

printf("Insira o valor da altura: ");
scanf("%f", &altura);

float area_trapezio = (Base_maior + base_menor) * altura / 2;
printf("A area do trapezio e de: %.2f", area_trapezio);

return 0;

}