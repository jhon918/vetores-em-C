#include <stdio.h>

int main (){

    int v[10], j, i,n;
    scanf("%d", &n);
    for ( i = 0, j =1; i < 10; i++, j++)
    {
        v[i] = n * j;
    }
    for ( i = 0, j = 1; i < 10; i++, j++)
    {
        printf("%d x %d = %d\n", n, j, v[i]);

    }
    
    return 0;
}