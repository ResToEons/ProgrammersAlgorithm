#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    vector<int> nComDiv;
    vector<int> mComDiv;
    vector<int> nComMul;
    vector<int> mComMul;

    answer[1] = 1;

    // ����� ���ϱ�
    for (int i = 1; n >= i; i++)
    {
        if (n % i == 0)
            nComDiv.push_back(i);
    }

    for (int i = 1; m >= i; i++)
    {
        if (m % i == 0)
            mComDiv.push_back(i);
    }

    // �ִ����� ���ϱ�
    if (nComDiv.size() > mComDiv.size())
    {
        for (int i = 0; nComDiv.size() > i; i++)
        {
            for (int j = 0; mComDiv.size() > j; j++)
            {
                if (mComDiv[j] == nComDiv[i])
                {
                    answer[0] = mComDiv[j];
                }
            }
        }
    }
    else
    {
        for (int i = 0; mComDiv.size() > i; i++)
        {
            for (int j = 0; nComDiv.size() > j; j++)
            {
                if (nComDiv[j] == mComDiv[i])
                {
                    answer[0] = nComDiv[j];
                }
            }
        }
    }

    //�ִ����� ���ϱ� (�ִ����� = �ּҰ���� * ���μ��� n�� m)
    answer[1] = answer[0] * (m / answer[0]) * (n / answer[0]);

    return answer;
}