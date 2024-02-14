#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int number = 1;
    int sqrt = 1;
    while (n > number)
    {
        if (n == sqrt)
        {
            answer = 1;
            break;
        }
        else
        {
            number++;
            sqrt = number * number;
        }
    }

    if (answer == 0)
        answer = 2;

    return answer;
}