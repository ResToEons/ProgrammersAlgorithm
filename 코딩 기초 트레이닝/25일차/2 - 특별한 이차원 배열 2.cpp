#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = -1;

    for (int i = 0; arr.size() > i; i++)
    {
        for (int j = 1; arr[i].size() > j; j++)
        {
            if (arr[i][j] == arr[j][i])
            {

            }
            else
            {
                answer = 0;
                break;
            }
        }

        if (answer != 0)
            answer = 1;
    }

    return answer;
}