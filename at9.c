#include <stdio.h>
int main (){
    int v[10];
    int i,c;
    for ( i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    for ( i = 0; i < 5; i++){
        c = c + v[i];
    }
    printf("%d\n", c);
    return 0;
}