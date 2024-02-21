#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int serve = 0;
    int leftOver = 0;

    while (chicken != 0)
    {
        if (chicken >= 10)
        {
            answer += (chicken / 10);
            serve = chicken / 10;
            leftOver += (chicken - (serve * 10));

            chicken /= 10;

        }
        else
        {
            leftOver += chicken;
            chicken = 0;
        }
    }

    while (leftOver >= 10)
    {
        leftOver -= 10;
        answer++;
        leftOver++;
    }

    return answer;
}