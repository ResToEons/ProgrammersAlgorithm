#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int mul = 1;

    while (n >= mul)
    {
        answer++;

        mul *= answer;
    }

    if (n != mul)
        answer--;

    return answer;
}