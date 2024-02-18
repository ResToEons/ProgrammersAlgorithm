#include <string>
#include <vector>
#define ALPHABET_NUM 26

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    bool isSame = true;
    int answer = 2;
    int temp = 0;
    int spellAlpha[ALPHABET_NUM] = { 0 };
    int dicAlpha[ALPHABET_NUM] = { 0 };

    // Record spell alphabet's count in spellAlpha array
    for (int i = 0; spell.size() > i; i++)
    {
        temp = spell[i][0] - 97;
        spellAlpha[temp]++;
    }

    for (int i = 0; dic.size() > i; i++)
    {
        // Record dic[i]'s alphabet count in dicAlpha array
        for (int j = 0; dic[i].length() > j; j++)
        {
            temp = dic[i][j] - 97;

            dicAlpha[temp]++;
        }

        // Check if spellAlpha and dicAlpha is identical
        for (int l = 0; ALPHABET_NUM > l; l++)
        {
            if (spellAlpha[l] == dicAlpha[l])
            {
                // Do Nothing
            }
            else
            {
                // If the value doesn't match, break the for loop
                isSame = false;
                break;
            }
        }

        // If answer is found, break for loop and end the program
        if (isSame)
        {
            answer = 1;
            break;
        }
        // Else reset dicAlpha and isSame boolean to true
        else
        {
            for (int k = 0; ALPHABET_NUM > k; k++)
                dicAlpha[k] = 0;
            isSame = true;
        }

    }


    return answer;
}