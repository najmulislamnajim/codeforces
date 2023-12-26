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
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        ll a=0,b=0,f=1;
        for(ll i=0;;i++)
        {
            if(i%2==0)
            {
                if(f>n)
                {
                    a=a+n;
                    break;
                }
                a=a+f;
                n=n-f;
                f++;
                if(f>n)
                {
                    b=b+n;
                    break;
                }
                b=b+f;
                n=n-f;
                f++;
            }
            else{
                if(f>n)
                {
                    b=b+n;
                    break;
                }
                b=b+f;
                n=n-f;
                f++;
                if(f>n)
                {
                    a=a+n;
                    break;
                }
                a=a+f;
                n=n-f;
                f++;
            }
            if(n==0)break;
        }
        cout<<a<< " "<<b<<endl;
    }
}
