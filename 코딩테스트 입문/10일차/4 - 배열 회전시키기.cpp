#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer(numbers.size());
    int temp = 0;

    if (direction == "right")
    {
        temp = numbers[numbers.size() - 1];

        for (int i = 0; numbers.size() - 1 > i; i++)
        {
            answer[i + 1] = numbers[i];
        }

        answer[0] = temp;
    }

    else
    {
        temp = numbers[0];

        for (int i = numbers.size() - 1; 0 < i; i--)
        {
            answer[i - 1] = numbers[i];
        }

        answer[numbers.size() - 1] = temp;
    }

    return answer;
}