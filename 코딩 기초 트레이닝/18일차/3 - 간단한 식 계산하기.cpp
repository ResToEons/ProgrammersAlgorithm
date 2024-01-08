#include <string>
#include <vector>

using namespace std;

enum Op {
    sum = 0,
    diff = 1,
    mul = 2
};

int solution(string binomial) {
    int answer = 0;

    Op op = sum;

    string temp = "";
    int numA = -1;
    int numB = -1;
    int idx = 0;

    for (int i = 0; binomial.size() > i; i++)
    {
        if (binomial[i] == '+')
        {
            op = sum;
            idx = i;
            break;
        }
        if (binomial[i] == '-')
        {
            op = diff;
            idx = i;
            break;
        }
        if (binomial[i] == '*')
        {
            op = mul;
            idx = i;
            break;
        }
    }

    for (int i = 0; binomial.size() > i; i++)
    {
        if (binomial[i] != ' ')
        {
            temp += binomial[i];
        }
        else
        {
            if (numA == -1)
            {
                numA = stoi(temp);
                i = idx + 1;
            }
            temp = "";
        }
    }

    numB = stoi(temp);

    switch (op)
    {
    case sum:
        answer = numA + numB;
        break;
    case diff:
        answer = numA - numB;
        break;
    case mul:
        answer = numA * numB;
        break;
    default:
        break;
    }

    return answer;
}