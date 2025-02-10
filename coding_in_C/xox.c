#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define SIZE 3

int checkWin(char table[SIZE][SIZE], char player);
void displayBoard(char table[SIZE][SIZE]);

int main(){
    const char player1 = 'X';
    const char player2 = 'O';
    int openrow;
    int opencol;
    int moves = 0;
    char table[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // Tabloyu boş karakterlerle başlatın
    int row = SIZE;
    int column = SIZE;
    int maxMoves = row * column;
    srand(time(0));
    displayBoard(table);

    do
    {
        printf("enter coordinates you want to mark: \n");
        scanf("%d", &openrow);
        scanf("%d", &opencol);
        if (openrow >= 0 && openrow < row && opencol >= 0 && opencol < column) {
            if (table[openrow][opencol] != ' ') {
                printf("This cell is already occupied. Try again!\n");
                continue;
            }
            table[openrow][opencol] = player1;
            moves++;
        } else {
            printf("Invalid coordinates!\n");
            continue;
        }

        displayBoard(table);

        if (checkWin(table, player1)) {
            printf("Player 1 (X) wins!\n");
            break;
        }
        if (moves == maxMoves) {
            printf("It's a draw!\n");
            break;
        }
        int randRow, randCol;
        do
        {
            randRow = rand() % row;
            randCol = rand() % column;
        } while (table[randRow][randCol] != ' ');
        table[randRow][randCol] = player2;
        moves++;

        displayBoard(table);

        if (checkWin(table, player2)) {
            printf("Player 2 (O) wins!\n");
            break;
        }
    } while (1);

    return 0;
}

int checkWin(char table[SIZE][SIZE], char player) {
 
    for (int i = 0; i < SIZE; i++) {
        if (table[i][0] == player && table[i][1] == player && table[i][2] == player) {
            return 1;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (table[0][i] == player && table[1][i] == player && table[2][i] == player) {
            return 1;
        }
    }

    if (table[0][0] == player && table[1][1] == player && table[2][2] == player) {
        return 1;
    }
    if (table[0][2] == player && table[1][1] == player && table[2][0] == player) {
        return 1;
    }

    return 0;
}

void displayBoard(char table[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", table[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}


