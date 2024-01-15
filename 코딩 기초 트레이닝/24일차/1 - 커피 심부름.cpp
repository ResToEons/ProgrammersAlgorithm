#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;

    for (int i = 0; order.size() > i; i++)
    {
        if (order[i].find("latte") != -1)
        {
            answer += 5000;
        }
        else
        {
            answer += 4500;
        }
    }

    return answer;
}