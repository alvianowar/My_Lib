#include<bits/stdc++.h>

using namespace std;

int main()
{
    char qu[4] = {'a','b','c','d'};
    queue < char > q;
    int n = 3;
    char ch;
    for(int i = 0; i < 4; i++)
        q.push(qu[i]);
    for(int i = 0; i < n; i++)
    {
        ch = q.front();
        q.push(ch);
        q.pop();
    }
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout  << endl;
    return 0;
}
