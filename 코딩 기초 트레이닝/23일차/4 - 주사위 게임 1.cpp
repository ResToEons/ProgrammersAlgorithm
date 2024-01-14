#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;

    if (a > 6 || a < 1)
        return -1;
    if (b > 6 || b < 1)
        return -1;

    if (a % 2 == 1 && b % 2 == 1)
    {
        answer = a * a + b * b;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        if (a > b)
        {
            answer = a - b;
        }
        else
        {
            answer = b - a;
        }
    }
    else
    {
        answer = 2 * (a + b);
    }

    return answer;
}