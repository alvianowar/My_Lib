#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack < int > s;
    for(int i = 0; i < 5; i++)
        s.push(i); /// Time complexity o(1).

    cout << "Size of stack " << s.size() << endl;

    cout << "Top element of the stack " << s.top() << endl; /// s.top() complexity o(1).

    for(int i = 0; i < 5; i++)
        s.pop();  /// Time complexity o(1).

    if(s.empty())  /// Time complexity o(1).
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;


    return 0;
}
