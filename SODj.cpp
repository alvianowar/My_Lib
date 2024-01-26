#include <iostream>

using namespace std;
long long sum[100100];
void sod(long long n)
{
    for(long long i = 1; i <= n; i++)
        for(long long j = i; j <= n; j += i)
            sum[j] += i;
}
int main()
{
    sod(100100);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << sum[n]- n<< endl;
    }
    return 0;
}
