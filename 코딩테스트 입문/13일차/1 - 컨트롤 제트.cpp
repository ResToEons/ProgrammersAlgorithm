#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int idx = 0;
    int strToInt = 0;
    string temp;

    for (int i = 0; s.length() > i; i++)
    {
        if (s[i] == ' ')
        {
            for (int j = idx; i > j; j++)
            {
                temp += s[j];
            }

            if (temp == "Z")
            {
                answer -= strToInt;
            }
            else
            {
                strToInt = stoi(temp);

                answer += strToInt;
            }

            temp = "";
            idx = i + 1;
        }
        else
        {

        }
    }

    for (int j = idx; s.length() > j; j++)
    {
        temp += s[j];
    }

    if (temp == "Z")
    {
        answer -= strToInt;
    }
    else
    {
        strToInt = stoi(temp);

        answer += strToInt;
    }

    return answer;
}