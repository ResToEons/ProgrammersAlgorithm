#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> stk;
    int min = 2001;

    // ������ Ǯ�� �̻� �� ���
    if (k < score.size())
    {
        // Ǯ ������ �ƴ� ��
        for (int i = 0; k > i; i++)
        {
            if (stk.empty())
            {
                stk.push_back(score[i]);
                min = score[i];
                answer.push_back(min);
            }
            else
            {
                stk.push_back(score[i]);

                // �����ϱ�
                sort(stk.begin(), stk.end(), greater<>());

                answer.push_back(stk[stk.size() - 1]);
            }
        }

        // Ǯ ������ ���
        for (int i = k; score.size() > i; i++)
        {
            // ������ ���� �� �������� ū ���
            for (int j = 0; k > j; j++)
            {
                if (score[i] > stk[j])
                {
                    // ���� �� ĭ�� �������� 
                    for (int l = k - 1; l > j; l--)
                    {
                        int temp = stk[l];
                        stk[l] = stk[l - 1];
                        stk[l - 1] = temp;
                    }

                    // score�� �� ū ���� �˾Ƴ� stk ��ġ�� score �����ϱ�
                    stk[j] = score[i];
                    break;
                }
            }

            // Ȯ������ �����ϱ�
            sort(stk.begin(), stk.end(), greater<>());

            // answer�� �ּҰ� ����
            answer.push_back(stk[k - 1]);
        }
    }
    else // ������ Ǯ�� �� �� ���
    {
        // Ǯ ������ �ƴ� ��
        for (int i = 0; score.size() > i; i++)
        {
            if (stk.empty())
            {
                stk.push_back(score[i]);
                min = score[i];
                answer.push_back(min);
            }
            else
            {
                stk.push_back(score[i]);

                // �����ϱ�
                sort(stk.begin(), stk.end(), greater<>());

                answer.push_back(stk[stk.size() - 1]);
            }
        }
    }



    return answer;
}