/*Danya gave integers a,b,n to Archi. Archi wants to compare a^n and b^n. Help Archi with this task.

INPUT
2
3 4 5
-3 2 4
OUTPUT
2
1*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void gu();
void main()
{
    int u;
    scanf(" %d",&u);
    while(u>=0){
        gu();
        u--;
    }


}
void gu()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((pow(a,c))>(pow(b,c))){
        printf("1");
    }
    else if((pow(a,c))<(pow(b,c))){
        printf("2");

    }
    else if((pow(a,c))==(pow(b,c))){
        printf("0");
    }
}
