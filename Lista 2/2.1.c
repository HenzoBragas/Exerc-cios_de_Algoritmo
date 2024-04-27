#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o tamanho do primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o tamanho do segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o tamanho do terceiro lado do triangulo: ");
    scanf("%f", &lado3);

    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
        printf("Os lados formam um triangulo.\n");

        if (lado1 == lado2 && lado2 == lado3)
            printf("Triangulo equilatero.\n");
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            printf("Triangulo isosceles.\n");
        else
            printf("Triangulo escaleno.\n");
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
