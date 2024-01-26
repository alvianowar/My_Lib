#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <char,int> mp;
    map <char, int> mymap,mymap1;
    map <char,int> :: iterator it;

    ///Inserting element in a map

    ///insert elements indivitually in map with the combination of key value and value of element
    mp.insert(pair<char, int> ('a', 3));
    mp.insert(pair<char, int> ('b', 1));
    mp.insert(pair<char, int> ('c',43));

    /// inserts elements in range using insert() function in map 'mymap'
    mymap.insert(mp.begin(),mp.end());

    for(it = mymap.begin(); it != mymap.end(); it++)
        cout<<it->first<<" and "<<it->second<<endl;

    /// prints key and element's value;
    it = mp.find('b');
    cout<<"Key and element's value of map are: ";
    cout << it->first << " and "<< it->second<<endl;


    cout<< "Printing element mapped by key 'a' using at() function: "<< mp.at('a')<<endl;


    /// alternative way to insert elements by mapping with their keys.
    mymap1['x'] = 23;
    mymap1['y'] = 21;

        /// Swapping

    /// swap contents of 2 maps namely mymap and mymap1. x y swap er mto kore mymap1 er value mymap e nisi. key and value both
    mymap.swap(mymap1);

    /*prints swapped elements of mymap and mymap1 by iterating all the elements through
    using iterator*/
    cout<<"Swapped elements and their keys of mymap are: "<<endl;
    for(it = mymap.begin(); it!= mymap.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    cout<<"Swapped elements and their keys of mymap1 are: "<<endl;
    for(it = mymap1.begin(); it != mymap1.end(); ++it)
        cout<< it-> first << " and " << it -> second<<endl;

    cout<<endl;
    /// Erasing elements
    ///erasing element mapped at 'c'
    mymap1.erase('c');
    cout<<"After erasing key c and it's value other elements of  mymap1 are: "<<endl;
    for(it = mymap1.begin(); it != mymap1.end(); it++)
        cout<<it -> first<<" and "<<it -> second<<endl;
    cout<<endl;

    /// erasing elements by range
    mymap1.erase(mymap1.begin(),mymap1.end());

    cout<<"As mymap1 is empty so therefore empty function will be one value of mymap1.empty() = "<<mymap1.empty()<<endl;

    ///number of elements with key = 'a' in map mp.
    cout<<"Number of elements with key = 'a' in map mp are:"<<mp.count('a')<<endl;
    return 0;
}

