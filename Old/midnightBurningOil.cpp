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

long long m = 1000000007;

int main()
{
    long long n;
    cin >> n;

    map<long long, long long> comb;

    comb[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i && j <= 6; j++)
        {
            comb[i] = (comb[i] + comb[i - j]) % m;
        }
    }

    cout << comb[n] << endl;
}