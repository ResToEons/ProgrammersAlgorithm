#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> common) {
    bool isArithSeq = true;
    int answer = 0;
    int vSize = common.size();
    float d;
    float r;
    // 등차수열 공식: an = a + (n-1)d
    // 등비수열 공식: an = ar^(n-1)

    d = common[1] - common[0];
    for (float i = 2; vSize > i; i++)
    {
        if (d == (float(common[i] - common[0])) / (i))
        {
            continue;
        }
        else
        {
            isArithSeq = false;
            break;
        }
    }

    if (common[0] != 0)
    {
        r = common[1] / common[0];
    }
    else
    {
        r = 0;
    }

    if (isArithSeq)
    {
        answer = common[vSize - 1] + d;
    }
    else
    {
        answer = common[vSize - 1] * r;
    }
    return answer;
}