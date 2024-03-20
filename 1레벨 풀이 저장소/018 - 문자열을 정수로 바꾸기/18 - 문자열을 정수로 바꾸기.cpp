#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char equi = s[0];
    string temp;

    if (isdigit(equi) == 0)
    {
        for (int i = 1; s.length() > i; i++)
            temp += s[i];

        answer = stoi(temp);

        if (equi == '-')
            answer *= -1;
    }
    else
        answer = stoi(s);

    return answer;
}