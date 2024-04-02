#include <string>
#include <iostream>
#include <vector>

using namespace std;

long long solution(long long n) {
    string ans;
    long long answer = 0;
    vector<long long> vec(10);

    while (n >= 1)
    {
        int temp = n % 10;

        vec[temp]++;

        n /= 10;
    }

    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; vec[i] > j; j++)
        {
            ans += to_string(i);
        }
    }

    answer = stoull(ans);

    return answer;
}