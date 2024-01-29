#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());

    int max = -1;
    int idx = 0;

    for (int j = 1; emergency.size() >= j; j++)
    {
        for (int i = 0; emergency.size() > i; i++)
        {
            if (max < emergency[i])
            {
                max = emergency[i];
                idx = i;
            }
        }

        answer[idx] = j;
        emergency[idx] = 0;
        max = -1;

    }


    return answer;
}