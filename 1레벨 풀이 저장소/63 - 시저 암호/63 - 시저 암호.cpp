#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    int temp; // char �����÷ο� ���� ���� ����

    for (int i = 0; s.length() > i; i++)
    {
        // �����̽��� ���
        if (s[i] == ' ')
            continue;

        // �빮���� ���
        if (s[i] >= 65 && s[i] <= 90)
        {
            temp = s[i] + n;
            if (temp > 90)
            {
                temp -= 26;
            }

            s[i] = temp;
        }
        // �ҹ����� ���
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