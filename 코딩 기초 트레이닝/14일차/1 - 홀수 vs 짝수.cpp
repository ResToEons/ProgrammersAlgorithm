#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    int even = 0;
    int odd = 0;

    for (int i = 1; num_list.size() >= i; i++)
    {
        if (i % 2 == 0)
        {
            even += num_list[i - 1];
        }
        else
            odd += num_list[i - 1];
    }

    if (odd > even)
        answer = odd;
    else
        answer = even;

    return answer;
}