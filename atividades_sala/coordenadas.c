#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto {
    int a, b;

} Ponto;

int main(int argc, char* argv[]){

Ponto X, Y;

double dXY;

X.a = atoi(argv[1]);
Y.a = atoi(argv[2]);
X.b = atoi(argv[3]);
Y.b = atoi(argv [4]);

printf("X(%d, %d)\nY(%d, %d)\n", X.a, X.b, Y.a, Y.b);

dXY = (sqrt (pow(X.b - X.a, 2)) + (pow(Y.b - Y.a, 2)));

printf("Distancia XY = %.2lf\n", dXY);

    return 0;
}