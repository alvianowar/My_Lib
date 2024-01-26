#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int vertices,edges;
    vector < int > graph[10];
    cin>> vertices >> edges;
    for(int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i = 1; i <= 6; i++)
    {
        cout << i << " ";
        for(int j = 0; j < graph[i].size(); j++)
        {

            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
