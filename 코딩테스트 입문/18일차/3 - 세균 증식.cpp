#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = n;

    for (int i = 1; t >= i; i++)
    {
        answer *= 2;
    }

    return answer;
}