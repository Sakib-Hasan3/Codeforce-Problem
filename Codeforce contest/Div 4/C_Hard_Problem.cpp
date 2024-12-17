#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        // Step 1: Seat monkeys in row 1
        long long row1 = min(m, a);  // Seat as many monkeys in row 1 as possible
        m += row1;  // Update the remaining seats

        // Step 2: Seat monkeys in row 2
        long long row2 = min(m, b);  // Seat as many monkeys in row 2 as possible
        m += row2;  // Update the remaining seats

        // Step 3: Seat monkeys with no preference
        long long row3 = c;
        m-=row3;  // Seat as many monkeys with no preference
         // Update the remaining seats

        // Output total monkeys seated
        cout << (row1 + row2 + row3) << endl;
    }

    return 0;
}
