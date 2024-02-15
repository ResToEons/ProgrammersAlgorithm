#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -10001;

    if (numbers.size() == 2)
        answer = numbers[0] * numbers[1];
    else
    {
        for (int i = 0; numbers.size() > i; i++)
        {
            for (int j = i + 1; numbers.size() > j; j++)
            {
                if (answer < numbers[i] * numbers[j])
                {
                    answer = numbers[i] * numbers[j];
                }
            }
        }
    }


    return answer;
}