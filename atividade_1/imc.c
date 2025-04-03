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
system("pause");

IMC = peso/(altura*altura);
printf("Seu IMC e de: %.2f\n", IMC);

if(IMC <= 18.5){
printf("Classificacao: Baixo Peso\n");
}

if(IMC > 18.5 && IMC <= 24.9){
printf("Classificacao: Normal\n");
}

if(IMC > 24.9 && IMC <= 29.9){
printf("Classificacao: Sobrepeso\n");
}

if(IMC > 29.9 && IMC <= 34.9){
printf(" Classificacao: Obesidade I\n");
}

if(IMC > 34.9 && IMC <= 39.9){
printf("Classificacao: Obesidade II\n");
}

if(IMC > 39.9){
printf("Classificacao: Obesidade III\n");
}

system("pause");
return 0;

}