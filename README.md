//given a list of number and a number k return whether any two numbers from the list add up to k
//for example,given
//[10,5,3,7] and k of 17 return true since 10+7is 17



#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[100],n,k,p,q;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value of each element of arrays:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("the value of array :\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    printf("enter the value of k:");
    scanf("%d",&k);
    for(p=0;p<n;p++){
        for(q=p+1;q<n;q++){
            if(a[p]+a[q]==k){
                printf("%d+%d=%d",a[p],a[q],k);
            }
        }
    }


}
