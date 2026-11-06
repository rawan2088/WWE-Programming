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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                // cout << sum << " ";
                sum = sum ^ arr[j];
            }
            // cout << sum << " ";
            if (sum == arr[i])
            {
                cout << sum << '\n';
                break;
            }
        }
    }
}