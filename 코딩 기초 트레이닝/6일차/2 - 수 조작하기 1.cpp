#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;

    answer = n;

    for (int i = 0; control.length() > i; i++)
    {
        switch (control[i])
        {
        case 'w':
            answer++;
            break;
        case 's':
            answer--;
            break;
        case 'a':
            answer -= 10;
            break;
        case 'd':
            answer += 10;
            break;
        }
    }

    return answer;
}