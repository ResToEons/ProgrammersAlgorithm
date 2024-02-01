#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;

    int a = box[0], b = box[1], c = box[2];
    int cnt = 0;
    int deno = n * n * n;

    if (n != 1)
    {
        while (a >= n)
        {
            cnt++;
            a -= n;
        }

        a = n * cnt;
        cnt = 0;

        while (b >= n)
        {
            cnt++;
            b -= n;
        }

        b = n * cnt;
        cnt = 0;

        while (c >= n)
        {
            cnt++;
            c -= n;
        }

        c = n * cnt;
    }

    answer = (a * b * c) / deno;

    return answer;
}