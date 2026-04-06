#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre_movimento = 0, bispo_movimento = 0, rainha_movimento = 0; // A Rainha pode se mover até 7 casas em qualquer direção

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Mover o Bispo 5 casas em diagonal para a direita
    printf("Movimentando o Bispo...\n");
    do
    {
        printf("Cima, Direita \n");
        bispo_movimento++;
    } while (bispo_movimento < 5);
    printf("O Bispo se moveu 5 casas em diagonal para a direita.\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Mover a Torre 5 casas para a direita
    printf("Movimentando a Torre...\n");
    while (torre_movimento < 5)
    {
        printf("Direita \n");
        torre_movimento++;
    }
    printf("A Torre se moveu 5 casas para a direita.\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Mover a Rainha 5 casas para a esquerda
    printf("Movimentando a Rainha...\n");
    for (rainha_movimento = 0; rainha_movimento < 8; rainha_movimento++)
    {
        printf("Esquerda \n");
    }
    printf("A Rainha se moveu 8 casas para a esquerda.\n");

    return 0;
}

