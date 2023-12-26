#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;

    if (a < 1 || a > 100)
        return -1;
    if (d < 1 || d > 100)
        return -1;
    if (included.size() < 1 || included.size() > 100)
        return -1;

    for (int i = 0; included.size() > i; i++)
    {
        if (included[i] == true)
            answer = answer + (a + (d * i));
    }

    return answer;
}