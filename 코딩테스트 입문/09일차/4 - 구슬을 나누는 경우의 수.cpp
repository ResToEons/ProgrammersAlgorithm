#include <string>
#include <vector>

using namespace std;

__int128 solution(int balls, int share) {

    __int128 answer = 0;

    __int128 a = 1;
    __int128 b = 1;
    __int128 c = 1;

    for (int i = 1; balls >= i; i++)
        a *= i;
    for (int i = 1; (balls - share) >= i; i++)
        b *= i;
    for (int i = 1; share >= i; i++)
        c *= i;

    answer = a / (b * c);

    return answer;
}