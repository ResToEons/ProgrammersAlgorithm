#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;

    for (int i = 0; num_list.size() > i; i++)
    {
        if (n == num_list[i])
        {
            answer = 1;
            break;
        }
    }

    return answer;
}