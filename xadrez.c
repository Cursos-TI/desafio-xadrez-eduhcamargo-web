#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movimento_torre = 5;
    int movimento_bispo = 5;
    int movimento_rainha = 8;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("___ Movimento do Bispo ___"); //While
    printf("Simulando %d casas na diagonal (Cima e Direita):\n", movimento_bispo);
    
    int contador_bispo = 1;

    //loop
    while (contador_bispo <= movimento_bispo)
    {
        printf("Cima-Direita\n");
        contador_bispo++;
    }

    printf("\n");
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("___ Movimento da torre ___"); //Usando o 'For'
    printf("Simulando %d casas para a direita: \n", movimento_torre);

    //loop
    for (int i = 1; i <= movimento_torre; i++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("___ Movimento da Rainha ___"); //do-while
    printf("Simulando %d casa para a esquerda:\n", movimento_rainha);

    int contador_rainha = 1;

    //loop
    do{
        printf("Esqueda\n");
        contador_rainha++;
    } while (contador_rainha <= movimento_rainha);
    
    printf("\n");
    
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
