/*
*NOMBRE:NUMERO MAYOR Y MENOR DENTRO DE UN VECTOR
*AUTOR:Luis Sebastian Urbano Luna
*FECHA: 23/Marzo/2017
*RESUMEN:Se Ingresan los numeros por parte del usuario y luego este devuelve el mayor y el menor de los vectores
*/

#include <stdio.h>

int main(){
    
    int l,i;
    int arreglo[l];
    int mayor=0, menor;
    
    printf("por favor ingrese la longitud del arreglo: ");
    scanf("%d",&l);
    
    for(int i=0; i<l; i++){
        
        printf("ingrese valor en la posicion %d\n",i+1);
        scanf("%d", &arreglo[l]);
        
        if(arreglo[l] < menor){
            menor= arreglo[l];
        }

        if(arreglo[l] > mayor){
            mayor= arreglo[l];
        }

    }
    printf("El mayor elemento del vector es: %d\n",mayor);
    printf("El menor elemento del vector es: %d\n",menor);
    return 0;
}
