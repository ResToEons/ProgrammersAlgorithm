#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int temp = 0;
    int min = 999;
    int minCnt = 0;
    int idx = 0;

    vector<int> arr;

    for (int i = 0; array.size() > i; i++)
    {
        temp = array[i] - n;

        if (temp < 0)
            temp *= -1;

        arr.push_back(temp);

    }

    for (int i = 0; arr.size() > i; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            answer = array[i];
            idx = i;
        }
    }

    for (int i = 0; arr.size() > i; i++)
    {
        if (arr[i] == min && i != idx)
        {
            if (array[i] > array[idx])
            {
                answer = array[idx];
            }
            else
            {
                answer = array[i];
            }
        }
    }
    return answer;
}