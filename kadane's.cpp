#include <iostream>
using namespace std;
int maximum(int ara[], int n);
int main()
{
    int ara[] = {-2, -3, 4, -1, -1, 1, 5, -3};
    int n = sizeof(ara)/sizeof(ara[0]);
    cout << "Size of ara: " << sizeof(ara) << endl;
    cout << "Sizeo of ara[0]: " << sizeof(ara[0]) << endl;
    int ans = maximum(ara,n);
    cout << ans << endl;
    return 0;
}
int maximum(int ara[], int n)
{
    int max_so_far = 0;
    int max_ending = 0;
    for(int i = 0; i < n; i++)
    {
        max_ending = max_ending+ara[i];
        if(max_ending < 0)
            max_ending  = 0;
        else
            max_so_far = max(max_ending,max_so_far);
    }
    return max_so_far;
}
