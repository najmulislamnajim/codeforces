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
        ll aw=0,ab=0,bw=0,bb=0;
        int w=1, bc=0;
        for(ll i=0;; i++)
        {
            if(i%2==0)
            {
                if(f>n)
                {
                    a=a+n;
                    for(ll j=1; j<=n; j++)
                    {
                        if(w==1)
                        {
                            aw++;
                            bc=1;
                            w=0;
                        }
                        else
                        {
                            ab++;
                            bc=0;
                            w=1;
                        }
                    }
                    break;
                }
                a=a+f;
                for(ll j=1; j<=f; j++)
                {
                    if(w==1)
                    {
                        aw++;
                        bc=1;
                        w=0;
                    }
                    else
                    {
                        ab++;
                        bc=0;
                        w=1;
                    }
                }
                n=n-f;
                f++;
                if(f>n)
                {
                    b=b+n;
                    for(ll j=1; j<=n; j++)
                    {
                        if(w==1)
                        {
                            bw++;
                            bc=1;
                            w=0;
                        }
                        else
                        {
                            bb++;
                            bc=0;
                            w=1;
                        }
                    }
                    break;
                }
                b=b+f;
                n=n-f;
                for(ll j=1; j<=f; j++)
                {
                    if(w==1)
                    {
                        bw++;
                        bc=1;
                        w=0;
                    }
                    else
                    {
                        bb++;
                        bc=0;
                        w=1;
                    }
                }
                f++;
            }
            else
            {
                if(f>n)
                {
                    b=b+n;
                    for(ll j=1; j<=n; j++)
                    {
                        if(w==1)
                        {
                            bw++;
                            bc=1;
                            w=0;
                        }
                        else
                        {
                            bb++;
                            bc=0;
                            w=1;
                        }
                    }
                    break;
                }
                b=b+f;
                n=n-f;
                for(ll j=1; j<=f; j++)
                {
                    if(w==1)
                    {
                        bw++;
                        bc=1;
                        w=0;
                    }
                    else
                    {
                        bb++;
                        bc=0;
                        w=1;
                    }
                }
                f++;
                if(f>n)
                {
                    a=a+n;
                    for(ll j=1; j<=n; j++)
                    {
                        if(w==1)
                        {
                            aw++;
                            bc=1;
                            w=0;
                        }
                        else
                        {
                            ab++;
                            bc=0;
                            w=1;
                        }
                    }
                    break;
                }
                a=a+f;
                n=n-f;
                for(ll j=1; j<=f; j++)
                {
                    if(w==1)
                    {
                        aw++;
                        bc=1;
                        w=0;
                    }
                    else
                    {
                        ab++;
                        bc=0;
                        w=1;
                    }
                }
                f++;
            }
            if(n==0)break;
        }
        cout<<aw<< " "<<ab<< " "<<bw<< " "<<bb<<endl;
    }
}
