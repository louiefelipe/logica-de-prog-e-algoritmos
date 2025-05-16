#include <stdio.h>

int main(int agrc, char* argv[]){

int numero;

printf("\tDescubra numero primo\n");
system("pause");

printf("Insira um numero maior que 0: ");
scanf("%d", &numero);

if (numero <= 1 || numero > 2){
    printf("Numero NAO primo!");
}
else{
    printf("Numero primo!");
}
return 0;
}