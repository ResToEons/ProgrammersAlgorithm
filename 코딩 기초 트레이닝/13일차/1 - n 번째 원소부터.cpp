#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;

    for (int i = n - 1; num_list.size() > i; i++)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}