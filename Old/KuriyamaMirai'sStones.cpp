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

// void move(long long n, vector<long long> &current, vector<long long> &spare, vector<long long> &wanted)
int main()
{
    long long n;
    cin >> n;

    vector<long long> stones(n);
    for (long long i = 0; i < n; i++)
        cin >> stones[i];

    vector<long long> uno = stones;

    sort(stones.begin(), stones.end());

    for (long long i = 1; i < n; i++)
    {
        stones[i] = stones[i - 1] + stones[i];
        uno[i] = uno[i - 1] + uno[i];
    }

    long long t;
    cin >> t;
    while (t--)
    {
        long long choice, l, r;
        cin >> choice;
        cin >> l;
        cin >> r;

        long long sum = 0;
        switch (choice)
        {
        case 1:
            if (l == 1)
            {
                sum = uno[r - 1];
            }
            else
            {
                sum = uno[r - 1] - uno[l - 2];
            }
            break;
        case 2:
            if (l == 1)
            {
                sum = stones[r - 1];
            }
            else
            {
                sum = stones[r - 1] - stones[l - 2];
            }
            break;

        default:
            break;
        }

        cout << sum << endl;
    }
}