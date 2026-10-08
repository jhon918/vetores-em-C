#include <stdio.h>

int main (){

    int v[10], i,j;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
        {
            j = v[i] + j;
        }
        
    }
    printf("%d\n", j);
    return 0;
}