#include <stdio.h>
int main (){
    
    int v1[6], v2[6], i;
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &v1[i]);
        v2[i] = v1[i]*v1[i];
        printf("%d ", v2[i]);
    }
    printf("\n");
    return 0;
}