#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    vector<int> container;
    bool isSame = false;

    container.push_back(arr[0]);

    for (int i = 1; arr.size() > i; i++)
    {
        for (int j = 0; container.size() > j; j++)
        {
            if (container[j] == arr[i])
            {
                isSame = true;
            }
        }

        if (!isSame)
        {
            container.push_back(arr[i]);
        }
        else
        {
            isSame = false;
        }
    }

    for (int i = 0; k > i; i++)
    {
        if (container.size() > i)
            answer.push_back(container[i]);
        else
            answer.push_back(-1);
    }

    return answer;
}