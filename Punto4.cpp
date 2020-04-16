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

#define MAX 100

compu cargarPC(compu X);
void cargarArreglo(compu *X, int N);
void mostrarPCs(compu *X, int N);
void PCvieja(compu *X, int N);
void PCveloz(compu *X, int N);



int main() {
    int N;
    srand(time(0));

    printf("Ingrese la cantidad de PCs a ingresar: ");
    scanf("%d", &N);
    fflush(stdin);
    printf("\n\n");

    compu *compu1;
    compu1 = (compu *)malloc (N*sizeof(compu));
    compu *arreglo;
    arreglo = compu1;


    cargarArreglo(arreglo, N);
    mostrarPCs(arreglo, N);
    PCvieja(arreglo, N);
    PCveloz(arreglo, N);

    getchar();
    return 0;


}

compu cargarPC(compu X) {
    X.velocidad = (rand() % 3 + 1);
    X.anio = rand() % 8 + 2000;
    X.cantidad = rand() % 4 + 1;
    X.tipo_cpu = tipos[rand() % 6];

    return X;
}

void cargarArreglo(compu *X, int N) {
    compu aux;

    for (int i = 0; i < N; i++) {
        aux = cargarPC(aux);
        *X = aux;
        X++;
    }
}

void mostrarPCs(compu *X, int N) {
    compu aux = *X;

    for (int i = 0; i < N; i++) {
        printf("PC Nro %d\n\n", i + 1);
        printf("Velocidad del procesador: %.1f\n", aux.velocidad);
        printf("Cantidad de núcleos: %d\n", aux.cantidad);
        printf("Tipo de CPU: %s\n", aux.tipo_cpu);
        printf("Año de fabricación: %d\n\n", aux.anio);
        
        X++;
        aux = *X;
    }
}

void PCvieja(compu *X, int N) {
    compu aux = *X;
    
    compu PCmasVieja = aux;
    int anioMenor = aux.anio;
    int IDpcVieja = 1;
    X++;

    for (int i = 1; i < N; i++) {
        if (aux.anio < anioMenor) {
            anioMenor = aux.anio;
            PCmasVieja = aux;
            IDpcVieja = i + 1;
        }
        X++;
        aux = *X;
    }
    printf("\n\nLa PC más vieja es la PC Nro %d:\n\n", IDpcVieja);
    printf("Velocidad del procesador: %.1f\n", PCmasVieja.velocidad);
    printf("Cantidad de núcleos: %d\n", PCmasVieja.cantidad);
    printf("Tipo de CPU: %s\n", PCmasVieja.tipo_cpu);
    printf("Año de fabricación: %d\n\n", PCmasVieja.anio);
}

void PCveloz(compu *X, int N) {
    compu aux = *X;
    
    compu PCmasVeloz = aux;
    int velMayor = aux.velocidad;
    int IDpcVeloz = 1;
    X++;

    for (int i = 1; i < N; i++) {
        if (aux.velocidad > velMayor) {
            velMayor = aux.velocidad;
            PCmasVeloz = aux;
            IDpcVeloz = i + 1;
        }
        X++;
        aux = *X;
    }
    printf("\n\nLa PC más veloz es la PC Nro %d:\n\n", IDpcVeloz);
    printf("Velocidad del procesador: %.1f\n", PCmasVeloz.velocidad);
    printf("Cantidad de núcleos: %d\n", PCmasVeloz.cantidad);
    printf("Tipo de CPU: %s\n", PCmasVeloz.tipo_cpu);
    printf("Año de fabricación: %d\n\n", PCmasVeloz.anio);

}