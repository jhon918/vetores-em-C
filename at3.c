#include <stdio.h>

int main (){

    int v[10];
    int i;
    int conta = 0;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        conta = conta + v[i];
    }
    printf ("%d\n", conta);
    return 0;
}