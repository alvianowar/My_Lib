#include <iostream>

using namespace std;

int bigmod(int a, int b)
{
    int result = 1;
    while(b)
    {
        if(b%2 == 1)
            result = (result*a)%M;
        a = (a*a)%M;
        b = b/2;
    }
    return result;
}
int main()
{
    int a = 3, b = 5;
    int ans = bigmod(a,b);
    cout << ans << endl;
    return 0;
}
