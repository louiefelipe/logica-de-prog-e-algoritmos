#include <stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
    printf("\tCalculadora de IMC\n");
system("pause");
float peso, altura, IMC;

printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("A altura e: %.2f\n", altura);
    printf("O peso e: %.2f\n",peso);

IMC = peso/(altura*altura);
printf("Seu IMC e de: %.2f\n", IMC);

system("pause");
return 0;

}