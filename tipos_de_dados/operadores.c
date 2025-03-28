#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){

    float n1, n2;

printf("Insira o primeiro valor: ");
scanf("%f", &n1);


printf("Digite o segundo valor: ");
scanf("%f", &n2);

//Adição
float Soma = n1 + n2;
printf("%.2f + %.2f = %.2f\n", n1,n2, Soma);

//Subtração
float Sub = n1 - n2;
printf("%.2f - %.2f = %.2f\n", n1,n2, Sub);

//Multiplicação
float Produto = n1 * n2;
printf("%.2f * %.2f = %.2f\n", n1,n2, Produto);

//Divisão
float Quociente = n1 / n2;
printf("%.2f / %.2f = %.2f\n", n1,n2, Quociente);

//Potenciação
float potenciacao = powf(n1, n2);
printf("%.2f ^ %.2f = %.2f\n", n1,n2, potenciacao);

//Radiciação
float raiz = sqrtf(n1);
printf("%.2f ^1/2 = %.2f\n", n1, raiz);

//Resto da divisão
int Resto = (int) n1 % (int) n2;
printf("%.0f %% %.0f = %d\n", n1,n2, Resto);

//Quociente da divião
int quociente_inteiro = n1 / (int) n2;
printf("%.2f // %.2f = %d\n", n1, n2, quociente_inteiro);

//Incremento
n1++;
printf("%.2f ++ = %.2f\n", n1-1, n1);

//Decremento
n1--;
printf("%.2f-- = %.2f\n", n1+1, n1);
system("pause");

return 0;

}


