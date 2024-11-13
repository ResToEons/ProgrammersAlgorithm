#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";
    int cnt = 0;
    vector<string> words;
    vector<int> spaces;
    
    for (int i = 0; s.length() > i; i++)
    {
        if (s[i] == ' ')
        {           
            words.push_back(temp);
            
            temp = "";
        }
        else
        {
            temp += s[i];        
        }
    }
    
    words.push_back(temp);
    temp = "";
    
    for (int i = 0; words.size() > i; i++)
    {
        for (int j = 0; words[i].length() > j; j++)
        {
            if (j % 2 == 0)
            {
                answer += toupper(words[i][j]);
            }
            else
            {
                answer += tolower(words[i][j]);
            }
        }
        answer += ' ';
    }
    
    answer.pop_back();
    
    return answer;
}
