// C++Program to count islands in 2D matrix
#include <bits/stdc++.h>
using namespace std;
int DFS(vector<vector<char>> &M, int i, int j, int ROW, int COL)
{
    if (i < 0 || j < 0 || i > (ROW - 1) || j > (COL - 1) || M[i][j] != '1')
    {
        return 0;
    }

    if (M[i][j] == '1')
    {
        M[i][j] = '0';
        DFS(M, i + 1, j, ROW, COL); 
        DFS(M, i - 1, j, ROW, COL); 
        DFS(M, i, j + 1, ROW, COL); 
        DFS(M, i, j - 1, ROW, COL); 
        return 1;
    }
}

int countIslands(vector<vector<char>> &M)
{
    int ROW = M.size();
    int COL = M[0].size();
    int count = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (M[i][j] == '1')
            {
                count += DFS(M, i, j, ROW, COL);
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<char>> M = {{'1', '1', '1', '1', '0'},
                              {'1', '1', '0', '1', '0'},
                              {'1', '1', '0', '0', '0'},
                              {'0', '0', '0', '0', '0'}};

    cout << "Number of islands is: \n"
         << countIslands(M);
    vector<vector<char>> N = {{'1', '1', '0', '0', '0'}, {'1', '1', '0', '0', '0'}, {'0', '0', '1', '0', '0'}, {'0', '0', '0', '1', '1'}};
    cout << "\n Number of islands is: \n"
         << countIslands(N);

    return 0;
}
