/*Write a method Boolean isKingSafe(int[][]chessBoard)
Returns true if king in the given chess board is safe from the given enemies otherwise false;
NOTE: Enemies are- Horse, Camel, Queen, Elephant only
Do not consider the colour case of the chess board for traversal of camel and all.*/
#include <bits/stdc++.h>
using namespace std;

// Check if the indices are within the matrix or not
bool inBounds(int i, int j)
{
    // Checking boundary conditions
    return i >= 0 && i < 8 && j >= 0 && j < 8;
}

bool lookForking(char board[][8], char c, int i, int j)
{
    // Store all possible moves of the king
    int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int k = 0; k < 8; k++)
    {
        // incrementing index values
        int m = i + x[k];
        int n = j + y[k];

        // checking boundary conditions and character match
        if (inBounds(m, n) && board[m][n] == c)
            return true;
    }
    return false;
}

// Function to check if bishop can attack the king
bool lookForCamel(char board[][8], char c, int i, int j)
{
    // Check the lower right diagonal
    int k = 0;
    while (inBounds(i + ++k, j + k))
    {
        if (board[i + k][j + k] == c)
            return true;
        if (board[i + k][j + k] != '-')
            break;
    }

    // Check the lower left diagonal
    k = 0;
    while (inBounds(i + ++k, j - k))
    {

        if (board[i + k][j - k] == c)
            return true;
        if (board[i + k][j - k] != '-')
            break;
    }

    // Check the upper right diagonal
    k = 0;
    while (inBounds(i - ++k, j + k))
    {
        if (board[i - k][j + k] == c)
            return true;
        if (board[i - k][j + k] != '-')
            break;
    }

    // Check the upper left diagonal
    k = 0;
    while (inBounds(i - ++k, j - k))
    {
        if (board[i - k][j - k] == c)
            return true;
        if (board[i - k][j - k] != '-')
            break;
    }

    return false;
}

// Check if
bool lookForElephant(char board[][8],char c, int i, int j)
{
    // Check downwards
    int k = 0;
    while (inBounds(i + ++k, j))
    {
        if (board[i + k][j] == c)
            return true;
        if (board[i + k][j] != '-')
            break;
    }

    // Check upwards
    k = 0;
    while (inBounds(i + --k, j))
    {
        if (board[i + k][j] == c)
            return true;
        if (board[i + k][j] != '-')
            break;
    }

    // Check right
    k = 0;
    while (inBounds(i, j + ++k))
    {
        if (board[i][j + k] == c)
            return true;
        if (board[i][j + k] != '-')
            break;
    }

    // Check left
    k = 0;
    while (inBounds(i, j + --k))
    {
        if (board[i][j + k] == c)
            return true;
        if (board[i][j + k] != '-')
            break;
    }
    return false;
}

// Function to check if Queen can attack the King
bool lookForQueen(char board[][8], char c, int i, int j)
{
    // Queen's moves are a combination of both the Bishop and the Rook
    if (lookForCamel(board, c, i, j) || lookForElephant(board, c, i, j))
        return true;

    return false;
}

// Check if the knight can attack the king
bool lookForHorse(char board[][8],char c, int i, int j)
{
    // All possible moves of the knight
    int x[] = {2, 2, -2, -2, 1, 1, -1, -1};
    int y[] = {1, -1, 1, -1, 2, -2, 2, -2};

    for (int k = 0; k < 8; k++)
    {
        // Incrementing index values
        int m = i + x[k];
        int n = j + y[k];

        // Checking boundary conditions and character match
        if (inBounds(m, n) && board[m][n] == c)
            return true;
    }
    return false;
}

// Function to check if pawn can attack the king
bool lookForp(char board[][8],char c, int i,int j)
{
    char lookFor;
    if (isupper(c))
    {
        // Check for white pawn
        lookFor = 'P';
        if (inBounds(i + 1, j - 1) && board[i + 1][j - 1] == lookFor)
            return true;

        if (inBounds(i + 1, j + 1) && board[i + 1][j + 1] == lookFor)
            return true;
    }
    else
    {
        // Check for black pawn
        lookFor = 'p';
        if (inBounds(i - 1, j - 1) && board[i - 1][j - 1] == lookFor)
            return true;
        if (inBounds(i - 1, j + 1) && board[i - 1][j + 1] == lookFor)
            return true;
    }
    return false;
}

// Function to check if any of the two kings is unsafe or not
int checkBoard(char board[][8])
{
    // Find the position of both the kings
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // Check for all pieces which can attack White King
            if (board[i][j] == 'k')
            {
                // Check for Knight
                if (lookForHorse(board,'N', i, j))
                    return 1;

                // Check for Pawn
                if (lookForp(board,'P', i, j))
                    return 1;

                // Check for Rook
                if (lookForElephant(board,'R', i, j))
                    return 1;

                // Check for Bishop
                if (lookForCamel(board,'B', i, j))
                    return 1;

                // Check for Queen
                if (lookForQueen(board,'Q', i, j))
                    return 1;

                // Check for King
                if (lookForking(board,'K', i, j))
                    return 1;
            }

            // Check for all pieces which can attack Black King
            if (board[i][j] == 'K')
            {
                // Check for Knight
                if (lookForHorse(board,'n', i, j))
                    return 2;

                // Check for Pawn
                if (lookForp(board,'p', i, j))
                    return 2;

                // Check for Rook
                if (lookForElephant(board, 'r', i, j))
                    return 2;

                // Check for Bishop
                if (lookForCamel(board, 'b', i, j))
                    return 2;

                // Check for Queen
                if (lookForQueen(board, 'q', i, j))
                    return 2;

                // Check for King
                if (lookForking(board, 'k', i, j))
                    return 2;
            }
        }
    }
    return 0;
}

// Driver Code
int main()
{
    // Chessboard instance
    char board[][8] = {{'-', '-', '-', 'k', '-', '-', '-', '-'},
                       {'p', 'p', 'p', '-', 'p', 'p', 'p', 'p'},
                       {'-', '-', '-', '-', '-', 'b', '-', '-'},
                       {'-', '-', '-', 'R', '-', '-', '-', '-'},
                       {'-', '-', '-', '-', '-', '-', '-', '-'},
                       {'-', '-', '-', '-', '-', '-', '-', '-'},
                       {'P', '-', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'K', '-', '-', '-', '-', '-', '-', '-'}};

    if (checkBoard(board) == 0)
        cout << ("No king in danger");

    else if (checkBoard(board) == 1)
        cout << ("White king in danger");

    else
        cout << ("Black king in danger");
}
