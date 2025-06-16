#include <stdio.h>
int main () {

    /*int v[3];

    float m;

    v[0] = 100;
    v[1] = 200;
    v[2] = 300;

    m = (v[0] + v[1] + v[2]) / 3;

    printf("O resultado e igual a: %.2f", m);*/

    int v[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for ( i = 0; i < 5; i++) {
        
        s += v[i];

    }
    
    printf("Resultado: %.2f\n", s/5);

}