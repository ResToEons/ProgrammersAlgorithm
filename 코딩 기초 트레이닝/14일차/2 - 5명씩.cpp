#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;

    for (int i = 0; names.size() > i; i++)
    {
        if (i % 5 == 0)
            answer.push_back(names[i]);
    }

    return answer;
}