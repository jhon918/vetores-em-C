#include <stdio.h>

int main(){
    
    int i, v1[5],v2[5],v3[5];

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &v1[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &v2[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        v3[i] = v1[i]*v2[i];
        printf("%d ", v3[i]);
    }
    
    return 0;
}