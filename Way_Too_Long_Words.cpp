#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        if (a.size() >= 10)
        {
            cout << a.at(0) << a.size() - 2 << a.at(a.size() - 1) << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}