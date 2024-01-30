#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;

    for (int i = 1; k > i; i++)
    {
        answer += 2;

        if (answer > numbers.size())
        {
            answer = answer - numbers.size();
        }
    }

    answer = numbers[answer];

    return answer;
}