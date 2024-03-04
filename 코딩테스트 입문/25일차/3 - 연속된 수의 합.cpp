#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int x;
    int dist;

    if (num % 2 == 1)
    {
        x = total / num;
    }
    else
    {
        x = ((total + (num / 2)) / num);
    }

    dist = num / 2;

    for (int i = 0; num > i; i++)
    {
        answer.push_back(x - dist + i);
    }

    return answer;
}