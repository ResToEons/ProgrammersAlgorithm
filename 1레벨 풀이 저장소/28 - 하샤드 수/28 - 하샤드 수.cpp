#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int temp = x;
    bool answer = true;

    while (temp >= 1)
    {
        sum += (temp % 10);

        temp /= 10;
    }


    if (x % sum == 0)
        answer = true;
    else
        answer = false;

    return answer;
}