#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //int x;
    string s;
    vector<int> jollyList;
    int someVariable;

    while (getline(cin, s))
    {
        istringstream iss(s);
        if (iss >> someVariable) jollyList.push_back(someVariable);

        for (size_t i = 0; i < jollyList.size(); i++)
        {
            cout << jollyList[i] << " ";
        }
    }

    /*while (cin >> x)
    {
        jollyList.push_back(x);

        for (size_t i = 0; i < jollyList.size(); i++)
        {
            cout << jollyList[i] << " ";
        }
    }*/
}