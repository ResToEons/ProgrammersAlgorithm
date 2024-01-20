#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int den3 = denom1 * denom2;
    int numer3 = numer1 * denom2 + numer2 * denom1;

    int num = 0;

    while (num != 2)
    {
        if (den3 > numer3)
        {
            for (int i = 2; den3 > i; i++)
            {
                if (numer3 % i == 0 && den3 % i == 0)
                {
                    den3 /= i;
                    numer3 /= i;
                    num++;
                    break;
                }
            }
        }
        else
        {
            for (int i = 2; numer3 > i; i++)
            {
                if (numer3 % i == 0 && den3 % i == 0)
                {
                    den3 /= i;
                    numer3 /= i;
                    num++;
                    break;
                }
            }
        }

        if (num != 0)
        {
            num = 0;
        }
        else
        {
            break;
        }
    }

    if (numer3 == den3)
    {
        numer3 = 1;
        den3 = 1;
    }

    answer.push_back(numer3);
    answer.push_back(den3);

    return answer;
}