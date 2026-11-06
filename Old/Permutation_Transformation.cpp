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

void calcD(vector<int> &arr, vector<int> &de, int l, int r, int d = 0)
{
    if (l >= r)
    {
        return;
    }
    int max = l;

    for (int i = l; i < r; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    de[max] = d;
    d++;
    calcD(arr, de, l, max, d);
    calcD(arr, de, max + 1, r, d);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> d(n, 0);
        calcD(arr, d, 0, n, 0);

        for (int i = 0; i < n; i++)
        {
            cout << d[i] << " ";
        }
        cout << endl;
    }
}