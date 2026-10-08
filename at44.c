#include <stdio.h>

int main (){

    int v[10],j,i;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }
    for ( i = 0; i < 10; i++)
    {
 
        if (i > 0 && j <= v[i])
        {
            j = v[i];
            printf("maior:%d indice:%d\n", j, i);
        }
        
    }
    
    
    return 0;
}