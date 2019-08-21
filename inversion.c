/*a sorted list has zero inversions. The array [2, 4, 1, 3, 5] has three inversions: (2, 1), (4, 1), and (4, 3). 
The array [5, 4, 3, 2, 1] has ten inversions: every distinct pair forms an inversion.*/
#include<stdio.h>
void main()
{
    int a[100],n,j,l=0,t,i,k;    
    printf("enter the number of array element :");
    scanf("%d",&n);
   
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    l++;
                    printf("(%d,%d) \n",a[i],a[j]);
                        
                        
                }
                
            }
        }
        printf("the inversion number is %d",l);
    
    
}
