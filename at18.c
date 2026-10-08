#include <stdio.h>

int main (){

    int v[8], i ,mult = 0;

    for ( i = 0; i < 8; i++)
    {
        v[i] = mult + 5;
        mult = v[i];
    }
    for ( i = 0; i < 8; i++)
    {
        printf("%d ", v[i]);
    }
    
    return 0;
}