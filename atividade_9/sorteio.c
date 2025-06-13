#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TEXT 256

int main (int argc, char* argv[]){

    if(argc != 4){
    printf("Informe 3 argumentos = minimo, maximo, esperado.\n", argv[0]);
    printf("Exemplo: %s 1 6 3", argv[0]);
    return 1;
}

int menor = atoi(argv[1]);
int maior = atoi(argv[2]);
int esperado = atoi(argv[3]);

if (menor >= maior){
    printf("O primeiro argumento (%d) deve ser menor do que o segundo (%d). Tente novamente.", menor, maior);
    return 1;
}

if (esperado < menor || esperado > maior){
    printf("O numero desejado (%d) deve estar entre os dois primeiros argumentos. Tente novamente.", esperado);
    return 1;
}

srand(time(NULL));

int sorteado;
do {
    sorteado = rand();
} while (sorteado > (RAND_MAX - (RAND_MAX % (maior - menor + 1))));
sorteado = menor + (sorteado % (maior - menor + 1));

char resultado[MAX_TEXT];

if (sorteado == esperado){
    strcpy(resultado, "sorteado");

    } 
    else {
        strcpy(resultado, "Nao sorteado");
    }

    printf("Numero sorteado: %d\n", sorteado);
    printf("Resultado: %s\n", resultado);

FILE *log = fopen("log.txt", "a");

if(log == NULL){
    printf("Erro ao abrir arquivo");

    return 1;
}

fprintf(log, "Numero minimo: %d\n", menor);
fprintf(log, "Numero maximo: %d\n", maior);
fprintf(log, "Numero esperado: %d\n", esperado);
fprintf(log, "Numero sorteado: %d\n", sorteado);
fprintf(log, "Resultado: %d\n", resultado);


fclose(log);

return 0;

}