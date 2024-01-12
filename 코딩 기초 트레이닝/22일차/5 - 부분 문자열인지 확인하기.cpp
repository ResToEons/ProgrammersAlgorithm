#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    int length = my_string.length() - target.length();
    bool isSame = false;

    for (int i = 0; length >= i; i++)
    {
        if (target[0] == my_string[i])
        {
            for (int j = 0; target.length() > j; j++)
            {
                if (my_string[i + j] == target[j])
                {
                    isSame = true;
                }
                else
                {
                    isSame = false;
                    break;
                }
            }

            if (isSame)
            {
                answer = 1;

                break;
            }
            else
                answer = 0;
        }
    }

    return answer;
}