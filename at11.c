#include <stdio.h>

int main (){
    int a[8], b[8], i;

    for ( i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i]*2;
        printf("a: %d ", a[i]);
    }
    printf("\n");
    for ( i = 0; i < 8; i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}