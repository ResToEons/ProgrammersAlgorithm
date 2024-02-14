#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    char temp;

    for_each(my_string.begin(), my_string.end(), [](auto& c) {c = tolower(c); });

    for (int i = 0; my_string.length() > i; i++)
    {
        for (int j = i; my_string.length() > j; j++)
        {
            if (my_string[j] < my_string[i])
            {
                temp = my_string[i];
                my_string[i] = my_string[j];
                my_string[j] = temp;
            }
        }
    }

    answer = my_string;

    return answer;
}