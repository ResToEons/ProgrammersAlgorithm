#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pCnt = 0, yCnt = 0;
    bool answer = true;

    for (int i = 0; s.length() > i; i++)
    {
        if (s[i] == 'p' || s[i] == 'P')
            pCnt++;
        else if (s[i] == 'y' || s[i] == 'Y')
            yCnt++;
        else
        {
            // Do Nothing
        }
    }

    if (pCnt == yCnt)
        answer = true;
    else
        answer = false;

    return answer;
}