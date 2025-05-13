#include <stdio.h>
#include <stdlib.h>

// calcular a fórmula de Fibonacci
int fib(int N) {
    if (N == 1) {
        return 0;
    } else if (N == 2) {
        return 1;
    } else {
        return fib(N - 1) + fib(N - 2);
    }
}

int main() {
    // declaração da variavel N

    int N;

    // leitura do valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // chamar a função que calcula a fórmula de Fibonacci
    int result = fib(N);
    printf("O %dº número de Fibonacci é: %d\n", N, result);

    return 0;
}

