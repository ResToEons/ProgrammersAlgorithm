#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double answer = 0;
    double numA = num1;
    double numB = num2;

    answer = (numA / numB) * 1000;

    return answer;
}