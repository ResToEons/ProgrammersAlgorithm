#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    string temp = "";
    unsigned long long answer = 0;
    unsigned long long pLength = p.length();
    unsigned long long pLong = stoull(p);

    for (unsigned long long i = 0; t.length() - p.length() + 1 > i; i++)
    {
        for (unsigned long long j = i; p.length() + i > j; j++)
        {
            temp += t[j];
        }
        unsigned long long tempLong = stoull(temp);

        if (pLong >= tempLong)
        {
            answer++;
        }

        temp = "";
    }

    return answer;
}