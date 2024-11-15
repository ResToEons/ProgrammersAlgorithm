#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    int temp; // char 오버플로우 방지 위해 썼음

    for (int i = 0; s.length() > i; i++)
    {
        // 스페이스인 경우
        if (s[i] == ' ')
            continue;

        // 대문자인 경우
        if (s[i] >= 65 && s[i] <= 90)
        {
            temp = s[i] + n;
            if (temp > 90)
            {
                temp -= 26;
            }

            s[i] = temp;
        }
        // 소문자인 경우
        else if (s[i] >= 97 && s[i] <= 122)
        {
            temp = s[i] + n;

            if (temp > 122)
            {
                temp -= 26;
            }

            s[i] = temp;
        }
        else
        {
            // Do Nothing
        }

    }

    answer = s;

    return answer;
}