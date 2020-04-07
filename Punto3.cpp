#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0)); //Sirve para definir los números aleatorios

    int X = 15, Y = rand() %15 + 1;
    int i, j;

    int matriz[X][Y];

    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            matriz[i][j] = rand() % 900 + 100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}