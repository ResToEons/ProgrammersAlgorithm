#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int arrSize = 0;
    int vectorSize = 0;

    answer = arr;

    vectorSize = arr.size();
    arrSize = arr[0].size();

    if (arrSize > vectorSize)
    {
        answer.resize(arrSize, vector<int>(arrSize));
    }

    if (vectorSize > arrSize)
    {
        for (int i = 0; vectorSize > i; i++)
        {
            for (int j = 0; vectorSize - arrSize > j; j++)
            {
                answer[i].push_back(0);
            }
        }
    }

    return answer;
}