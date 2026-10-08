#include <stdio.h>

int main (){
    int v[10], i, aux;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        aux = v[i];
        if (i <= 0)
        {
            aux = v[i];            
        }
        
        if (aux < v[i])
        {
            aux = v[i];
            printf("maior:%d indice:%d\n", aux, i);
        }
        
        
    }
    return 0;
}