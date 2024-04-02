#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if (a < b)
    {
        for (long long i = a; b >= i; i++)
            answer += i;
    }
    else
    {
        for (long long i = b; a >= i; i++)
            answer += i;
    }

    return answer;
}