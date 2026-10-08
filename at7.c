#include <stdio.h>
int main(){

    int v[10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        v[i]= v[i]*2;
    
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    
    return 0;
}