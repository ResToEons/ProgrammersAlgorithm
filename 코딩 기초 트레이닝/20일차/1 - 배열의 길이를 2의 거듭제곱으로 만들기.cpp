#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int size = 2;
    int diffSize = 0;

    if (arr.size() == 1)
    {
        answer = arr;

        return answer;
    }

    while (arr.size() > size)
    {
        size *= 2;
    }

    diffSize = size - arr.size();

    answer = arr;

    for (int i = 0; diffSize > i; i++)
    {
        answer.push_back(0);
    }

    return answer;
}