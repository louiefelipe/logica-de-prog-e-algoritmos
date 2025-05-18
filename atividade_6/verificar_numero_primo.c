#include <stdio.h>

int main(int agrc, char* argv[]){

int i, numero;
int primo = 1;

printf("\tDescubra numero primo\n");

do{
    printf("Insira um numero maior que 0: ");
    scanf("%d", &numero);

    if(numero <= 1){
    printf("Numeros menores ou igual a 1 nao sao primos. Tente novamente.\n");
}

}while(numero <= 1);

    if (numero == 2) {
        primo = 1; 
    } 
    else {
        for (i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("%d = Numero PRIMO.\n", numero);
    } else {
        printf("%d = Numero NAO primo.\n", numero);
    }

    return 0;
}