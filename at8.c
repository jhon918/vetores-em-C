#include <stdio.h>
int main (){
    int v[6];
    int i,c;

    
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &v[i]);

    }
    
    scanf("%d", &c);
    
    for ( i = 0; i < 6; i++)
    {        
        v[i]=v[i]*c;
        printf("%d,%d\n", c,v[i]);
    }
    
    return 0;
}