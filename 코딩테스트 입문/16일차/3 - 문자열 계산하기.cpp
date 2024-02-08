#include <string>
#include <vector>
#define SPACE_CNT 100
using namespace std;

int solution(string my_string) {
    bool isNum = true;
    int answer = 0;
    int strLength = my_string.length();
    int spaceIdx[SPACE_CNT] = { 0 };
    int idx = 0;
    int cnt = 0;
    int startIdx = 0;
    int endIdx = 0;
    int equationCnt = 0;
    string temp = "";
    vector<int> nums;
    vector<char> equations;

    for (int i = 0; strLength > i; i++)
    {
        if (my_string[i] == ' ')
        {
            spaceIdx[idx] = i;
            idx++;
        }
    }

    spaceIdx[idx] = strLength;

    while (spaceIdx[cnt] != 0)
    {
        if (isNum)
        {
            for (int i = startIdx; spaceIdx[cnt] > i; i++)
            {
                temp += my_string[i];
            }

            startIdx = spaceIdx[cnt];

            nums.push_back(stoi(temp));
            temp = "";
            isNum = false;
        }
        else
        {
            for (int i = startIdx; spaceIdx[cnt] > i; i++)
            {
                if (my_string[i] == '+')
                {
                    equations.push_back('+');
                }
                if (my_string[i] == '-')
                {
                    equations.push_back('-');
                }
            }

            startIdx = spaceIdx[cnt];

            isNum = true;
        }

        cnt++;
    }

    equationCnt = equations.size();

    answer += nums[0];

    for (int i = 0; equationCnt > i; i++)
    {
        if (equations[i] == '+')
            answer += nums[i + 1];
        else
            answer -= nums[i + 1];
    }


    /*for (int i = 0; idx > i; i++)
    {
        if (equations[0] == '+')
        {
            answer += nums[i];
        }
        else
        {
            answer -= nums[i];
        }
    }
    */
    return answer;
}