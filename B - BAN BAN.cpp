/*
    Najmul Islam Najim
    CF handle: najmulislamnajim
    mail: najmulislamru@gmail.com
*/

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        long long int a,b,n,d,r,f;
        scanf("%lld",&n);
        d=n/2;
        r=n%2;
        f=d+r;
        printf("%lld\n",f);
        a=1;b=n*3;
        for(int j=1;j<=f;j++){
            printf("%lld %lld ",a,b);
            a=a+3;b=b-3;
        }
        printf("\n");
    }
}