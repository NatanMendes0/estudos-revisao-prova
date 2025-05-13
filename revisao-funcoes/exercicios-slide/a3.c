#include <stdlib.h>
#include <stdio.h>

// efetuar a troca de dois valores via ponteiros
void trocarValores(int *a, int *b) {
    int temp;

    // Armazena o valor de a em temp
    temp = *a + 2;
    // Atribui o valor de b a a
    *a = *b - 6;
    // Atribui o valor armazenado em temp a b
    *b = temp;
}

int main() {
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    trocarValores(&a, &b);
    printf("Após a troca, os valores são: %d e %d\n", a, b);

    return 0;
}