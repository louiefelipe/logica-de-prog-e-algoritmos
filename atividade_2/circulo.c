#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

float raio, pi;

    printf("\tCalcule a area de circulos!\n");
    system("pause");

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    pi = 3.14159;

    float area_circulo = pi * pow(raio, 2);
printf("A area do circulo e: %.3f\n", pi, raio, area_circulo);
system("pause");

return 0;

}



