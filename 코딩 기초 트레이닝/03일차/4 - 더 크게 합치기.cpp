#include <string>
#include <vector>

using namespace std;

int pow(int a, int b)
{
    if (b > 1)
    {
        return a * pow(a, b - 1);
    }
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

    while (b > 9)
    {
        b = b / 10;
        bDigit++;
    }

    a = tempa;
    b = tempb;

    // a (+) b 
    aAns = a * pow(10, bDigit) + b;

    // b (+) a
    bAns = b * pow(10, aDigit) + a;

    if (aAns >= bAns)
    {
        answer = aAns;
    }
    else
    {
        answer = bAns;
    }

    return answer;
}