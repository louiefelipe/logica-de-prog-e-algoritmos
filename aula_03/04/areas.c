#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){

char opcao;
float area_circulo, raio, area_losango, Diagonal_maior, diagonal_menor, area_quadrado, lado, area_retangulo, base, altura, area_triangulo, area_trapezio,Base_maior, base_menor;

printf("\tCalculadora de Areas\n");
system("pause");
printf("Escolha uma forma geometrica: \n");
printf("Digite c para Circulo\n");
printf("Digite l para Losango\n");
printf("Digite q para Quadrado\n");
printf("Digite r para Retangulo\n");
printf("Digite t para Triangulo\n");
printf("Digite z para Trapezio\n");

scanf("%c", &opcao);

switch (opcao){
case 'c':
    printf("Circulo\n");
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    area_circulo = M_PI * pow(raio, 2);
    printf("A area do circulo e: %.3f\n", area_circulo);
    system("pause");
    break;

case 'l':
    printf("Losango\n");
     printf("Insira o valor da Diagonal maior: ");
    scanf("%f", &Diagonal_maior);

    printf("Insira o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    area_losango = (Diagonal_maior * diagonal_menor) / 2;
    printf("A area do losango e de: %.2f", area_losango);
    system("pause");
    break;

    case 'q':
    printf("Quadrado\n");
     printf("Insira o valor do lado: ");
    scanf("%f", &lado);

    area_quadrado = pow(lado, 2);
    printf("A area do quadrado e de: %.2f", area_quadrado);
    system("pause");
    break;

    case 'r':
    printf("Retangulo\n");
    printf("Insira o valor da Base: ");
    scanf("%f", &base);

    printf("Insira o valor da Altura: ");
    scanf("%f", &altura);

    area_retangulo = base * altura;
    printf("A area do retangulo e de: %.2f", area_retangulo);
    system("pause");
    break;

    case 't':
    printf("Triangulo\n");
    printf("Insira o valor da base: ");
    scanf("%f", &base);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    area_triangulo = base * altura / 2;
    printf("A area do triangulo e de: %.2f", area_triangulo);
    system("pause");
    break;

    case 'z':
    printf("Trapezio\n");
    printf("Insira o valor da base maior: ");
    scanf("%f", &Base_maior);

    printf("Insira o valor da base menor: ");
    scanf("%f", &base_menor);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    area_trapezio = (Base_maior + base_menor) * altura / 2;
    printf("A area do trapezio e de: %.2f", area_trapezio);
    system("pause");
    break;

default:
printf("Opcao invalida");
    break;
}

    return 0;

}
