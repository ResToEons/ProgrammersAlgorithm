#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;

    vector<string> answer1;

    string temp = "";
    int cnt = 0;

    for (int i = 0; my_string.size() > i; i++)
    {
        for (int j = 0; my_string.size() > j + i; j++)
        {
            temp += my_string[j + i];
        }

        answer1.push_back(temp);

        temp = "";
    }

    for (int i = 0; my_string.size() > i; i++)
    {
        if (answer1[i] == is_suffix)
            answer = 1;
        else
        {
        }
    }

    return answer;
}