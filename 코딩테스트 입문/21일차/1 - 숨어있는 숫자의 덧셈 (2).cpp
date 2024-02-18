#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    string temp = "";

    for (int i = 0; my_string.length() > i; i++)
    {
        if (my_string[i] >= 48 && my_string[i] <= 57)
        {
            temp += my_string[i];
        }
        else
        {
            if (temp == "")
            {
                // Do Nothing
                continue;
            }
            else
            {
                num = stoi(temp);
                answer += num;
            }

            temp = "";
        }
    }

    if (temp == "")
    {
        // Do Nothing
    }
    else
    {
        num = stoi(temp);
        answer += num;
    }

    return answer;
}