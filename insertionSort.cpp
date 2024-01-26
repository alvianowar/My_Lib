#include <iostream>

using namespace std;

int main()
{
    int ara[] = {5,3,4,4,2,1,3,5,6};
    int key = 0;
    for(int j = 1; j < 9; j++)
    {
        key = ara[j];
        int i = j-1;
        while(i > -1 && ara[i] > key)
        {
            ara[i+1] = ara[i];
            i--;
        }
        ara[i+1] = key;
    }
    for(int i = 0; i < 9; i++)
        cout << ara[i] << " ";
    cout << endl;
    return 0;
}
