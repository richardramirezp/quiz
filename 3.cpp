#include <stdio.h>

int main()
{
    int l,i;
    int arreglo[l];
    
    printf("Porfavor, Ingrese la longitud del vetor\n");
    scanf("%d", &l);
    
    for(i=0; i<l; i++){
        
        printf("Ingrese valor en la posicion %d\n",i+1);
        scanf("%d", &arreglo[i]);
        
    }
    for(i=0; i<l; i++){
        
        printf("%d\t",arreglo[i]*arreglo[i]);
    }
   
   return 0;
}
