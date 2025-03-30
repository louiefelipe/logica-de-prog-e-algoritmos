#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

float lado;

printf("\tCalcule a area de quadrados!\n");
system("pause");

printf("Insira o valor de um lado: ");
scanf("%f", lado);

float area_quadrado = pow(lado, 2);
printf("A area do quadrado e de: %.2f",lado, area_quadrado);
system("pause");

return 0;
}