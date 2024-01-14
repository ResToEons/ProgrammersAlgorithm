#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;

    bool isSame = false;
    int temp = 0;

    for (int i = 0; str2.length() > i; i++)
    {
        if (str2[i] == str1[temp])
        {
            for (int j = 1; str1.length() > j; j++)
            {
                if (str2[i + j] == str1[j])
                {

                }
                else
                {
                    isSame = true;
                }
            }

            if (!isSame)
            {
                answer = 1;
                break;
            }
            else
            {
                isSame = false;
                temp = 0;
            }
        }
    }

    return answer;
}