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

long long m = 1e9 + 7;

// long long solve(long long n, map<long long, long long> &comb)
// {
//     if (n == 0)
//         return 1;

//     if (comb.count(n))
//     {
//         return comb[n];
//     }

//     for (int j = 1; j <= n && j <= 6; j++)
//     {
//         comb[n] = (solve(n, comb) + solve(n - j, comb)) % m;
//     }

//     return comb[n];
// }

int main()
{
    long long n;
    cin >> n;

    // long long comb[n + 1] = {}; // {} adds zero to all values directly
    unordered_map<long long, long long> comb; // {} adds zero to all values directly

    comb[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i && j <= 6; j++)
        {
            comb[i] = (comb[i] + (comb[i - j])) % m;
        }
    }

    cout << comb[n] << endl;
}