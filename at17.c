#include <stdio.h>

int main (){
    int v1[10] = {0}, i,j;

    for ( i = 0, j= 2; i < 10; i ++, j+=2)
    {
        v1[i]= j;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", v1[i]);     
        
    }
    
    
    return 0;
}