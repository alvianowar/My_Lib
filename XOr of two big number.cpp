// XOR Practice.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++)
    {
        int aa = (a[i]-'0');
        int bb = (b[i]-'0');
        aa = aa^bb;
        cout << aa ;
    }
    cout << endl;
    return 0;
}
