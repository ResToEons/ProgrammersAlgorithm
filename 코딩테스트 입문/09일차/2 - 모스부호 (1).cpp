#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string letter) {
    string answer = "";
    string temp = "";
    int startIdx = 0;
    int endIdx = 0;

    map<string, string> morse{
          {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},
          {".","e"},{"..-.","f"},{"--.","g"},{"....","h"},
          {"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
          {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},
          {"--.-","q"},{".-.","r"},{"...","s"},{"-","t"},
          {"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
          {"-.--","y"},{"--..","z"}
    };

    for (int i = 0; letter.length() > i; i++)
    {
        if (letter[i] == ' ')
        {
            answer += morse.find(temp)->second;

            temp = "";
            startIdx = i;
        }
        else
        {
            temp.push_back(letter[i]);
        }
    }

    answer += morse.find(temp)->second;

    return answer;
}