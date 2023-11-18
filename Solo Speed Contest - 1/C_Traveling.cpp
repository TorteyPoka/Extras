/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin>>N;
    int t,x,y;
    for(int i = 0; i<N; i++)
    {
        cin>>t>>x>>y;
        if(t % (x+y) == 0)
            continue;
        else 
        {
            cout<<"No";
            return 0;
        }
    }
        cout<<"Yes";

    return 0;
}