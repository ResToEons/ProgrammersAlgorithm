#include <string>
#include <vector>
#define ALPHABET_NUM 53
using namespace std;

string solution(string my_string) {
    string answer = "";
    int alphabet[ALPHABET_NUM] = { 0 };

    for (int i = 0; my_string.length() > i; i++)
    {
        if (my_string[i] >= 65 && my_string[i] <= 90)
        {
            if (alphabet[my_string[i] - 65] == 0)
            {
                alphabet[my_string[i] - 65] = 1;
                answer += my_string[i];
            }
        }
        if (my_string[i] >= 97 && my_string[i] <= 122)
        {
            if (alphabet[my_string[i] - 71] == 0)
            {
                alphabet[my_string[i] - 71] = 1;
                answer += my_string[i];
            }
        }
        else if (my_string[i] == 32)
        {
            if (alphabet[52] == 0)
            {
                alphabet[52] = 1;
                answer += my_string[i];
            }
        }
        else
        {

        }
    }

    return answer;
}