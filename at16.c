#include <stdio.h>

int main (){

    int v1[10],i,j;

    for ( i = 0, j = 1; i < 10; i++, j++)
    {
        v1[i] = j;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", v1[i]);
    }
    
    return 0;
}