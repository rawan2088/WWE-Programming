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
    int t;
    cin >> t;
    map<string, int> go;
    while (t--)
    {
        string team;
        cin >> team;

        go[team] += 1;
    }

    std::vector<std::pair<string, int>> vec(go.begin(), go.end());
    std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
              { return a.second > b.second; });

    cout << vec[0].first;
}
