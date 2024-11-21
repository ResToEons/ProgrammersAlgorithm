#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    string temp;

    for (int i = 0; strings.size() > i; i++)
    {
        for (int j = i + 1; strings.size() > j; j++)
        {
            if (strings[i][n] > strings[j][n])
            {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
            else if (strings[i][n] == strings[j][n])
            {
                int cnt = 0;
                while (1)
                {
                    if (strings[i][cnt] > strings[j][cnt])
                    {
                        temp = strings[i];
                        strings[i] = strings[j];
                        strings[j] = temp;

                        break;
                    }
                    else if (strings[i][cnt] == strings[j][cnt])
                    {
                        cnt++;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                // Do Nothing
            }
        }
    }

    answer = strings;

    return answer;
}