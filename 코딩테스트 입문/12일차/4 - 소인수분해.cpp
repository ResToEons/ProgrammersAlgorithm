#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int m = n;
    int num = 2;
    bool isDup = false;

    while (m != 1)
    {
        if (m % num == 0)
        {
            m /= num;

            for (int i = 0; answer.size() > i; i++)
            {
                if (answer[i] == num)
                {
                    isDup = true;
                    break;
                }
            }

            if (!isDup)
            {
                answer.push_back(num);
            }

            num = 2;
            isDup = false;
        }
        else
        {
            num++;
        }
    }


    return answer;
}