#include <string>
#include <vector>
#include <cmath>

using namespace std;

int pow(int num)
{
    if (num > 2)
    {
        pow(num - 1);
    }
    else
    {
        return pow(num);
    }
}

int solution(string n_str) {
    int answer = 0;

    for (int i = 0; n_str.size() > i; i++)
    {
        answer += (n_str[i] - 48) * pow(10, n_str.size() - i - 1);
    }

    return answer;
}