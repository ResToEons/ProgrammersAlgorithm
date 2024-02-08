#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;

    for (int i = 0; s1.size() > i; i++)
    {
        for (int j = 0; s2.size() > j; j++)
        {
            if (s1[i] == s2[j])
            {
                answer++;
            }
        }
    }

    return answer;
}