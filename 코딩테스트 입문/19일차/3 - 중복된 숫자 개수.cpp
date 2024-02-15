#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;

    for (int i = 0; array.size() > i; i++)
    {
        if (array[i] == n)
        {
            answer++;
        }
    }

    return answer;
}