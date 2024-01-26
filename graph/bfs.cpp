#include<bits/stdc++.h>

using namespace std;
vector < int > graph[10];
int visited[6];
void Graph(int e)
{
        for(int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
}

void BFS(int start)
{
    int current,next;
    queue < int > q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty())
    {
        current = q.front();
        q.pop();
        for(int i = 0; i < graph[current].size(); i++)
        {
            next = graph[current][i];
            if(!visited[next])
            {
                visited[next] = 1;
                q.push(next);
            }
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    int vertices,edges;
    cin>> vertices >> edges;
    Graph(edges);
    int s = 1;
    BFS(s);
    for(int i = 1; i <= 6; i++)
    {
        cout << i << " ";
        for(int j = 0; j < graph[i].size(); j++)
        {

            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 1; i <= 6; i++)
    {
        if(visited[i] == 1)
            cout << i << endl;
    }
    return 0;
}

