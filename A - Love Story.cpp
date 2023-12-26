/*
    Najmul Islam Najim
    CF handle: najmulislamnajim
    mail: najmulislamru@gmail.com
*/
#include<bits/stdc++.h>

#define ll long long int
#define llu unsigned long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define popb pop_back
#define vec vector<ll>
#define minus cout<<-1<<"\n"
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll>>
#define PI 3.14159265359
#define nl "\n"
using namespace std;

void solve()
{
   string s="codeforces";
   string ss;
   cin>>ss;
   int cnt=0;
   for(int i=0;i<s.size();i++)
   {
     if(s[i]!=ss[i])cnt++;
   }

   cout<<cnt<<endl;
}

int main()
{
    fast;
    int tt;
    cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}