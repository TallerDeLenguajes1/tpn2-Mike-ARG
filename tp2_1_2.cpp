#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5

int main() {

    int f,c;
    double mt[N][M];
    double *punt;
    punt = &mt[0][0];

    for (f = 0; f < N; f++) {
        for (c = 0; c < M; c++) {
            *punt = f + c; //asigno un valor a lo apuntado por el puntero para poder verificar que el programa funciona
            printf("%lf ", *punt);
            punt = punt + 1;
        }
        printf("\n");
    }
    getchar();
    return 0;
}