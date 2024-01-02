#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;

    for (int i = 0; numbers.size() > i; i++)
    {
        if (n >= answer)
        {
            answer += numbers[i];
        }
        else
            break;
    }

    return answer;
}