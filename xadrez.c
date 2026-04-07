#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int casasBispo = 5, casasTorre = 5, casasRainha = 8;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int posicao = 1;
    printf("Realizando a movimentação do bispo...\n");
    do {
        printf("Movimentando uma casa para cima e uma casa para a direita pela %d° vez.\n", posicao);
        posicao++;
    } while (posicao <= casasBispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nRealizando a movimentação da torre...\n");
    posicao = 1;
    while (posicao <= casasTorre){
        printf("Movimentando uma casa para a direita pela %d° vez.\n", posicao);
        posicao++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRealizando a movimentação da rainha...\n");
    for (posicao = 1; posicao <= casasRainha; posicao++){
        printf("Movimentando uma casa para a esquerda pela %d° vez.\n", posicao);
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
