#include<bits/stdc++.h>

using namespace std;

int sum[100];

void summation(int ara[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        sum[i] = sum[i] + sum[i-1]+ara[i];
    }

}

int sumLR(int initial, int ending)
{
    return sum[ending]-sum[initial-1];
}

int main()
{
    int arra[5], x = 5;

    for(int i = 1; i <= 5; i++)
        arra[i] = i;

    summation(arra,x);

    cout << sumLR(2,5) <<endl;


    return 0;
}
