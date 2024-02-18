#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int maxLength = 0;
    int minLength = 0;
    int tempMin = 0;

    if (sides[0] > sides[1])
    {
        minLength = sides[1];
        maxLength = sides[0];
        tempMin = sides[1];
    }
    else
    {
        minLength = sides[0];
        maxLength = sides[1];
        tempMin = sides[0];
    }

    minLength = maxLength - minLength + 1;

    for (int i = minLength; maxLength >= i; i++)
    {
        answer++;
    }

    for (int i = maxLength + 1; maxLength + tempMin > i; i++)
    {
        answer++;
    }

    return answer;
}