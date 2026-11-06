#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <regex>
#include <bits/stdc++.h>
#include <array>
#include <map>

using namespace std;

#define endl '\n'

int main()
{
    int n, t;
    cin >> n >> t;

    if (t != 10)
    {
        cout << t;

        for (int i = 0; i < n - 1; i++)
        {
            cout << 0;
        }
    }
    else if (t == 10 && n == 1)
    {
        cout << -1;
    }
    else
    {
        cout << t;
        for (int i = 0; i < n - 2; i++)
        {
            cout << 0;
        }
    }
}