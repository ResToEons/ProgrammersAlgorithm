#include <string>
#include <vector>

using namespace std;

int pow(int a, int b)
{
    if (b > 1)
        return a * pow(a, b - 1);
    else
        return a;
}

int solution(int a, int b) {
    int answer = 0;
    int aDigit = 1;
    int bDigit = 1;
    int tempa = a;
    int tempb = b;

    int aAns;
    int bAns;

    while (a > 9)
    {
        a = a / 10;
        aDigit++;
    }

    a = tempa;

    while (b > 9)
    {
        b = b / 10;
        bDigit++;
    }

    b = tempb;

    aAns = a * pow(10, bDigit) + b;

    bAns = a * b * 2;

    if (aAns >= bAns)
        answer = aAns;
    else
        answer = bAns;

    return answer;
}