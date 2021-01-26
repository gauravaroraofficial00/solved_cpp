#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 0;
    string s;

    cin >> t;
    while (t--)
    {
        cin >> s;

        bool lowercase(false), uppercase(false), special(false), digit(false), length(false);

        if (s.size() > 10)
            length = true;
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                lowercase = true;
            if (s[i] >= 'A' && s[i] <= 'Z')
                uppercase = true;

            if (s[i] >= '0' && s[i] <= '9')
                digit = true;

            if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
                special = true;
        }

      
    }
    return 0;
}