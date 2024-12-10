#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> stk;
    int min = 2001;

    // 스택이 풀로 이상 찰 경우
    if (k < score.size())
    {
        // 풀 스택이 아닐 때
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

                // 정렬하기
                sort(stk.begin(), stk.end(), greater<>());

                answer.push_back(stk[stk.size() - 1]);
            }
        }

        // 풀 스택인 경우
        for (int i = k; score.size() > i; i++)
        {
            // 점수가 스택 안 점수보다 큰 경우
            for (int j = 0; k > j; j++)
            {
                if (score[i] > stk[j])
                {
                    // 스택 한 칸씩 내려가기 
                    for (int l = k - 1; l > j; l--)
                    {
                        int temp = stk[l];
                        stk[l] = stk[l - 1];
                        stk[l - 1] = temp;
                    }

                    // score가 더 큰 것을 알아낸 stk 위치에 score 대입하기
                    stk[j] = score[i];
                    break;
                }
            }

            // 확인차로 정렬하기
            sort(stk.begin(), stk.end(), greater<>());

            // answer에 최소값 삽입
            answer.push_back(stk[k - 1]);
        }
    }
    else // 스택이 풀로 안 찰 경우
    {
        // 풀 스택이 아닐 때
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

                // 정렬하기
                sort(stk.begin(), stk.end(), greater<>());

                answer.push_back(stk[stk.size() - 1]);
            }
        }
    }



    return answer;
}