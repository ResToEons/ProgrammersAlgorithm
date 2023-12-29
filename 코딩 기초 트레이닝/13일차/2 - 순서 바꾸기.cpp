#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;

    for (int i = n; num_list.size() > i; i++)
    {
        answer.push_back(num_list[i]);
    }

    for (int i = 0; n > i; i++)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}