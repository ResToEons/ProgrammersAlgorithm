#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    for (int i = 0; num_list.size() - 1 >= i; i++)
    {
        if (num_list[i] < 0)
        {
            return answer = i;
        }
    }

    if (answer == 0)
        answer = -1;

    return answer;
}