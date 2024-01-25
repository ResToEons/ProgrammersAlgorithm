#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;

    for (int i = 0; numbers.size() > i; i++)
    {
        answer += numbers[i];
    }

    answer /= numbers.size();

    return answer;
}