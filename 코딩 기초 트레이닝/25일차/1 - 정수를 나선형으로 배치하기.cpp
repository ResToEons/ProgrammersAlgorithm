#include <string>
#include <vector>

using namespace std;

enum Direction
{
    RIGHT = 0,
    DOWN = 1,
    LEFT = 2,
    UP = 3
};

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n);
    int num = 1;
    int x = 0;
    int y = 0;
    int changeRight = 0;
    int changeDown = 0;
    int changeLeft = 0;
    int changeUp = 1;

    Direction dir;

    dir = RIGHT;

    for (int i = 0; n > i; i++)
    {
        for (int j = 0; n > j; j++)
        {
            answer[i].push_back(0);
        }
    }

    while (n * n >= num)
    {
        switch (dir)
        {
        case RIGHT:
            answer[y][x] = num;
            num++;
            x++;
            if (x >= n - changeRight)
            {
                dir = DOWN;
                changeRight++;

                x = n - changeRight;

                y = changeRight;
            }
            break;
        case DOWN:
            answer[y][x] = num;
            num++;
            y++;
            if (y >= n - changeDown)
            {
                dir = LEFT;
                changeDown++;

                y = n - changeDown;

                x = n - changeDown - 1;
            }
            break;
        case LEFT:
            answer[y][x] = num;
            num++;
            x--;
            if (x < 0 + changeLeft)
            {
                dir = UP;

                x = changeLeft;

                changeLeft++;

                y = n - changeLeft - 1;

            }
            break;
        case UP:
            answer[y][x] = num;
            num++;
            y--;
            if (y < 0 + changeUp)
            {
                dir = RIGHT;

                x = changeUp;

                y = changeUp;

                changeUp++;
            }
            break;
        default:
            break;
        }
    }

    return answer;

}