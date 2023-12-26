#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    int temp;
    int min = 1000001;

    for (int j = 0; queries.size() > j; j++)
    {
        for (int i = queries[j][0]; queries[j][1] >= i; i++)
        {
            if (queries[j][2] < arr[i] && arr[i] < min)
            {
                min = arr[i];
            }
        }

        if (min == 1000001)
            answer.push_back(-1);
        else
            answer.push_back(min);

        min = 1000001;
    }

    return answer;
}