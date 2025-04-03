#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define LINHAS 10
#define COLUNAS 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

  // Posicionando um navio na horizontal
  int navio1 = 3; // Tamanho do navio
  int navio1LinInicio = 1; // Linha inicial
  int navio1ColInicio = 2; // Coluna inicial

  for (int i = 0; i < navio1; i++) {
      tabuleiro[navio1LinInicio][navio1ColInicio + i] = 3; // Mantém a linha fixa e muda a coluna
  }

    // Posicionando um navio na vertical
    int navio2 = 3; // Tamanho do navio
    int navio2LinInicio = 1; // Linha inicial
    int navio2ColInicio = 6; // Coluna inicial

    for (int i = 0; i < navio2; i++) {
        tabuleiro[navio2LinInicio + i][navio2ColInicio] = 3; // Mantém a coluna fixa e muda a linha
    }

    // Posicionando um navio na diagonal 1
    int navio3 = 3; // Tamanho do navio
    int navio3LinInicio = 2; // Linha inicial
    int navio3ColInicio = 0; // Coluna inicial

    for (int i = 0; i < navio3; i++) {
        tabuleiro[navio3LinInicio + i][navio3ColInicio + i] = 3; // Muda a coluna e muda a linha
    }

    // Posicionando um navio na diagonal 2
    int navio4 = 3; // Tamanho do navio
    int navio4LinInicio = 4; // Linha inicial
    int navio4ColInicio = 4; // Coluna inicial

    for (int i = 0; i < navio4; i++) {
        tabuleiro[navio4LinInicio - i][navio4ColInicio - i] = 3; // Muda a coluna e muda a linha
    }

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf("%2d ", tabuleiro[i][j]);
        }
    printf("\n"); // Nova linha após cada linha da matriz
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
