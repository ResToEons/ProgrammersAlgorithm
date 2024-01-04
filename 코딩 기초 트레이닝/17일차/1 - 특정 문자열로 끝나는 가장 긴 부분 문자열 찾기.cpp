#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";

    int checkNum = 0;
    bool isSame = false;

    for (int i = 0; myString.size() > i; i++)
    {
        if (myString[i] == pat[0])
        {
            for (int j = 0; pat.size() > j; j++)
            {
                if (myString[i + j] == pat[j])
                {
                    checkNum++;
                }
                else
                {
                    break;
                }
            }
            if (checkNum == pat.size())
            {
                answer = "";
                for (int k = 0; i + pat.size() > k; k++)
                {
                    answer += myString[k];
                }
            }
            checkNum = 0;
        }
    }

    return answer;
}