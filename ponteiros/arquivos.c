#include <stdio.h>

/*MODOS DE ABERTURA DE ARQUIVO
'r' para leitura (read)
'w' para criar/sobrescrever no arquivo (add, write and read)
'a' para criar, se nao existir, e adicionar ao final do arquivo (append file)
*/
int main(int argc, char* argv[]){

//f de file

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    fprintf(sexta, "Hello, World!");

    return 0;
}