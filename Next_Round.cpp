// https://codeforces.com/problemset/problem/158/A
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {

        if (arr[i] >= arr[b - 1] && arr[i] != 0)
        {
            c++;
        }
    }
    cout << c << endl;
}