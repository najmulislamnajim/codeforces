/*
    Najmul Islam Najim
    CF handle: najmulislamnajim
    mail: najmulislamru@gmail.com
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int y=d-b;
        a=a+y;
if(d<b)
{
cout<<-1<<endl;
continue;
}
        if(c>a)cout<<-1<<endl;
        else
        {
           int res=abs(a-c);
            cout<<res+y<<endl; 
        }
        
    }
}