// C++ program to find difference of two large numbers.
#include<bits/stdc++.h>

using namespace std;

bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 > n1)
        return false;

    for (int i=0; i<n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

// Function for finding difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    string str = "";  // Empty String to store the result

    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;

    // Initially take carry zero
    int carry = 0;
    for (int i=n2-1; i>=0; i--)
    {
        int sub = ((str1[i+diff]-'0') -
                   (str2[i]-'0') -
                   carry);
        if (sub < 0)
        {
            sub = sub+10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }

    // subtract remaining digits of str1[]
    for (int i=n1-n2-1; i>=0; i--)
    {
        if (str1[i]=='0' && carry)
        {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i]-'0') - carry);
        if (i>0 || sub > 0) // remove preceding 0's
            str.push_back(sub+'0');
        carry = 0;

    }
    reverse(str.begin(), str.end());
    return str;
}

// Driver code
int main()
{
    string str1 = "1028";
    string str2 = "1079";
    cout << findDiff(str1, str2);
    return 0;
}
