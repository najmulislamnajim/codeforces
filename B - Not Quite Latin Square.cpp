#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char a[3][3];
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
        int n,m;

        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++){
                if(a[i][j]==63){
                    n=i;
                    m=j;
                    break;
                }
            }
        }
        char b,c,d;

        if(m==0){
            b=a[n][1];
            c=a[n][2];
        }
        else if(m==1){
            b=a[n][0];
            c=a[n][2];
        }
        else{
            b=a[n][0];
            c=a[n][1];
        }
        string test="ABC";

        for (int i=0;i<3;i++){
            if(test[i]==b)continue;
            else if(test[i]==c)continue;
            else{
                d=test[i];
            }
        }

        cout<<d<<endl;

}
}
