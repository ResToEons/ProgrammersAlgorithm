#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;

    for (int i = 0; array.size() > i; i++)
    {
        if (height < array[i])
        {
            answer++;
        }
    }

    return answer;
}