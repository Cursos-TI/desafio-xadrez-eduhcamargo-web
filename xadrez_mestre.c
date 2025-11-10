# include <stdio.h>

//Constantes
int movimento_torre = 5;
int movimento_rainha = 8;
int movimento_bispo = 5;
int cima_cavalo = 2;
int direita_cavalo = 1;

// Funções recursivas

void moverTorre(int passos){
    if (passos <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos){
    if (passos <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverBispo(int passos) {
    if (passos <= 0) {
        return;
    }
    
    for (int vertical = 1; vertical <= 1; vertical++)
    {
        for (int horizontal = 1; horizontal <= 1; horizontal++)
        {
            printf("Cima Direita\n");
        }
        
    }
    moverBispo(passos - 1);
}

int main (){

printf("___Movimento Torre___\n");
printf("Simulando %d casas para a Direita:\n", movimento_torre);
moverTorre(movimento_torre);
printf("\n");

printf("___Movimento Rainha___\n");
printf("Simulando %d casas para a esquerda:\n", movimento_rainha);
moverRainha(movimento_rainha);
printf("\n");

printf("___Movimento Bispo___\n");
printf("Simulando %d casas na diagonal (Cima Direita):\n", movimento_bispo);
moverBispo(movimento_bispo);
printf("\n");

printf("___Movimento Cavalo___\n");
printf("Simulando movimento em 'L': %d Cima e %d Direita\n", cima_cavalo, direita_cavalo);

int passo_vertical = 0;
int passo_horizontal = 0;

//Loop

for (int i = 1; passo_vertical < cima_cavalo || passo_horizontal < direita_cavalo; i++)
{
    if (passo_vertical < cima_cavalo){
        printf("Cima\n");
        passo_vertical++;
        continue;
    }
    while (passo_horizontal < direita_cavalo)
    {
        printf("Direita\n");
        passo_horizontal++;
    }
    if (passo_horizontal == direita_cavalo)
    {
        break;
    }
}
printf("\n");

return 0;

}