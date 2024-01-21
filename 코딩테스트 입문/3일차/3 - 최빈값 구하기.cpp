#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int max = 0;
    int idx = 0;
    bool isSame = false;

    vector<int> tempArr(1000);

    for (int i = 0; 1000 > i; i++)
    {
        tempArr[i] = 0;
    }

    for (int i = 0; array.size() > i; i++)
    {
        tempArr[array[i]]++;
    }

    for (int i = 0; 1000 > i; i++)
    {
        if (tempArr[i] == max && max > 0)
        {
            isSame = true;
        }

        if (tempArr[i] > max)
        {
            max = tempArr[i];
            idx = i;

            isSame = false;
        }
    }

    if (isSame)
        answer = -1;
    else
        answer = idx;

    return answer;
}