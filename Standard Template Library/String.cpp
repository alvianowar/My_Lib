#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
//    string aName, bName;
//    cin >> aName;
//    cin.ignore();
//    /// reads string untill the next separator (tab, newline , space) is found
//    getline(cin, bName);
//    /// reads string until a new line is found.
//
//    cout <<"CIN "<< aName << " Getline " <<  bName << endl;
//
//    string aResult, bResult;
//    aResult = aName + bName; /// there will be no space between those two . Cause first string is ended when the space was found.
//    bResult = aName;
//    bResult += ' ';
//    bResult += bName;
//
//    cout << aResult << " Second concat: " << bResult;

    string fullName = "Alvi Ali";
    for(string :: size_type i = 0; i < fullName.length(); i++)
        fullName[i] = toupper(fullName[i]);
    cout << fullName << endl; /// ALVI ALI

    if(fullName.find(' ') != string::npos) /// find methods returns the position of the first occurence of the given character. there is also rfind(). returns the last occurence of the given char.
        cout << "Contains at least one space!" << endl;
    else
        cout << "Does not contain any spaces!" << endl;

    /// Finding a substring
    if(fullName.find("ALI") != string :: npos)
        cout << "Ali is present there" << endl;
    else
        cout << "It's not" << endl;

    /// StringStream. cropping string with specific delimiter
    string a = "123";
    stringstream str(a);

    int num;
    while(str >> num)
    {
        if(str.peek() == '+') /// specifying the delimiter
            str.ignore();
        cout << num << endl;
    }



    return 0;
}
