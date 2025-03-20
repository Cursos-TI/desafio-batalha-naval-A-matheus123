#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {


    // matriz do tabuleiro 10 por 10:
    char tabuleiro[LINHA][COLUNA];

    // lógica do tabuleiro com '0' representando a água:
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // posicionando o primeiro navio na horizontal:
    int linhaH = 2;  
    int colunaH = 2; 
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaH][colunaH + j] = '3';
    }

    // posicionando o segundo navio na vertical:
    int colunaV = 7; 
    int linhaV = 5;  
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = '3';
    }

    // posicionando o terceiro navio na diagonal (três posições a partir de tabuleiro[5][4]):
    int colunaD = 3;
    int linhaD = 6;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD + i][colunaD - i] = '3';
    }

    // posicionando o quarto navio na diagonal (três posições a partir de tabuleiro[2][7]):
    int colunaD2 = 7;
    int linhaD2 = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = '3';
    }

    // posicionando habilidade em cone:
    int colunaHabCo = 5;
    int linhaHabCo = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHabCo + i][colunaHabCo - i] = '5';
        tabuleiro[linhaHabCo + i][colunaHabCo + i] = '5';
        tabuleiro[linhaHabCo + i][colunaHabCo] = '5';
        tabuleiro[9][4] = '5';
        tabuleiro[9][6] = '5';
    }

    // posicionando a habilidade em cruz:
    int colunaHabCr = 6;
    int linhaHabCr = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHabCr][colunaHabCr + i] = '5';
        tabuleiro[linhaHabCr + i][colunaHabCr] = '5';
        tabuleiro[linhaHabCr][colunaHabCr - i] = '5';
        tabuleiro[linhaHabCr - i][colunaHabCr] = '5';
    }

    // posicionando a habilidade em octaedro:
    int colunaHabOct = 1;
    int linhaHabOct = 5;
    for (int i = 0; i < 2; i++) {
        tabuleiro[linhaHabOct + i][colunaHabOct] = '5';
        tabuleiro[linhaHabOct][colunaHabOct + i] = '5';
        tabuleiro[linhaHabOct - i][colunaHabOct] = '5';
        tabuleiro[linhaHabOct][colunaHabOct - i] = '5';

    }


    // impressão do tabuleiro:
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNA; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}