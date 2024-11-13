#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int temp = 0;
    int maxR = 0;
    int maxC = 0;

    for (int i = 0; sizes.size() > i; i++)
    {
        if (sizes[i][0] < sizes[i][1])
        {
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }

    for (int i = 0; sizes.size() > i; i++)
    {
        if (sizes[i][0] > maxR)
            maxR = sizes[i][0];
        if (sizes[i][1] > maxC)
            maxC = sizes[i][1];
    }

    answer = maxR * maxC;

    return answer;
}