#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int i;
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &n);

    arr = (int*)malloc(n *sizeof(int));
    
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("El arreglo es: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr=NULL;
    
    return 0;
}
