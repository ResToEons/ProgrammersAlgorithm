#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    char temp = ' ';

    for (int i = 0; s.length() > i; i++)
    {
        for (int j = i + 1; s.length() > j; j++)
        {
            if (s[i] < s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    answer = s;

    return answer;
}