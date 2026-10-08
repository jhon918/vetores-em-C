#include <stdio.h>

int main (){

    int v[10],i,n;
    scanf("%d", &n);
    for ( i = 0; i < 10; i++)
    {
        v[i] = n * (i+1);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n,(i+1), v[i]);

    }
    
    return 0;
}