#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    float velocidad; //entre 1 y 3 Ghz
    int anio; //entre 200 y 2017
    char cantidad; // entre 1 y 4
    char *tipo_cpu; //valores del arreglo 'tipos'
};

typedef struct compu compu;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

#define MAX 50

compu CargarPC(compu X);
void mostrarPCs(compu X, int Y);


int main() {
    int N;
    compu compu1[N];

    srand(time(0));

    printf("Ingrese la cantidad de PCs a ingresar: ");
    scanf("%d", &N);
    fflush(stdin);


}

compu cargarPC(compu X) {
    X.velocidad = rand() % 3 + 1;
    X.anio = rand() % 8 + 2000;
    X.cantidad = rand() % 4 + 1;
    X.tipo_cpu = t
}

void mostrarPCs(compu X, int Y) {
    for (int i = 0; i < Y; i++) {
        printf("PC Nro \n\n");
        printf("Velocidad del procesador: %.2f\n", X[i].velocidad);
        printf("Cantidad de núcleos: %d\n", X[i].cantidad);
        printf("Tipo de CPU: %s\n", X[i].tipo_cpu);
        printf("Año de fabricación: %d\n\n", X[i].anio);
    }
}

