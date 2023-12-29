#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;

    int num = -1;
    bool isLeft = true;

    for (int i = 0; str_list.size() > i; i++)
    {
        if (str_list[i] == "l")
        {
            num = i;
            isLeft = true;
            break;
        }

        if (str_list[i] == "r")
        {
            num = i;
            isLeft = false;
            break;
        }
    }

    if (num == -1)
    {
        return answer;
    }

    if (isLeft)
    {
        for (int i = 0; num > i; i++)
        {
            answer.push_back(str_list[i]);
        }
    }
    else
    {
        for (int i = num + 1; str_list.size() > i; i++)
        {
            answer.push_back(str_list[i]);
        }
    }


    return answer;
}