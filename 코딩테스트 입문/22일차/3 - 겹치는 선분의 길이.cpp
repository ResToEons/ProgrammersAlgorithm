#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    bool isAOn = false;
    bool isBOn = false;
    bool isCOn = false;
    int answer = 0;
    int min = 101;
    int max = -101;

    for (int i = 0; lines.size() > i; i++)
    {
        if (lines[i][0] < min)
            min = lines[i][0];
        if (lines[i][1] > max)
            max = lines[i][1];
    }

    for (int i = min; max > i; i++)
    {
        if (i >= lines[0][0] && i < lines[0][1])
        {
            isAOn = true;
        }
        if (i >= lines[1][0] && i < lines[1][1])
        {
            isBOn = true;
        }
        if (i >= lines[2][0] && i < lines[2][1])
        {
            isCOn = true;
        }

        if (isAOn)
        {
            if (isAOn == isBOn || isAOn == isCOn)
            {
                answer++;
            }
        }
        else if (isBOn)
        {
            if (isBOn == isAOn || isBOn == isCOn)
            {
                answer++;
            }
        }
        else if (isCOn)
        {
            if (isCOn == isAOn || isCOn == isBOn)
            {
                answer++;
            }
        }
        else
        {
            // Do Nothing
        }

        isAOn = false;
        isBOn = false;
        isCOn = false;
    }

    return answer;
}