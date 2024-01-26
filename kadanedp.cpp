#include <iostream>

using namespace std;
int maximum(int ara[], int n);
int main()
{
    int ara[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(ara)/sizeof(ara[0]);
    int ans = maximum(ara,n);
    cout << ans << endl;
    return 0;
}
int maximum(int ara[], int n)
{
    int max_so_far = ara[0];
    int curr = ara[0];
    for(int i = 1; i < n; i++)
    {
        curr = max(curr+ara[i],ara[i]);
        max_so_far = max(curr,max_so_far);
    }
    return max_so_far;
}
