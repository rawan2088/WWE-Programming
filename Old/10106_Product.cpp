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

    string word;
    cin >> word;

    priority_queue<int, vector<int>, greater<int>> total;

    for (int i = 0; i < word.size(); i += 2)
    {
        total.push(word[i] - '0');
    }

    while (!total.empty())
    {
        if (total.size() == 1)
        {
            cout << total.top() << endl;
        }
        else
            cout << total.top() << "+";

        total.pop();
    }

    return 0;
}