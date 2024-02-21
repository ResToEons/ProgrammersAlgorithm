#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    int temp;
    int initDigit = 1;

    for (int l = i; j >= l; l++)
    {
        temp = l;

        while (temp >= 10)
        {
            if (temp % 10 == k)
            {
                answer++;
            }

            temp /= 10;
        }

        if (temp == k)
            answer++;
    }

    return answer;
}