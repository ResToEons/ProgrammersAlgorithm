#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    int num = order;
    int temp = 0;

    while (num > 1)
    {
        temp = num % 10;

        if (temp != 0 && temp % 3 == 0)
            answer++;

        num /= 10;
    }


    return answer;
}