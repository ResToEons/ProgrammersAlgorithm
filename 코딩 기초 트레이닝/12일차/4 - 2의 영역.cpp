#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int cnt = 0;
    int min = -1;
    int max = -1;

    for (int i = 0; arr.size() - 1 >= i; i++)
    {
        if (arr[i] == 2 && min == -1)
        {
            min = i;
            max = min;
        }
        else if (arr[i] == 2)
        {
            max = i;
        }
    }

    for (int i = min; max >= i; i++)
    {
        if (min == -1 && max == -1)
            answer.push_back(-1);
        else
            answer.push_back(arr[i]);
    }



    return answer;
}