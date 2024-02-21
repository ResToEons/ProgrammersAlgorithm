#include <string>
#include <vector>
#include <algorithm>
#define TOTAL_WORD 4
using namespace std;

int solution(vector<string> babbling) {
    bool isErase = false;
    int answer = 0;
    int startIdx = 0;
    int endIdx = 0;
    string temp = "";

    vector<string> word = { "aya", "ye", "woo", "ma" };

    for (int i = 0; babbling.size() > i; i++)
    {
        temp = "";

        while (babbling[i] != "")
        {
            for (int j = 0; word.size() > j; j++)
            {
                if (babbling[i].find(word[j]) != string::npos)
                {
                    startIdx = babbling[i].find(word[j]);
                    endIdx = startIdx + word[j].length();

                    babbling[i].replace(babbling[i].find(word[j]), word[j].length(), "1");
                    //babbling[i].erase(startIdx, endIdx);
                    //babbling[i].insert(startIdx, "1");
                    temp += "1";
                    word[j] = "*";

                    isErase = true;

                    if (babbling[i] == "" || babbling[i] == temp)
                    {
                        answer++;

                        break;
                    }
                }
                else
                {
                    // Do Nothing
                }

            }

            if (isErase)
            {
                isErase = false;
                word = { "aya", "ye", "woo", "ma" };
            }
            else
            {
                word = { "aya", "ye", "woo", "ma" };
                babbling[i] = "";
            }



        }
    }

    return answer;
}