#include<bits/stdc++.h>

using namespace std;

int prime[10000009];
bool mark[10000009];

void sieve(int n)
{
    int limit = sqrt(n) + 1;

    mark[0] = mark[1] = 1;

    for(int i = 4; i <= n; i += 2) mark[i] = 1;

    for(int i = 3; i < limit; i += 2)
    {
        if(mark[i] == 0)
            for(int j = i*i; j <= n; j += 2*i)
            {
                mark[j] = 1;
            }
    }

    for(int i = 1, j = 1; j <= n; j++,i++)
    {
        if(mark[j] == 0)
        {
            prime[i] = j;
        }
        else
            i--;
    }

}

int main()
{
    sieve(100);
    
    return 0;
}
