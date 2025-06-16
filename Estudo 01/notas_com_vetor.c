#include <stdio.h>
int main() {

    int v[2];
    int i;
    
    printf("Sua primeira nota: ");
    scanf("%d", &v[0]);
    printf("Sua segunda nota: ");
    scanf("%d", &v[1]);
    
    printf("Sua media e igual a: %d", (v[0]+v[1])/2);
    
}