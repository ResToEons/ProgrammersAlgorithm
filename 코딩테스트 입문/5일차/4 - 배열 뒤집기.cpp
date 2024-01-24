#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    for (int i = num_list.size() - 1; 0 <= i; i--)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}