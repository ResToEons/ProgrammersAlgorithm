#include <string>
#include <vector>

using namespace std;

int pow(int a, int b)
{
    if (b == 0)
        return 1;

    if (b > 1)
    {
        return a * pow(a, b - 1);
    }
    else
        return a;
}

int solution(vector<int> num_list) {
    int answer = 0;

    vector<int> even_list;
    vector<int> odd_list;

    if (num_list.size() > 10 || num_list.size() < 2)
        return -1;

    for (int i = 0; num_list.size() > i; i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even_list.push_back(num_list[i]);
        }
        else
        {
            odd_list.push_back(num_list[i]);
        }
    }

    for (int i = 0; even_list.size() > i; i++)
    {
        answer += even_list[i] * pow(10, even_list.size() - 1 - i);
    }

    for (int i = 0; odd_list.size() > i; i++)
    {
        answer += odd_list[i] * pow(10, odd_list.size() - 1 - i);
    }

    return answer;
}