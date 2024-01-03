#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int tempCnt = 0;
    bool isSame = false;

    while (!isSame)
    {
        for (int i = 0; arr.size() > i; i++)
        {
            if (arr[i] >= 50 && arr[i] % 2 == 0)
            {
                arr[i] /= 2;
                tempCnt++;
            }
            else if (arr[i] < 50 && arr[i] % 2 == 1)
            {
                arr[i] = arr[i] * 2 + 1;
                tempCnt++;
            }
            else
            {
                // arr[i] = arr[i];
            }
        }

        if (tempCnt != 0)
        {
            tempCnt = 0;
            answer++;
            isSame = false;
        }
        else
        {
            isSame = true;
        }
    }


    return answer;
}