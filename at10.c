#include <stdio.h>

int main(){
    int v[5];
    int i,c = 1;

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }
    for ( i = 0; i < 5; i++)
    {
      c = c * v[i];
    }    
    printf("%d\n", c);
    return 0;
}