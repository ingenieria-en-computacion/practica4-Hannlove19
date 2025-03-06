#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    printf("%p\n", arreglo); //No inicia en nulo, tiene basura

    arreglo = (int*)calloc(num , sizeof(int)); //recibe dos argumentos
    //numero de los elementos, tamaño de los elementos
    if(arreglo != NULL){ //calloc garantiza que haya 0 en las localidad reservadas 
        printf ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont), (arreglo + cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);   
        arreglo = NULL;     
    }
    return 0;
}