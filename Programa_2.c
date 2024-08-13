#include <stdio.h>

struct estudiante {
    char nombre[40];
    char grado[40];
    char departamento[40];
    int edad;
    int numero_carnet;
};
// Funciones
int registrar_estudiante();
int buscar_estudiante();
int lista_por_grado();
int editar_estudiante();


int main() {
    int a = 1;
    int opcion;
    FILE *fp;
    fp = fopen("Base de datos.txt", "w");
    while (a = 1) {
        printf("Seleccione una opcion:\n 1) Registrar estudiante\n2) Buscar estudiante por carnet \n3) Lista de estudiantes por grado \n4) Editar un estudiante \n5) Salir");
        scanf("%d", &opcion);
        if (opcion == 1) {
            // Registrar estudiante
            registrar_estudiante();
        } else if (opcion == 2) {
            // Buscar estudiante por codigo
            buscar_estudiante();
        } else if (opcion == 3) {
            // Lista de estudiante por grado
            lista_por_grado();
        } else if (opcion == 4) {
            // Editar un estudiante
            editar_estudiante();
        } else if (opcion == 5) {
            // Salir
            printf("Programa Finalizado");
            break;
        } else {
            printf("Opcion invalida. Intente de nuevo.");
        }
    }
    return 0;
}

int registrar_estudiante() {
    struct estudiante A1;
    FILE *fp;
    fp = fopen("Sistema_Colegio.txt", "a");
    printf("Ingrese el nombre del estudiante: >");
    scanf("%s", &A1.nombre);
    fprintf(fp, "%s\n", A1.nombre);
    printf("Ingrese el grado del estudiante: >");
    scanf("%s", &A1.grado);
    fprintf(fp, "%s\n", A1.grado);
    printf("Ingrese el departemento del estudiante: >");
    scanf("%s", &A1.departamento);
    fprintf(fp, "%s\n", A1.departamento);
    printf("Ingrese la edad del estudiante: >");
    scanf("%d", &A1.edad);
    fprintf(fp, "%d\n", A1.edad);
    printf("Ingrese el codigo de cartet del estudiante: >");
    scanf("%d", &A1.numero_carnet);
    fprintf(fp, "%d\n", A1.numero_carnet);
    fclose(fp);
}

int buscar_estudiante() {
    struct estudiante A1;
}

int lista_por_grado() {
    struct estudiante A1;
}

int editar_estudiante() {
    struct estudiante A1;
}