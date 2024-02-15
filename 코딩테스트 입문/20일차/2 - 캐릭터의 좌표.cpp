#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0;
    int y = 0;
    int minX = ((board[0]) / 2) * -1;
    int maxX = (board[0]) / 2;
    int minY = ((board[1]) / 2) * -1;
    int maxY = ((board[1]) / 2);

    for (int i = 0; keyinput.size() > i; i++)
    {
        if (keyinput[i] == "left")
        {
            if (x == minX)
                x = minX;
            else
                x--;
        }
        if (keyinput[i] == "right")
        {
            if (x == maxX)
                x = maxX;
            else
                x++;
        }
        if (keyinput[i] == "up")
        {
            if (y == maxY)
                y = maxY;
            else
                y++;
        }
        if (keyinput[i] == "down")
        {
            if (y == minY)
                y = minY;
            else
                y--;
        }
    }

    answer.push_back(x);
    answer.push_back(y);

    return answer;
}