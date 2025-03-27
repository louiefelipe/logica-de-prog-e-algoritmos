#include <stdio.h>

int main(int argc, char* argv[]){
    int idade = 17;
    float altura = 1.73;
    float peso = 64.23;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("A idade eh: %d\n", idade);
    printf("A altura eh: %f\n", altura);
    printf("O peso eh: %2.d\n",peso);

    float dobro_do_peso = peso * 2;
    printf("O dobro do peso eh %.2f\n" , dobro_do_peso);

    return 0;
    
}