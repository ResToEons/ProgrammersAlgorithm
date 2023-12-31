#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n % 2 == 1)
    {
        while (n >= 1)
        {
            answer = answer + n;
            n = n - 2;
        }
    }
    else
    {
        while (n > 0)
        {
            answer = answer + (n * n);
            n = n - 2;
        }
    }

    return answer;
}