#include <stdio.h>
#define MAX_TXT 256

int main(int argc, char* argv[]){

char texto[MAX_TXT];
FILE *arq = fopen(argv[1], "w");

if(arq == NULL){
    printf("Erro ao abrir arquivo");
    return 1;
}
    strcat(texto, argv[2]);
    strcat(arq, "\n");
    fprintf(arq);


fclose(arq);

return 0;
}