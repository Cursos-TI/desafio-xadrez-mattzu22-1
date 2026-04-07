#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int 
    torre_movimento = 5, 
    bispo_movimento = 5, 
    rainha_movimento = 8, 
    cavalo_movimento_vertical=2, 
    cavalo_movimento_horizontal=1,
    movimento = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Mover o Bispo 5 casas em diagonal para a direita
    printf("Movimentando o Bispo...\n");
    do
    {
        printf("Cima, Direita \n");
        movimento++;
    } while (movimento < bispo_movimento);
    printf("O Bispo se moveu 5 casas em diagonal para a direita.\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    movimento = 0;

    // Mover a Torre 5 casas para a direita
    printf("\nMovimentando a Torre...\n");
    while (movimento < torre_movimento)
    {
        printf("Direita \n");
        movimento++;
    }
    printf("A Torre se moveu 5 casas para a direita.\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    movimento = 0;

    // Mover a Rainha 5 casas para a esquerda
    printf("\nMovimentando a Rainha...\n");
    for (movimento; movimento < rainha_movimento; movimento++)
    {
        printf("Esquerda \n");
    }
    printf("A Rainha se moveu 8 casas para a esquerda.\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    movimento = 0;

    printf("\n-------------------------------------------------\n");

    int i = 0;

    printf("\nMovimentando o Cavalo...\n");
    for (movimento; movimento < cavalo_movimento_horizontal; movimento++)
    {
        while(i < cavalo_movimento_vertical)
        {
            printf("Baixo \n");
            i++;
        }

        printf("Esquerda \n");
    }
    printf("O Cavalo se moveu em L, duas para baixo e uma para esquerda.\n");

    return 0;
}
