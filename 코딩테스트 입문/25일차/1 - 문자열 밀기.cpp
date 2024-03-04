#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    char temp;
    int answer = 0;
    int strLength = A.length();
    string C;

    for (int i = 0; strLength > i; i++)
    {
        if (A == B)
        {
            break;
        }
        else
        {
            answer++;

            temp = A[strLength - 1];
            C.push_back(temp);

            for (int j = 0; strLength - 1 > j; j++)
            {
                C.push_back(A[j]);
            }
        }

        A = C;
        C = "";
    }

    if (answer == strLength)
    {
        answer = -1;
    }

    return answer;
}