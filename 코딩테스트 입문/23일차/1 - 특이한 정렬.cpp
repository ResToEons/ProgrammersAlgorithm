#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    int absNum;
    int temp;
    int min;
    int idx;

    for (int i = 0; numlist.size() > i; i++)
    {
        min = abs(numlist[i] - n);
        idx = i;
        for (int j = i + 1; numlist.size() > j; j++)
        {
            temp = numlist[j] - n;
            temp = abs(temp);

            if (temp == min)
            {
                if (numlist[idx] > numlist[j])
                {
                }
                else
                {
                    min = temp;
                    idx = j;
                }
            }
            else if (temp < min)
            {
                min = temp;
                idx = j;
            }
            else
            {
            }
        }

        answer.push_back(numlist[idx]);

        temp = numlist[i];
        numlist[i] = numlist[idx];
        numlist[idx] = temp;
    }

    return answer;
}