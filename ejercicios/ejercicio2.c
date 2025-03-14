#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &n);

    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i * n + j]);
        }
        printf("\n");
    }

    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    scanf("%d %d %d", &row, &col, &value);

    //lee los varlores solicitados
    if (row >= 1 && row <= m && col >= 1 && col <= n) {
        matrix[(row-1) * n + (col-1)] = value;
    } else {
        printf("Error: Coordenadas fuera de rango.\n");
    }

    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]);
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}
