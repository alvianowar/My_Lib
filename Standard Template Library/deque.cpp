#include<iostream>
#include<deque>

using namespace std;

void showdq(deque <int> g)
{
    deque<int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;
}

int main()
{
    deque <int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(15);

    cout<<"The deque is :";
    showdq(dq);

    cout<<endl;
    cout<<"deque size: "<<dq.size()<<endl;

    cout<<"Deque max Size: "<<dq.max_size()<<endl; ///Returns the maximum number of elements that a deque container can hold.

    cout<<"Deque front: "<<dq.front()<<endl;///first element
    cout<<"Deque back(): "<<dq.back()<<endl;///  Last element

    ///pop_front() function is used to pop or remove elements from a deque from the front. pop_back() function is used to pop or remove elements from a deque from the back.
    cout<<"Deque pop_front()";
    dq.pop_front();
    showdq(dq);

    cout<<"Deque pop_back()";
    dq.pop_back();
    showdq(dq);


    return 0;
}
