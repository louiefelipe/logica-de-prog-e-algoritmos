#include <stdio.h>

#define TAM_NOME 100

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
}Aluno;

void imprimir_aluno(struct Aluno a){
printf("Nome: %sNota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){
    
    int n = 2;
    struct Aluno a[n];

    for(int i = 0; i < n; i++){

        printf("Digite o nome do aluno %d: ", i);

        fgets(a[i].nome, TAM_NOME, stdin);
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &a[i].nota);
        fgetc(stdin);
    }
    Aluno maior_nota = a[0];
    Aluno menor_nota = a[0];
    float media = 0.0;
    float soma = 0.0;
    for(int i = 0; i < n; i++){
        if(maior_nota.nota < a[i].nota){
            maior_nota = a[i];
        }
        if(menor_nota.nota > a[i].nota){
            menor_nota = a[i];
        }
        soma += a[i].nota;
    }

    printf("\n-----------------------------\n");
    printf("Maior nota: \n");
    imprimir_aluno(maior_nota);
    printf("Menor nota: \n");
    imprimir_aluno(menor_nota);
    printf("\n-----------------------------\n");
    printf("Media das notas: %.2f \n", soma/n);
    

    return 0;
}