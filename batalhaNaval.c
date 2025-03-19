#include <stdio.h>

int main() {
    // matriz do tabuleiro 10 por 10:
    char tabuleiro[10][10];

    // lógica do tabuleiro com '0' representando a água:
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // posicionando o primeiro navio na horizontal:
    int linhaH = 2;  
    int colunaH = 2; 
    for (int j = 1; j < 4; j++) {
        tabuleiro[linhaH][colunaH + j] = '3';
    }

    // posicionando o segundo navio na vertical:
    int colunaV = 7; 
    int linhaV = 5;  
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = '3';
    }

    // posicionando o terceiro navio na diagonal (três posições a partir de tabuleiro[5][4]):
    int colunaD = 4;
    int linhaD = 5;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD + i][colunaD - i] = '3';
    }

    // posicionando o quarto navio na diagonal (três posições a partir de tabuleiro[2][7]):
    int colunaD2 = 7;
    int linhaD2 = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = '3';
    }

    // impressão do tabuleiro:
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}