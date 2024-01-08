#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    answer.push_back(arr[0]);

    for (int i = 1; arr.size() > i; i++)
    {
        if (answer.empty())
            answer.push_back(arr[i]);

        else if (answer.back() == arr[i])
            answer.pop_back();

        else if (answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
        }

        else
        {
            // Do Nothing
        }
    }


    if (answer.empty())
        answer.push_back(-1);

    return answer;
}