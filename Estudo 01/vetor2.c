#include <stdio.h>
int main () {

    int v[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Insira um valor: \n");
        scanf("%d", &v[i]);
    }
    
    printf("Dados inseridos: ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d", v[i]);
    }
    
} 