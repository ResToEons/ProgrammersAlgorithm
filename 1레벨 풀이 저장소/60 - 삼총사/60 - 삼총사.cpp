#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int sum = 0;
    int temp = 0;

    std::sort(number.begin(), number.end());

    for (int i = 0; number.size() > i; i++)
    {
        sum = number[i];

        for (int j = 1 + i; number.size() - 1 > j; j++)
        {
            sum += number[j];

            for (int k = 1 + j; number.size() > k; k++)
            {
                sum += number[k];

                cout << sum << " ";

                if (sum == 0)
                {
                    answer++;
                }

                sum -= number[k];
            }
            sum -= number[j];
        }
    }

    return answer;
}