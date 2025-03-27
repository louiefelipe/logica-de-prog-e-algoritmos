#include <stdio.h>
int main(int argc, char* argv[]){
    printf("Calculadora de IMC\n");

float peso, altura, IMC;

printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("A altura eh: %.2f\n", altura);
    printf("O peso eh: %f\n",peso);

IMC = peso/(altura*altura);
printf("O IMC eh de: %.2f\n", IMC);

return 0;

}