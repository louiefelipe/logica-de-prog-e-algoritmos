#include <stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    printf("\tCalculadora de IMC\n");
system("pause");
float peso, altura, IMC;

printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("A altura e: %.2f\n", altura);
    printf("O peso e: %f\n",peso);

IMC = peso/(altura*altura);
printf("O IMC e de: %.2f\n", IMC);

system("pause");
return 0;

}