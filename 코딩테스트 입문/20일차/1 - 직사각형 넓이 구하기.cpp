#include <string>
#include <vector>
#include <math.h>

using namespace std;

// 길이 공식: root((x2-x1)^2 + (y2 -y1)^2)

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int height = 1;
    int width = 1;

    if (dots[0][0] == dots[1][0])
    {
        height = sqrt((dots[0][0] - dots[1][0]) * (dots[0][0] - dots[1][0]) + (dots[0][1] - dots[1][1]) * (dots[0][1] - dots[1][1]));

        if (dots[0][1] == dots[2][1])
        {
            width = sqrt((dots[0][0] - dots[2][0]) * (dots[0][0] - dots[2][0]) + (dots[0][1] - dots[2][1]) * (dots[0][1] - dots[2][1]));
        }
        else
        {
            width = sqrt((dots[0][0] - dots[3][0]) * (dots[0][0] - dots[3][0]) + (dots[0][1] - dots[3][1]) * (dots[0][1] - dots[3][1]));
        }
    }
    else if (dots[0][0] == dots[2][0])
    {
        height = sqrt((dots[0][0] - dots[2][0]) * (dots[0][0] - dots[2][0]) + (dots[0][1] - dots[2][1]) * (dots[0][1] - dots[2][1]));

        if (dots[0][1] == dots[1][1])
        {
            width = sqrt((dots[0][0] - dots[1][0]) * (dots[0][0] - dots[1][0]) + (dots[0][1] - dots[1][1]) * (dots[0][1] - dots[1][1]));
        }
        else
        {
            width = sqrt((dots[0][0] - dots[3][0]) * (dots[0][0] - dots[3][0]) + (dots[0][1] - dots[3][1]) * (dots[0][1] - dots[3][1]));
        }
    }
    else if (dots[0][0] == dots[3][0])
    {
        height = sqrt((dots[0][0] - dots[3][0]) * (dots[0][0] - dots[3][0]) + (dots[0][1] - dots[3][1]) * (dots[0][1] - dots[3][1]));

        if (dots[0][1] == dots[1][1])
        {
            width = sqrt((dots[0][0] - dots[1][0]) * (dots[0][0] - dots[1][0]) + (dots[0][1] - dots[1][1]) * (dots[0][1] - dots[1][1]));
        }
        else
        {
            width = sqrt((dots[0][0] - dots[2][0]) * (dots[0][0] - dots[2][0]) + (dots[0][1] - dots[2][1]) * (dots[0][1] - dots[2][1]));
        }
    }
    else
    {
        // Do Nothing
    }
    answer = height * width;

    return answer;
}