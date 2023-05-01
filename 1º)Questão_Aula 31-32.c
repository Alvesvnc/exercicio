#include <stdio.h>

int main()
{
    int n1, resto, impa = 0, par = 0, aux = 0, j = 1;
    float media;
    
    do {
        printf("Digite um numero:\t");
        scanf("%d", &n1);
        resto = n1 % 2;
        if (resto == 0) {
            par++;
        } else {
            impa++;
            aux += n1;
        }
    } while (j++ <= 1000);

    media = aux / impa;
    printf("A media de numeros impares é %.2f\nTem um total de %d numeros pares.\n", media, par);
    return 0;
}
