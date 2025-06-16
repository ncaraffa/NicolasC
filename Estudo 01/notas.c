#include <stdio.h>
int main() {
    int n1;
    int n2;
    int media;

    printf("qual foi sua primeira nota?: ");
    scanf("%d", &n1);

    printf("qual foi sua segunda nota?: ");
    scanf("%d", &n2);

    media = n1+n2;
    
    printf("sua media e: %d", media/2);
}