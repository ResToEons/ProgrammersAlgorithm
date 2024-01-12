#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int numA = 0;
    int numB = 0;
    int num = 0;
    int numSum = 0;
    int digit = 0;
    int diffDigit = 0;

    bool isUpper = false;
    bool isABigger = false;

    string strTemp = "";
    char temp;

    if (a.size() >= b.size())
    {
        digit = a.size();
        diffDigit = a.size() - b.size();
        isABigger = true;
    }
    else
    {
        digit = b.size();
        diffDigit = b.size() - a.size();
        isABigger = false;
    }

    if (isABigger)
    {
        for (int i = 0; diffDigit > i; i++)
        {
            b.insert(0, "0");
        }
    }
    else
    {
        for (int i = 0; diffDigit > i; i++)
        {
            a.insert(0, "0");
        }
    }

    for (int i = digit - 1; i >= 0; i--)
    {
        numA = (a[i] - 48);
        numB = (b[i] - 48);

        numSum = numA + numB;

        if (isUpper == true)
        {
            numSum++;
        }

        if (numSum >= 10)
        {
            numSum -= 10;
            isUpper = true;
        }
        else
        {
            isUpper = false;
        }

        strTemp = to_string(numSum);

        answer += strTemp;
    }

    if (isUpper == true)
        answer += "1";

    for (int i = 0; answer.length() / 2 > i; i++)
    {
        temp = answer[answer.length() - i - 1];
        answer[answer.length() - i - 1] = answer[i];
        answer[i] = temp;
    }

    return answer;
}