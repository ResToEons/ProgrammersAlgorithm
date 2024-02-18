#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int minX = 0;
    int maxX = 0;
    int minY = 0;
    int maxY = 0;

    //minX = (board.size() - 1) * -1;
    maxX = (board.size() - 1);
    //minY = (board[0].length() - 1) * -1;
    maxY = (board[0].size() - 1);

    for (int i = 0; board.size() > i; i++)
    {
        for (int j = 0; board[i].size() > j; j++)
        {
            // Bomb found
            if (board[i][j] == 1)
            {
                // up
                if (j >= maxY)
                {
                    if (board[i][maxY] == 0)
                        board[i][maxY] = 2;
                    else
                    {
                        // Do Nothing
                    }
                }
                else
                {
                    if (board[i][j + 1] == 0)
                        board[i][j + 1] = 2;
                }

                // down
                if (j <= 0)
                {
                    if (board[i][minY] == 0)
                        board[i][minY] = 2;
                    else
                    {
                        // Do Nothing
                    }
                }
                else
                {
                    if (board[i][j - 1] == 0)
                        board[i][j - 1] = 2;
                }

                // left
                if (i <= 0)
                {
                    if (board[minX][j] == 0)
                        board[minX][j] = 2;
                    else
                    {
                        // Do Nothing
                    }
                }
                else
                {
                    if (board[i - 1][j] == 0)
                        board[i - 1][j] = 2;
                }

                // right
                if (i >= maxX)
                {
                    if (board[maxX][j] == 0)
                        board[maxX][j] = 2;
                    else
                    {
                        // Do Nothing
                    }
                }
                else
                {
                    if (board[i + 1][j] == 0)
                        board[i + 1][j] = 2;
                }


                // right-up diag
                if (i >= maxX)
                {
                    if (j >= maxY)
                    {
                        if (board[maxX][maxY] == 0)
                            board[maxX][maxY] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[maxX][j + 1] == 0)
                            board[maxX][j + 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }
                else
                {
                    if (j >= maxY)
                    {
                        if (board[i + 1][maxY] == 0)
                            board[i + 1][maxY] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[i + 1][j + 1] == 0)
                            board[i + 1][j + 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }

                // left-up diag
                if (i <= 0)
                {
                    if (j >= maxY)
                    {
                        if (board[0][maxY] == 0)
                            board[0][maxY] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[0][j + 1] == 0)
                            board[0][j + 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }
                else
                {
                    if (j >= maxY)
                    {
                        if (board[i - 1][maxY] == 0)
                            board[i - 1][maxY] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[i - 1][j + 1] == 0)
                            board[i - 1][j + 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }
                // left-down diag
                if (i <= 0)
                {
                    if (j <= 0)
                    {
                        if (board[0][0] == 0)
                            board[0][0] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[0][j - 1] == 0)
                            board[0][j - 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }
                else
                {
                    if (j <= 0)
                    {
                        if (board[i - 1][0] == 0)
                            board[i - 1][0] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[i - 1][j - 1] == 0)
                            board[i - 1][j - 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }

                // right-down diag
                if (i >= maxX)
                {
                    if (j <= 0)
                    {
                        if (board[maxX][0] == 0)
                            board[maxX][0] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }
                else
                {
                    if (j <= 0)
                    {
                        if (board[i + 1][0] == 0)
                            board[i + 1][0] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                    else
                    {
                        if (board[i + 1][j - 1] == 0)
                            board[i + 1][j - 1] = 2;
                        else
                        {
                            // Do Nothing
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; board.size() > i; i++)
    {
        for (int j = 0; board[i].size() > j; j++)
        {
            if (board[i][j] == 0)
            {
                answer++;
            }
        }
    }
    return answer;
}