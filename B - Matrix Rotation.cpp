/*
    Najmul Islam Najim
    CF handle: najmulislamnajim
    mail: najmulislamru@gmail.com
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        if(a<b&&c<d&&a<c&&b<d)printf("yes\n");
        else if(c<a&&c<d&&d<b&&a<b)printf("yes\n");
        else if(d<c&&d<b&&b<a&&c<a)printf("yes\n");
        else if(b<d&&b<a&&a<c&&d<c)printf("yes\n");
        else printf("no\n");

    }

    return 0;
}
