#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max1 = 0;
    int max2 = 0;
    int temp = 0;

    for (int i = 0; numbers.size() > i; i++)
    {
        if (numbers[i] > max1)
        {
            max1 = numbers[i];
        }
    }

    for (int i = 0; numbers.size() > i; i++)
    {
        if (numbers[i] > max2)
        {
            temp = numbers[i];
            if (max1 == temp)
            {

            }
            else
            {
                max2 = numbers[i];
            }
        }
    }

    if (max2 == 0)
        max2 = temp;

    answer = max1 * max2;

    return answer;
}