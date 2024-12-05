#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin >> t;

    while (t--) 
    {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> s[i];
        }

        int a = 0; 
        int count = 0; 

        for (int i = 0; i < n; ++i) 
        {
            int x = s[i].length();

            if (a + x <= m) 
            {
                a += x;
                count++;
            } 
            else 
            {
                break;
            }
        }

        cout << count << endl;
    }

}
