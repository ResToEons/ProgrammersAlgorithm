#include <string>
#include <vector>

using namespace std;

int DecToBinary(int n)
{
    string arr = "";

    int temp = n;
    int tempArr[100] = {};
    int idx = 0;
    int ans = 0;

    while (temp != 1)
    {
        tempArr[idx] = temp % 2;

        idx++;

        temp /= 2;
    }

    tempArr[idx] = temp;

    for (int i = idx; i >= 0; i--)
    {
        arr = arr + to_string(tempArr[i]);
    }

    ans = stoi(arr);

    return ans;
}


vector<int> solution(int l, int r) {
    vector<int> answer;

    int bitCnt = 1;
    int binaryNum = 1;

    for (int i = 0; l > i; i++)
    {
        if (i == binaryNum * 5)
        {
            bitCnt++;

            binaryNum = DecToBinary(bitCnt);
        }
    }

    for (int i = l; r >= i; i++)
    {
        if (i == binaryNum * 5)
        {
            answer.push_back(i);
            bitCnt++;

            binaryNum = DecToBinary(bitCnt);
        }
    }

    if (answer.size() == 0)
        answer.push_back(-1);

    return answer;
}