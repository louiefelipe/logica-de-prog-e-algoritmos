#include <stdio.h>

#define TAM_NOME 100

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
}Aluno;

void imprimir_aluno(struct Aluno a){
printf("Nome: %s\nNota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){
    
    int n = 5;
    float maior, menor;
    struct Aluno a[n];

    for(int i = 0; i < 5; i++){

        printf("Digite o nome do aluno %d: \n", i);

        fgets(a[i].nome, TAM_NOME, stdin);
        printf("Digite a nota do aluno %d: \n", i);
        scanf("%f", &a[i].nota);
        fgetc(stdin);
    }
   

    imprimir_aluno(a[i]);

    return 0;
}