#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int radix = 2;
    int num = 0;
    int cnt = 0;

    for (int i = bin1.length() - 1; i >= 0; i--)
    {
        if (bin1[i] == '1')
        {
            num += pow(2, cnt);
        }
        else
        {
            // Do Nothing
        }
        cnt++;
    }

    cnt = 0;

    for (int j = bin2.length() - 1; j >= 0; j--)
    {
        if (bin2[j] == '1')
        {
            num += pow(2, cnt);
        }
        else
        {
            // Do Nothing
        }
        cnt++;
    }

    if (num == 0)
    {
        answer = "0";
        return answer;
    }

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            answer.insert(0, "0");
        }
        else
        {
            answer.insert(0, "1");
        }

        num /= 2;
    }



    return answer;
}