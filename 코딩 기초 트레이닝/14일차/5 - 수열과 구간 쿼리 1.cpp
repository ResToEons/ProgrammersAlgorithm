#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int i = 0; queries.size() > i; i++)
    {
        for (int j = queries[i][0]; queries[i][1] >= j; j++)
        {
            arr[j]++;
        }
    }

    answer = arr;

    return answer;
}