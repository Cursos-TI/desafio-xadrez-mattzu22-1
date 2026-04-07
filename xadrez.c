#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentacaoBispo(int movimento)
{
    if (movimento > 0)
    {
        for (int v = 0; v < 1; v++)
        {
            printf("Cima \n");

            for (int h = 0; h < 1; h++)
            {
                printf("Direita \n");
                break;
            }
        }

        movimentacaoBispo(movimento - 1);
    }
}

void movimentacaoTorre(int movimento)
{
    if (movimento > 0)
    {
        printf("Direita \n");
        movimentacaoTorre(movimento - 1);
    }
}

void movimentacaoRainha(int movimento)
{
    if (movimento > 0)
    {
        printf("Esquerda \n");
        movimentacaoRainha(movimento - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int
        torre_movimento = 5,
        bispo_movimento = 5,
        rainha_movimento = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Mover o Bispo 5 casas em diagonal para a direita
    printf("Movimentando o Bispo...\n");
    movimentacaoBispo(bispo_movimento);
    printf("O Bispo se moveu 5 casas em diagonal para a direita.\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\n");
    printf("----------------------------------------------------------------\n");

    // Mover a Torre 5 casas para a direita
    printf("\nMovimentando a Torre...\n");
    movimentacaoTorre(torre_movimento);
    printf("A Torre se moveu 5 casas para a direita.\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\n");
    printf("----------------------------------------------------------------\n");

    // Mover a Rainha 5 casas para a esquerda
    printf("\nMovimentando a Rainha...\n");
    movimentacaoRainha(rainha_movimento);
    printf("A Rainha se moveu 8 casas para a esquerda.\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n");
    printf("----------------------------------------------------------------\n");

    printf("\nMovimentando o Cavalo...\n");
    for (int h = 0, v = 0; h < 1; h++)
    {
        while (v < 3)
        {
            if (v < 2)
            {
                printf("Cima \n");
                v++;
                continue;
            }

            printf("Direita \n");
            v++;
            break;
        }
    }
    printf("O Cavalo se moveu em L, duas para cima e uma para direita.\n");

    return 0;
}
