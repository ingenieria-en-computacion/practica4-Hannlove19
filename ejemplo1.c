#include <stdio.h>
#include <stdlib.h> //biblioteca para funciones de memoria dinamica

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int)); //reserva espacio en la memoria
    if(arreglo != NULL){ //para saber si malloc pudo reservar memoria
        printf ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont), (arreglo + cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);  //libera la memoria  
        arreglo = NULL;   
    }
    return 0;
}