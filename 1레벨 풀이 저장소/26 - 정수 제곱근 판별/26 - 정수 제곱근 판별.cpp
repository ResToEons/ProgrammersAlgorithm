#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long checkNum = 1;
    long long sqrt = 1;

    while (n >= sqrt)
    {
        sqrt = checkNum * checkNum;

        if (sqrt == n)
        {
            answer = (checkNum + 1) * (checkNum + 1);
            return answer;
        }
        else
        {
            checkNum++;
        }
    }

    answer = -1;

    return answer;
}