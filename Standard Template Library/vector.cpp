#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    vector <int>:: iterator it; /// declaring a iterator . Iterator is like a pointr
    v.push_back(5); /// inserts a new element at the end of the vector
    while(v.back()>0) /// back() means returns the reference to the last element
        v.push_back(v.back()-1); /// First e vector er last element 0 theke boro kina chk korsi. boro hoile . vector er last element e tar theke ek komai print korsi. Vector Value set korsi.
    for(it = v.begin();it != v.end();++it)
        cout<<*it<< ' ' ; /// vector er value printing
    cout << endl;

    while(!v.empty()) /// Returns a boolean value. True if it is empty. false if it isn't.
    {
        cout << v.back() << ' ';
        v.pop_back(); /// Removes the last element from the vector
        /// age check korsi vector empty kina . empty na hoile last value print korsi. er por pop_back diya last element delete kore disi. erpor abar check korsi vector empty kina.
    }
    cout << endl;
    return 0;
}
