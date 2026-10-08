#include <stdio.h>

int main (){
    int v[10], i, j;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] < 0)
        {
            j++;
        }
        
    }
    printf ("%d negativos", j);
    return 0;
}