#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = n;
    int leftOver = 0;

    while (num != 0)
    {
        leftOver = num % 10;

        answer += leftOver;

        num /= 10;
    }

    return answer;
}