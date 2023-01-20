#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int c = 0;
    string b;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        if (b.find("++") != string::npos)
        {
            c++;
        }
        else if (b.find("--") != string::npos)
        {
            c--;
        }
    }
    cout << c;
}