#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size());

    for (int i = 0; arr1.size() > i; i++)
    {
        for (int j = 0; arr1[i].size() > j; j++)
        {
            answer[i].push_back(arr1[i][j] + arr2[i][j]);
        }
    }

    return answer;
}