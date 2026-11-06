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

int binary(vector<int> &v, int needed, int left, int right)
{
    if (left > right)
    {
        return left;
    }

    int mid = ((left + right) / 2); // floor
    // cout << mid << endl;
    // if (needed == v[mid])
    // {
    //     while (v[mid + 1] == v[mid])
    //     {
    //         mid++;
    //     }

    //     return mid + 1;
    // }
    if (needed > v[mid])
    {
        return binary(v, needed, mid + 1, right);
    }
    else
    {
        return binary(v, needed, left, mid - 1);
    }
}

// void move(long long n, vector<long long> &current, vector<long long> &spare, vector<long long> &wanted)
int main()
{
    int n;
    cin >> n;
    vector<int> worms(n, 0);
    cin >> worms[0];
    for (int i = 1; i < n; i++)
    {
        int number;
        cin >> number;
        worms[i] = worms[i - 1] + number;
        // cout << worms[i] << endl;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int worm;
        cin >> worm;

        if (worm == worms[n - 1])
        {
            cout << n<< endl;
        }else{

            cout << binary(worms, worm, 0, n) + 1 << endl;
        }
    }
}