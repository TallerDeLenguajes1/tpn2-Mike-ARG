#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0)); //Sirve para definir los números aleatorios

    int X = 15, Y = rand() %15 + 1;
    int i, j;

    int matriz[X][Y];
    int pares[X];

    for (i = 0; i < X; i++) {
        int CantPares = 0;
        for (j = 0; j < Y; j++) {
            matriz[i][j] = rand() % 900 + 100;
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                CantPares++;
            }
        }
        pares[i] = CantPares;
        printf("\n");
    }
    printf("\nCantidad de números pares por fila: ");
    for (i = 0; i < X; i++) {
        printf("%d ", pares[i]);
    }

    getchar();
    return 0;
}