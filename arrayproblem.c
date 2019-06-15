/*Given an array of integers, return a new array such that each element at index i of the new array is the product of all
 the numbers in the original array except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1],
 the expected output would be [2, 3, 6]*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n,mul[100],a[100];
    printf("enter the value of array:\n");
    scanf("%d",&n);
    printf("enter the value of array:\n");
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
    }
    printf("the array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    for(i=0;i<n;i++){

for(k=i;k<n;k++){
mul[k]=1;
        for(j=0;j<n;j++){



                if(j==i){
                    mul[k]=mul[k]*1;
                }
                else{
                    mul[k]=mul[k]*a[j];
                }
            }
        }

}
printf("the mew array is:\n");
for(k=0;k<n;k++){
    printf("%d",mul[k]);
}
}
