#include <stdlib.h>
#include <stdio.h>

// função para calcular o valor de delta
void calculaDelta(int a, int b, int c, int *delta){
    // delta = b^2 - 4*a*c
    *delta = (b*b) - (4*a*c);
}

int main() {
    int a,b,c,valorDelta;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Calcula o valor de delta
    calculaDelta(a,b,c,&valorDelta);

    // Imprime o valor de delta
    printf("O valor de delta é: %d\n", valorDelta);
    
    return 0;
}