#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char* argv[]){

//receber informações para realizar o sorteio

int menor, maior, esperado, sorteado;

FILE *log_txt = fopen = ("log.txt", "a");

menor = atoi(argv[1]);
maior = atoi(argv[2]);
esperado = atoi(argv[3]);

srand((unsigned)time(NULL));

//condições

if (menor >= maior){
    printf ("O primeiro argumento deve ser menor do que o segundo. Tente Novamente.");
    return 1;
}

if (esperado < menor || esperado > maior){
    printf("O numero esperado deve estar entre os dois primeiros argumentos. Tente Novamente.");
    return 1;
}

//realizar o sorteio
sorteado = (rand() % (maior - menor + 1)) + menor;

if(esperado == sorteado){
    fprintf(log_txt, "Sorteado!\n");

}
else{
    fprintf(log_txt, "Nao sorteado :(\n");
}

fprintf(log_txt, "Numero minimo: %d\nNumero maximo: %d\nNumero esperado: %d\nNumero sorteado: %d\nResultado: %d", menor, maior, esperado, sorteado);

fclose(log_txt);
    return 0;
}