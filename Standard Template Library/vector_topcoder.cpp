#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v(10);
    vector <int > :: iterator it;
    for(int i = 1; i < 10; i++)
    {
       v.push_back(i);
    }
    for(it = v.begin(); it != v.end(); it++)
        cout<<*it<<' ';
    int l = v.size();
    cout<<endl<<l<<endl;

    return 0;
}
