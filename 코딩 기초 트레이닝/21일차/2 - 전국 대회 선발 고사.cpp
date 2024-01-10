#include <string>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int a = -1;
    int b = -1;
    int c = -1;

    for (int i = 1; rank.size() >= i; i++)
    {
        for (int j = 0; rank.size() > j; j++)
        {
            if (rank[j] == i && attendance[j] == true)
            {
                if (a == -1)
                {
                    answer += 10000 * j;
                    a = j;
                    break;
                }
                else if (b == -1)
                {
                    answer += 100 * j;
                    b = j;
                    break;
                }
                else if (c == -1)
                {
                    answer += j;
                    c = j;

                    break;
                }
                else
                {
                    break;
                }
            }
            else
            {
                // Do Nothing
            }
        }

        if (c != -1)
            break;
    }
    return answer;
}