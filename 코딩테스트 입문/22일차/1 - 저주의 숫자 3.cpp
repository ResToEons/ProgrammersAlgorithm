#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;

    for (int i = 1; n >= i; i++)
    {
        answer++;

        while (answer % 3 == 0 || answer % 10 == 3 || (answer / 10) % 10 == 3)
            answer++;
    }

    return answer;
}