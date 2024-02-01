#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int temp;
    int min = 10;
    int idx;

    for (int i = 0; my_string.length() > i; i++)
    {
        if (isdigit(my_string[i]) != 0)
        {
            answer.push_back(my_string[i] - 48);
        }
    }

    for (int i = 0; answer.size() > i; i++)
    {

        min = answer[i];

        for (int j = i; answer.size() > j; j++)
        {
            if (min > answer[j])
            {
                min = answer[j];
                idx = j;
            }
        }

        if (min == answer[i])
        {

        }
        else
        {
            temp = answer[i];
            answer[i] = min;
            answer[idx] = temp;
        }

    }

    return answer;
}