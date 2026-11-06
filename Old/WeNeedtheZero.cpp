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

// void move(int n, vector<int> &current, vector<int> &spare, vector<int> &wanted)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        int check = 0;
        while (n--)
        {
            int input;
            cin >> input;
            check++;
            if (input == 0)
                continue;
            sum ^= input;
        }

        if (!(check & 1))
        { // is power of 2
            if (sum == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << sum << endl;
        }
    }
}