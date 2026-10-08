#include <stdio.h>
int main (){

    float v[10];
    float conta = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &v[i]);
        conta += v[i];
    }
    conta = conta/10;

    printf("%.2f\n", conta);
    return 0;
}