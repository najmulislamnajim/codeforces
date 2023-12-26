/*
    Najmul Islam Najim
    CF handle: najmulislamnajim
    mail: najmulislamru@gmail.com
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int u=0,r=0;
        int f=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U') u++;
            else if(s[i]=='D')u--;
            else if(s[i]=='R') r++;
            else r--;
            if(u==1 && r==1){
                cout<<"YES"<<endl;
                f=2;
                break;
            }
        }
        if(f==1)cout<< "NO"<<endl;

    }
}