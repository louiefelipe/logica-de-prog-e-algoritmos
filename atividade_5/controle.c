#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){
    int alunos, i, aprovados = 0, k;
    float soma = 0.0, maior, menor;
    
printf("\tControle de Notas\n");
system("pause");

printf("Insira a quantidade de alunos: ");
scanf("%d", &alunos);
if (alunos <= 0){
    printf("Numero de alunos invalido\n");
    return 1;
}

float nota[alunos];

for (i = 0; i < alunos; i++){
    do{
    printf("\nInsira a nota do aluno %d: ", i + 1);
    scanf("%f", &nota[i]);
    if (nota[i] < 0.0 || nota[i] > 10.0)
    printf("Nota invalida. Tente novamente\n");
    } while (nota[i] < 0.0 || nota[i] > 10.0);
    soma += nota[i];
    if (i == 0) {
        maior = menor = nota[i];

    } else {
        if (nota[i] > maior) maior = nota[i];
        if (nota[i] < menor) menor = nota[i];
    }
    if (nota[i] >= 6.0) {
        aprovados++;
    }

}
    float media = soma/alunos;
    printf("\n\tRESULTADOS\n");
    printf("\nMedia geral da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos aprovados: %d\n", aprovados);
    system("pause");

    int opcao;
    printf("\nDeseja ver a nota de algum aluno especifico?\n 1. Sim\n 2. Nao\n");
    scanf("%d", &opcao);
    if (opcao == 1){    
    printf("Digite a posicao do aluno (1 a %d) para ver a nota: ", alunos);
    scanf("%d", &k);
    
    if (k >= 1 && k < alunos){
        printf("Nota do aluno na posicao %d: %.2f\n", k, nota[k - 1]);
    }else{
        printf("Posicao invalida\n");
    }
    } 
    if (opcao == 2){
        return 0;;
    }


    return 0;
}