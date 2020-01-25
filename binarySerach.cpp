#include <iostream>

using namespace std;

bool binarySearch(int ara[], int len, int key);

int main()
{
    int ara[] = {1, 3 , 5, 6 , 8};
    int key;
    cin >> key;
    bool f = binarySearch(ara,5,key);
    if(f)
        cout <<"The value is there." << endl;
    else
        cout <<"The value is not there." << endl;

    return 0;
}
bool binarySearch(int ara[], int len, int key)
{
    int lo = 0;
    int hi = len - 1;
    int mid;
    while(lo <= hi)
    {
        mid = (lo+hi)/2;
        if(ara[mid] == key)
            return true;
        if(ara[mid] < key)
        {
            lo = mid+1;
        }
        if(ara[mid] > key)
            hi = mid-1;
    }
    return false;
}
