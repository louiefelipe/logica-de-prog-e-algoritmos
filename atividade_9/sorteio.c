#include <stdio.h>
#include <time.h>
#define MAX_TEXT 256

int main(int argc, char* argv[]){

    if(argc != 4){
    printf("Informe 3 argumentos = minimo, maximo, esperado.");
    return 1;
}

int menorr atoi(argv[1]);
int maior atoi(argv[2]);
int esperado atoi(argv[3]);

if(menor >= maior){
    printf("O primeiro argumento deve ser menor do que o segundo. Tente novamente.");
    return 1;
}
if(esperado < menor || esperado > maior){
    printf("O numero desejado deve estar entre os dois primeiros argumentos. Tente novamente.")
    return 1;
}

srand(time(NULL));


char texto[MAX_TEXT];
FILE *sorteio = fopen(sorteio.txt, "w");

if(sorteio == NULL){
    printf("Erro ao abrir arquivo");
    return 1;
}
fprintf ("Numero minimo: %d\nNumero maximo: %d\nNumero esperado: %d\nNumero sorteado: %d", menor, maior, esperado, sorteado, rand());

    fprintf(sorteio, texto);

fclose(sorteio);





}