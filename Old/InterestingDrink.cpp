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
    // if (needed == v[mid])
    // {
    //     while (v[mid + 1] == v[mid])
    //     {
    //         mid++;
    //     }

    //     return mid + 1;
    // }
    if (needed >= v[mid])
    {
        return binary(v, needed, mid + 1, right);
    }
    else
    {
        return binary(v, needed, left, mid - 1);
    }
}


int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int q;
    cin >> q;
    int limit = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> limit;

        if (limit < x[0])
        {
            cout << 0 << endl;
        }
        else if (limit >= x.back())
        {
            cout << x.size() << endl;
        }
        else
        {
            cout << binary(x, limit, 0, x.size() - 1) << endl;
        }
    }
}
