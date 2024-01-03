#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int cnt = 0;
    bool isTrue = false;
    for_each(myString.begin(), myString.end(), [](auto& c)
        {
            c = tolower(c);
        });

    for_each(pat.begin(), pat.end(), [](auto& c)
        {
            c = tolower(c);
        });

    for (int i = 0; myString.size() > i; i++)
    {
        if (myString[i] == pat[cnt])
        {
            for (int j = 0; pat.size() > j; j++)
            {
                if (myString[i + j] == pat[j])
                {
                    isTrue = true;
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            if (isTrue == true)
                answer = 1;
        }
    }

    return answer;
}