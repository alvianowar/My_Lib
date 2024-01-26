#include<iostream>
#include <set>

using namespace std;

int main()
{
    set <int> s;
    set <int> :: iterator it;
    int a[] = {3,5,2,1,7,4};
    for(int i = 0; i < 6; i++)
        s.insert(a[i]);
    for(it = s.begin(); it != s.end(); it++)
        cout << *it << ' ' ;
    cout << endl;

    set <int> :: iterator itr = s.find(8);

    cout << *itr;


    return 0;
}
