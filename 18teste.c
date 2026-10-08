#include <stdio.h>

int main(){
    int v[8], i, j;

    for ( i = 0, j = 5; i < 8; i++, j += 5)
    {
        v[i] = j;
    }
    for ( i = 0; i < 8; i++)
    {
        printf("%d ", v[i]);
    }
    
    return 0;
}