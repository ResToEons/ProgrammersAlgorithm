#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;

    for (int i = 1; n >= i; i++)
    {
        for (int j = 1; i >= j; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }

            if (cnt >= 3)
            {
                break;
            }
        }

        if (cnt >= 3)
        {
            answer++;
        }
        else
        {

        }

        cnt = 0;
    }

    return answer;
}