#include <stdio.h>
#include<stdlib.h>
 void main()
{
	int i,n,p,u,a,l,j,t,m;
	scanf("%d",&n);
	if(n%2==0)
	{
		p=((n/2)-1);
		
		}
		else{
			p=(n/2);
			}
			printf("%d",p);
			i=0;
			u=(n-5);
			printf("%d",1);
			i++;
			if(u>=2)
			{
				l=(u%2);
				t=u/2;
				if(l==0)
				{
					m=t-1;
					printf("%d",m);
					i=i+m;
					}
					else
					{
						printf("%d",t);
						i=i+t;
						}
						j=p-i;
						printf("%d",j);
						exit(0);
						}
						else{
							j=p-i;
							printf("%d",j);
							exit(0);
							}
				
}
 
