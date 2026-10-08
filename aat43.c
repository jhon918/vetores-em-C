#include <stdio.h>

int main (){

    int v[10],i,j;

    for ( i = 0, j >= 1; i < 10; i++, j++)
    {
        scanf("%d", &v[i]);
        if (i == 0)
        {
            j = v[i];
        }
        
        if (i > 0 && j > v[i])
        {
            j = v[i];
            printf("maior:%d  posição:%d", j,i);
        }
        
    }
    
    return 0;
}