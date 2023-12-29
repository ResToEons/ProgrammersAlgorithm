#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;

    for (int i = 0; num_list.size() > i; i++)
    {
        if (i % n == 0)
        {
            answer.push_back(num_list[i]);
        }
    }

    return answer;
}