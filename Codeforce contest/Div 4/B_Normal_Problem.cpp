#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    string s; 
    cin >> t;

    while (t--) 
    {
        cin >> s;

        string x = "";
        for (int i = s.length() - 1; i >= 0; i--) 
        {
            if (s[i] == 'p') 
            {
                x += 'q';
            }

            else if (s[i] == 'q')
            {
                 x += 'p';
            }

            else
            {
                x += 'w';
            } 
        }
        cout << x << endl;
    }
}
