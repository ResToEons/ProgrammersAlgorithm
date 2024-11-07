#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int cnt = 0;
    vector<int> answer;

    answer.push_back(arr[0]);

    for (int i = 0; arr.size() > i; i++)
    {
        if (answer[cnt] == arr[i])
        {
            // Do Nothing
        }
        else
        {
            answer.push_back(arr[i]);
            cnt++;
        }
    }

    return answer;
}