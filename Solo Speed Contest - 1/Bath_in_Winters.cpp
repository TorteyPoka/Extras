/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int g, b, ans = 0;
        cin >> g >> b;

        if (b > g || g < 1 || b < 1)
        {
            cout << "0" << endl;
            continue;
        }
        while (g > 0)
        {
            g -= (2 * b);
            if(g > -1)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}