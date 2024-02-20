#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    bool isTrue = true;
    int answer = 0;

    for (int i = 1; a >= i; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
    }

    if (b == 1)
        answer = 1;
    else
    {
        for (int i = 2; b >= i; i++)
        {
            if (b % i == 0)
            {
                if (i % 2 == 0 || i % 5 == 0)
                {
                    //b /= i;
                    // Do Nothing
                }
                else
                {
                    answer = 2;
                    isTrue = false;
                    break;
                }
            }
        }
        if (isTrue)
        {
            answer = 1;
        }
    }


    return answer;
}