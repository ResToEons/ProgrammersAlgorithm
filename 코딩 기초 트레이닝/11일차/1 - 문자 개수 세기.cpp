#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;

    for (int i = 0; 52 > i; i++)
    {
        answer.push_back(0);
    }

    for (int i = 0; my_string.length() > i; i++)
    {
        int temp = 0;

        if (my_string[i] >= 65 && my_string[i] <= 91)
            temp = my_string[i] - 65;
        else
            temp = my_string[i] - 71;

        answer[temp]++;

    }

    return answer;
}