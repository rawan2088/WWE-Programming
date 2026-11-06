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

    // void move(int n, vector<int> &current, vector<int> &spare, vector<int> &wanted)
    void move(int n, map<int, vector<int>> &lines, int c, int s, int w)
    {
        vector<int> &current = lines[c];
        vector<int> &spare = lines[s];
        vector<int> &wanted = lines[w];

        if (n == 0)
        {
            // int number = current[current.size() - 1];
            // wanted.push_back(number);
            // current.pop_back();
            // cout << c << " " << w << endl;
            return;
        }

        move(n - 1, lines, c, w, s);

        int number = current[current.size() - 1];
        wanted.push_back(number);
        current.pop_back();

        cout << c << " " << w << endl;

        move(n - 1, lines, s, c, w);
    }

    int main()
    {
        int n;
        cin >> n;

        // vector<int> current(n), spare, wanted;

        map<int, vector<int>> lines;

        for (int i = n; i > 0; i--)
        {
            lines[1].push_back(i + 1);
        }

        cout << pow(2, n) - 1 << endl;
        move(n, lines, 1, 2, 3);

        // for (int x : lines[3])
        //     cout << x << " ";
    }