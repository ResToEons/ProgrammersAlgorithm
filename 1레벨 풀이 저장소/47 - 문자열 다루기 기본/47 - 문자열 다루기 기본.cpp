#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.length() == 4 || s.length() == 6)
    {
        for (int i = 0; s.length() > i; i++)
        {
            if (isdigit(s[i]))
            {

            }
            else
            {
                answer = false;
            }
        }
    }
    else
    {
        answer = false;
    }

    return answer;
}