#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    int temp = 0;

    for (int i = 0; queries.size() > i; i++)
    {
        temp = 0;

        temp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = temp;
    }

    answer = arr;

    return answer;
}