#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int cnt = 0;

    for (int i = left; right >= i; i++)
    {
        for (int j = 1; i >= j; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }

        if (cnt % 2 == 0)
            answer += i;
        else
            answer -= i;

        cnt = 0;
    }

    return answer;
}