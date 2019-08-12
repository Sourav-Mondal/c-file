/*Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.
Do this faster than the naive method of repeated multiplication.
For example, pow(2, 10) should return 1024.*/
#include<stdio.h>
int pow(int,int);
void main()
{
    int x,y,res;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the number of exponentiation:");
    scanf("%d",&y);
    res=pow(x,y);
   printf("%d",res);
}
int pow(int x,int y){
    int re=1,i;
    for(i=1;i<=y;i++){
        re=re*x;
        
    }
    return re;
    
}
