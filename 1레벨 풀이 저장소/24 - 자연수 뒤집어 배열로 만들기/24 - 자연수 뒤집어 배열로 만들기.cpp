#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; n >= i; i++)
    {
        if (n % i == 1)
        {
            answer = i;

            break;
        }
    }

    return answer;
}