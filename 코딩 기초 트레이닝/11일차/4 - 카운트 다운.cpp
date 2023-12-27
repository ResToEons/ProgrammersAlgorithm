#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;

    for (int i = 0; start - end >= i; i++)
    {
        answer.push_back(start - i);
    }

    return answer;
}