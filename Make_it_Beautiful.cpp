// https://codeforces.com/problemset/problem/1783/A
/*
Case 1: min = max out
Case 2: min != max
        -->max first position and min 2nd position
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        cin >> b;
        int c[b];
        for (int i = 0; i < b; i++)
        {
            cin >> c[i];
        }
        if (c[0] == c[b - 1])
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            swap(c[0], c[b - 1]);
            swap(c[b - 1], c[1]);
        }
        for (int i = 0; i < b; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
}