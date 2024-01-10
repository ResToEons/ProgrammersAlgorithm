#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;

    bool isOdd = false;

    if (arr.size() % 2 == 0)
        isOdd = false;
    else
        isOdd = true;

    if (isOdd)
    {
        for (int i = 0; arr.size() > i; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] += n;
            }
        }
    }
    else
    {
        for (int i = 0; arr.size() > i; i++)
        {
            if (i % 2 == 1)
            {
                arr[i] += n;
            }
        }
    }

    answer = arr;

    return answer;
}