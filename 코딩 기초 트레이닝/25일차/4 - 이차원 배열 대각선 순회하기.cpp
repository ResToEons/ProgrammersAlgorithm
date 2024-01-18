#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;

    for (int y = 0; board.size() > y; y++)
    {
        for (int x = 0; board[0].size() > x; x++)
        {
            if (k >= x + y)
            {
                answer += board[y][x];
            }
        }
    }

    return answer;
}