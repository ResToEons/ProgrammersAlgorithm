#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    if (n > 1000 || n < 1)
    {
        answer.push_back(n);

        return answer;
    }

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            answer.push_back(n);
            n /= 2;
        }
        else
        {
            answer.push_back(n);
            n = (3 * n) + 1;
        }
    }

    answer.push_back(n);

    return answer;
}