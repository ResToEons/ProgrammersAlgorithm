#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    int mul = 1;
    int exp = 0;

    if (num_list.size() > 10 || num_list.size() < 2)
        return -1;

    for (int i = 0; num_list.size() > i; i++)
    {
        mul *= num_list[i];
        exp += num_list[i];
    }

    exp = exp * exp;

    if (mul < exp)
        return 1;
    else
        return 0;

    return answer;
}