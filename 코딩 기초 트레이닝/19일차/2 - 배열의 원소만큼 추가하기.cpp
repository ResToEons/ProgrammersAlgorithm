#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    for (int i = 0; arr.size() > i; i++)
    {
        for (int j = 0; arr[i] > j; j++)
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}