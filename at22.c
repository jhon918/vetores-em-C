#include <stdio.h>

int main (){

    int v[10], i,j;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] == 0)
        {
            j++;
        }        
    }
    if (j > 1 || j == 0)
    {
        printf("%d zeros\n", j);        
    }else{
        printf("%d zero\n", j);
    }

    
    return 0;
}