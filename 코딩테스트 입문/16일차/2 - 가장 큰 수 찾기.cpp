#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {

    int max = -1;
    int idx = -1;
    int arrayLength = array.size();
    vector<int> answer;

    for (int i = 0; arrayLength > i; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            idx = i;
        }
    }

    answer.push_back(max);
    answer.push_back(idx);

    return answer;
}