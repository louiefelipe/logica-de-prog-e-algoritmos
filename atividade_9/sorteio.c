#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char* argv[]){

FILE *log = fopen("log.txt", "a");

if(log == NULL){
    printf("Erro ao abrir arquivo");

    return 1;
}
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

srand((unsigned)time(NULL));

int sorteado;

sorteado = (rand() % (maior - menor + 1)) + menor;

if (sorteado == esperado){
    fprintf(log_txt, "sorteado\n");

    } 
    else {
        fprintf(log_txt, "Nao sorteado\n");
    }

    fprintf(log_txt, "Numero sorteado: %d\n", sorteado);
    fprintf(log_txt, "Resultado: %s\n", resultado);


fprintf(log_txt, "Numero minimo: %d\n", menor);
fprintf(log_txt, "Numero maximo: %d\n", maior);
fprintf(log_txt, "Numero esperado: %d\n", esperado);
fprintf(log_txt, "Numero sorteado: %d\n", sorteado);
fprintf(log_txt, "Resultado: %d\n", resultado);


fclose(log_txt);

return 0;

}