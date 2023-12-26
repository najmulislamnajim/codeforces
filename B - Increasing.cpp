/*
    Najmul Islam Najim
    CF handle: najmulislamnajim
    mail: najmulislamru@gmail.com
*/

#include<stdio.h>
main(){
    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        int n;
        scanf("%d",&n);

        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        int p,q,count;
        count=0;

        for(p=0;p<n;p++){
            for(q=p+1;q<n;q++){
                if(arr[p]==arr[q]){
                    count+=1;
                    break;
                }
            }
        } //end condition

        if(count>0){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }//end of test
}