
#include <iostream>
#include <cstdio>
using namespace std;
// 2 TEST CASES FAILED IN THIS
int max_of_four(int a, int b, int c, int d)
{
    int ret;
    if(a>b && a>c && a>d)
    {
        ret = a;
    }
    else if(b>a && b>c && b>d)
    {
        ret = b;
    }
    else if(c>a && c>b && c>d)
    {
        ret = c;
    }
    else if(d>a && d>b && d>c)
    {
        ret = d;
    }
return ret;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
