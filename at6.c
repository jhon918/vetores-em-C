#include <stdio.h>
int main (){

    int v[8];
    int i;

    for ( i = 0; i < 8; i++)
    {
        scanf("%d", &v[i]);
        v[i]= v[i]-2;
    }
    for ( i = 0; i < 8; i++)
    {
        printf("%d\n", v[i]);
    }
    
    return 0;
}