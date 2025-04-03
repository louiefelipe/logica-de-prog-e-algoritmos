#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

float raio;

    printf("\tCALCULE A AREA DE CIRCULOS\n");
    system("pause");

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);


    float area_circulo = M_PI * pow(raio, 2);
printf("A area do circulo e: %.3f\n", area_circulo);
system("pause");

return 0;

}



