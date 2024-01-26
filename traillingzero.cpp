#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

vector <int> prime;
int primeFactor[6];
void factorize(int n)
{
    int sqrtn = sqrt(n)+1;
    for(int i = 0; i < prime.size(); i++)
    {
        if(n % prime[i] == 0)
        {
            while(n % prime[i] == 0)
            {
                n /= prime[i];
                primeFactor[prime[i]]++;
            }
        }
    }
}
void factFactorize (int n)
{
    prime.push_back(2);
    prime.push_back(5);
    memset(primeFactor,0,sizeof(primeFactor));
    for(int i = 2; i <= n; i++)
        factorize(i);
    cout << min(primeFactor[2],primeFactor[5]) << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        factFactorize(n);
    }
    return 0;
}
