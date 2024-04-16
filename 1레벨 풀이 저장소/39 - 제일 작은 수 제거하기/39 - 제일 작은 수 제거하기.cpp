#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 999999;
    int idx = 0;

    answer = arr;

    for (int i = 0; arr.size() > i; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }

    answer.erase(answer.begin() + idx);

    if (answer.empty())
        answer.push_back(-1);

    return answer;
}