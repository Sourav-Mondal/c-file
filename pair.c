/*cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair.
 For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.*/

#include<stdio.h>
#include<conio.h>
void cons(int,int);
void car(int,int);
void cdr(int,int);
void main(){
int x,y;
printf("enter the 1st element of the pair:");
scanf("%d",&x);
printf("enter the 2nd element of the pair:");
scanf("%d",&y);
cons(x,y);
}
void cons(int a,int b){
car(a,b);
cdr(a,b);
}
void car(int p,int q){
printf("the 1st element is: %d\n",p);
}
void cdr(int v,int g){
printf("the 2nd element is :%d",g);
}
