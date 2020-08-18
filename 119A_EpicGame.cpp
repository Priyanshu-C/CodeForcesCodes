#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
 
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
 
int main()
{
    int a, b, n;
    while(~scanf("%d%d%d", &a, &b, &n))
    {
        int time = 0;
        while(n != 0)
        {
            ++ time;
            if(time & 1)
            {
                n -= gcd(a, n);
            }
            else
            {
                n -= gcd(b, n);
            }
        }
        if(time & 1)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
