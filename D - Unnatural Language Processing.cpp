#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int i,n;
        string str;
        cin>>n;
        cin>>str;

        string v="ae";
        string c="bcd";
        vector<int>arr;

        if(n>3){
            for (i=0;i<n;i++){
                if(str[i]=='a'||str[i]=='e')arr.push_back(2);
                else arr.push_back(3);
            }

            for(i=0;i<n;){
                if(arr[i]==3&&arr[i+1]==2&&arr[i+2]==3&&arr[i+3]==2){
                    //cvcv
                    cout<<str[i]<<str[i+1]<<".";
                    if(n-i-2<4){
                        for (int j=i+2;j<n;j++){
                            cout<<str[j];
                        }
                        break;
                    }
                    else {
                        i=i+2;
                    }
                }
                else if(arr[i]==3&&arr[i+1]==2&&arr[i+2]==3&&arr[i+3]==3){
                    //cvcc
                    cout<<str[i]<<str[i+1]<<str[i+2]<<".";
                    if(n-i-3<4){
                        for (int j=i+3;j<n;j++){
                            cout<<str[j];
                        }
                        break;
                    }
                    else {
                        i=i+3;
                    }
                }
            }
            cout<<endl;
        }
        else
        {

            cout<<str<<endl;
        }


    }
}
