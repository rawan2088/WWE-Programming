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
        int n = 0;
        cin >> n;
        // int arr[n];
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // i want ot get the greatest two unsorted numbers
        int max1 = 0, max2 = 1;
        int m = (arr[0] & arr[1]);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 0 && i == 0)
                continue;
            int gs = i + 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j] && arr[j] > arr[gs])
                {
                    gs = j;
                }
            }

            if ((arr[gs] & arr[i]) > m)
            {
                m = (arr[gs] & arr[i]);
            }
        }
        cout << m;
    }
}