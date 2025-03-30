#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){

    float n1, n2;

printf("Insira o primeiro valor: ");
scanf("%f", &n1);


printf("Insira o segundo valor: ");
scanf("%f", &n2);
system("pause");

//Adição
float Soma = n1 + n2;
printf("A Soma de %.2f + %.2f = %.2f\n", n1,n2, Soma);

//Subtração
float Sub = n1 - n2;
printf("A diferenca de %.2f - %.2f = %.2f\n", n1,n2, Sub);
system("pause");

//Multiplicação
float Produto = n1 * n2;
printf("O produto de %.2f * %.2f = %.2f\n", n1,n2, Produto);


//Divisão
float Quociente = n1 / n2;
printf("A divisao entre %.2f / %.2f = %.2f\n", n1,n2, Quociente);
system("pause");

//Potenciação
float potenciacao = powf(n1, n2);
printf("A potencia de %.2f ^ %.2f = %.2f\n", n1,n2, potenciacao);

//Radiciação
float raiz = sqrtf(n1);
printf("A raiz de %.2f ^1/2 = %.2f\n", n1, raiz);
system("pause");

//Resto da divisão
int Resto = (int) n1 % (int) n2;
printf("O resto da divisao entre %.0f %% %.0f = %d\n", n1,n2, Resto);


//Quociente da divião
int quociente_inteiro = n1 / (int) n2;
printf("O quociente da divisao entre %.2f // %.2f = %d\n", n1, n2, quociente_inteiro);
system("pause");

//Incremento
n1++;
printf("O incremento de %.2f ++ = %.2f\n", n1-1, n1);


//Decremento
n1--;
printf("O decremento de %.2f-- = %.2f\n", n1+1, n1);
system("pause");

return 0;

}


