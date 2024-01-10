#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    int max = 0;
    int* arr = new int[31];
    int arrSize = 31;

    for (int i = 0; arrSize > i; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; strArr.size() > i; i++)
    {
        arr[strArr[i].size()]++;
    }

    for (int i = 0; arrSize > i; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    answer = max;

    return answer;
}