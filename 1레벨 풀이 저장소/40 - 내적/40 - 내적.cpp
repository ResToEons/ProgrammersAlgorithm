#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;

    for (int i = 0; a.size() > i; i++)
    {
        answer += (a[i] * b[i]);
    }

    return answer;
}