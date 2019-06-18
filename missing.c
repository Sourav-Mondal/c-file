/*Given an array of integers, find the first missing positive integer in linear time and constant space.
In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates
and negative numbers as well.
For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i,j,p,q,a[100],n,temp;
    printf("enter the length of array :");
    scanf("%d",&n);
    printf("the array elements are:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("the array is:\n");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the new array is:\n");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }
    i=0;
    for(j=i+1;j<n;j++){
        if(a[i]-a[j]<=-2){
            //while(a[i]=(a[j]-1)){
                a[i]=a[i]+1;
            //}
           /* printf("the double new array is:\n");
            for(i=0;i<n;i++){
                printf("%d\n",a[i]);
            }*/
            if(a[i]==0){
            p=1;
            for(q=p+1;q<n;q++){
            if(a[p]-a[q]<=-2){
                a[p]=a[p]+1;
                printf("the first missing positive integer is:%d\n",a[p]);
                exit(0);
            }
            else{
                    if(q==(n-1)){
                        a[q]=a[q]+1;
                        printf("the first missing positive integer is:%d\n",a[q]);
                        exit(0);
                    }
                p++;
                printf("the first missing positive integer is:%d\n",a[q]);
                        exit(0);
            }
        }
            }
            else{
                printf("the first missing positive integer is:%d\n",a[i]);
                exit(0);
            }
        }
        else {
            if(j==(n-1)){
                        a[j]=a[j]+1;
                        printf("the first missing positive integer is:%d\n",a[j]);
                        exit(0);
                    }
                i++;
        }


    }
}


