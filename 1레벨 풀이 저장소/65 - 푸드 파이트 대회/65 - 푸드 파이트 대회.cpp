#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int sum = food[0]; // 항상 1이다

    // 음식 수 짝수로 만들기
    for (int i = 1; food.size() > i; i++)
    {
        if (food[i] % 2 == 1)
            food[i]--;

        sum += food[i];
    }

    for (int i = 1; food.size() > i; i++)
    {
        for (int j = 0; food[i] / 2 > j; j++)
        {
            answer += to_string(i);
        }
    }

    answer += "0";

    for (int i = food.size() - 1; i >= 0; i--)
    {
        for (int j = 0; food[i] / 2 > j; j++)
        {
            answer += to_string(i);
        }
    }

    return answer;
}