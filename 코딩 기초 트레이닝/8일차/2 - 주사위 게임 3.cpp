#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;

    if (a == b && a == c && a == d)
    {
        answer = 1111 * a;
    }
    else if (a == b && a == c && a != d)
    {
        answer = (10 * a + d) * (10 * a + d);
    }
    else if (a == b && a == d && a != c)
    {
        answer = (10 * a + c) * (10 * a + c);
    }
    else if (a == c && a == d && a != b)
    {
        answer = (10 * a + b) * (10 * a + b);
    }
    else if (b == c && b == d && b != a)
    {
        answer = (10 * b + a) * (10 * b + a);
    }
    else if (a == b && c == d)
    {
        if (c < a)
        {
            answer = (a + c) * (a - c);
        }
        else
        {
            answer = (a + c) * (c - a);
        }
    }
    else if (a == c && b == d)
    {
        if (b < a)
        {
            answer = (a + b) * (a - b);
        }
        else
        {
            answer = (a + b) * (b - a);
        }
    }
    else if (a == d && b == c)
    {
        if (b < a)
        {
            answer = (a + b) * (a - b);
        }
        else
        {
            answer = (a + b) * (a - b);
        }
    }
    else if (a == b)
    {
        answer = c * d;
    }
    else if (a == c)
    {
        answer = b * d;
    }
    else if (a == d)
    {
        answer = b * c;
    }
    else if (b == c)
    {
        answer = a * d;
    }
    else if (b == d)
    {
        answer = a * c;
    }
    else if (c == d)
    {
        answer = a * b;
    }
    else
    {
        int min = 6;

        if (min > a)
        {
            min = a;
        }
        if (min > b)
        {
            min = b;
        }
        if (min > c)
        {
            min = c;
        }
        if (min > d)
        {
            min = d;
        }

        answer = min;
    }

    return answer;
}