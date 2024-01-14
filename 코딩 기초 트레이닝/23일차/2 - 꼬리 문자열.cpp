#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    bool isSame = false;

    int temp = 0;

    for (int i = 0; str_list.size() > i; i++)
    {
        for (int j = 0; str_list[i].length() > j; j++)
        {
            if (str_list[i][j] == ex[0])
            {
                isSame = true;

                for (int k = 0; ex.length() > k; k++)
                {
                    if (str_list[i][j + k] != ex[k])
                    {
                        isSame = false;
                        break;
                    }
                    else
                    {
                    }
                }

                if (isSame)
                {
                    break;
                }
                else
                {
                }
            }
        }

        if (!isSame)
        {
            answer += str_list[i];
        }
        else
        {
            isSame = false;
        }

    }
    return answer;
}