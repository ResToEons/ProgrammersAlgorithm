#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int num = n;
    int bonusNum;
    int drinkNum;
    while (num >= a)
    {
        drinkNum = num - (num % a);
        bonusNum = (drinkNum / a) * b;

        num -= drinkNum;
        num += bonusNum;

        answer += bonusNum;
    }


    return answer;
}