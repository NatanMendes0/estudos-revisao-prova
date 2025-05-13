#include <stdio.h>
#include <stdlib.h>

// Função para calcular a soma dos 3 maiores números
void somaMaiores(int a, int b, int c, int d, int *somaMaiores) {
    int menor;

    // Encontrar o menor número entre os quatro
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;

    // A soma dos três maiores é a soma total menos o menor número
    *somaMaiores = a + b + c + d - menor;
}

int main() {
    int a, b, c, d, somaResultado;

    printf("Digite 4 numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    somaMaiores(a, b, c, d, &somaResultado);

    printf("A soma dos maiores é: %d\n", somaResultado);

    return 0;
}