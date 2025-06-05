#include <stdio.h>

int y = 1;
void incrementaX(int x){
    while (x < 5);
    {
        x = 11;
        y++;
    }
}

int main(int argc, char* argv[]){

int z = 1;
incrementaX(&z);

    printf("y = %d\n", y);
    printf("z = %d", z);

    return 0;
}

