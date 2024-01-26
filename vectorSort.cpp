#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}
int main()
{
    // 2D vect
    // Sorting a specific row of the vector
    vector <vector <int> > ve {{8,3,9},{5,2,4},{6,1,7}};
    cout << "The given vector : " << endl;
    for(int i = 0; i < ve.size(); i++)
    {
        for(int j = 0 ; j < ve[i].size(); j++)
            cout << ve[i][j] << " ";
        cout << endl;
    }
    for(int i = 0; i < ve.size(); i++)
        sort(ve[i].begin(), ve[i].end());
    cout << endl <<"The sorted 2D vector " << endl;
    for(int i = 0; i < ve.size(); i++)
    {
        for(int j = 0 ; j < ve[i].size(); j++)
            cout << ve[i][j] << " ";
        cout << endl;
    }


    //Sorting the entire vector on basis of a coloumn

    cout << endl << "The sorted vector according to a coloumn " << endl;

    sort(ve.begin(),ve.end(),compare);

    for(int i = 0; i < ve.size(); i++)
    {
        for(int j = 0; j < ve[i].size(); j++)
            cout <<ve[i][j] << " ";
        cout << endl;
    }

    return 0;
}
