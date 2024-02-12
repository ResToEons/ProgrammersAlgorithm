#include <string>
#include <vector>
#define NUM_MAX_SIZE 7
using namespace std;

int solution(int num, int k) {
    int answer = 0;
    int number = num;
    int leftOver = 0;
    int numArr[NUM_MAX_SIZE];
    int numSize = 0;
    int temp = 0;

    while (number != 0)
    {
        leftOver = number % 10;
        numArr[numSize] = leftOver;
        number /= 10;

        numSize++;
    }

    for (int i = 0; numSize > i; i++)
    {
        if (k == numArr[i])
        {
            answer = numSize - i;
        }
    }

    if (answer == 0)
        answer = -1;

    return answer;
}