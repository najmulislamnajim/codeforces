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
        int l,r,sz;
        l=0;r=n-1;sz=n;

        while(l<r)
        {
            if(s[r]=='0'&& s[l]=='1')
            {
                sz=sz-2;
                l++;
                r--;
                continue;
            }
            else if(s[r]=='1'&& s[l]=='0')
            {
                sz=sz-2;
                l++;
                r--;
                continue;
            }
            else{
                break;
            }
        }
        cout<<sz<<endl;

    }
}
