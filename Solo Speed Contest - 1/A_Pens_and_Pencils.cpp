#/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        double a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        double temp1, temp2;
        temp1 = (a>c)?ceil((float)a / (float)c): 1;
        temp2 = (b>d)?ceil((float)b / (float)d) : 1;

        // cout << temp1 << " " << temp2 << endl;

        if(temp1+temp2 <= k)
        {
            cout<< (k-temp2) <<" "<< temp2 <<endl;
        }
        else cout<<"-1"<<endl;

    }
    return 0;
}