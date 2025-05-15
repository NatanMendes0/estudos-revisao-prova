#include <stdio.h>

// definir struct
struct jogador{
    char nome[50];
    int idade;
    int posicao;
    int numero_camisa;    
};

int main(){
    // declarar uma variavel struct
    struct jogador novoJogador;

    // pedir inserção do novo jogador para o usuário
    printf("digite as caracteristicas do novo jogador!\n");
    
    printf("Nome do jogador: ");
    scanf("%s", novoJogador.nome);
    
    printf("Idade do jogdaor: ");
    scanf("%d", &novoJogador.idade);
    
    printf("Numero da camisa do jogador: ");
    scanf("%d", &novoJogador.numero_camisa);
    
    printf("\n\n ---------------||--------------- \n\n");

    printf("Dados totais:\n");
    printf("Nome: %s\n", novoJogador.nome);
    printf("Idade: %d\n", novoJogador.idade);
    printf("Numero da camisa: %d\n", novoJogador.numero_camisa);
            
    return 0;
}