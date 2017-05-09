// Profile Link:
// http://www.spoj.com/problems/BYTESM2/

#include<iostream>
#include<stdio.h>
 
using namespace std;
int main()
{
 
int h,w,i,j,max,t;
int mat[104][104];
scanf("%d",&t);
	while(t--)
	{
			scanf("%d%d",&h,&w);
			for(i=0;i<h;i++)
			{
				for(j=0;j<w;j++)
					scanf("%d",&mat[i][j]);
			}
 
			for(i=1;i<h;i++)
			{	
				for(j=0;j<w;j++)
				{
					max=0;
					if(j-1>=0)
						{
							if(max<mat[i-1][j-1])
								max=mat[i-1][j-1];
						}
					if(j+1<w)
						{
							if(max<mat[i-1][j+1])
								max=mat[i-1][j+1];
						}
					if(max<mat[i-1][j])
						max=mat[i-1][j];
 
						mat[i][j]+=max;
				}
			}
 
			/*for(i=0;i<h;i++)
			{
				for(j=0;j<w;j++)
					printf("%d ",mat[i][j]);
				printf("\n");
			}
			*/
 
			max=0;
			for(j=0;j<w;j++)
				if(max<mat[h-1][j])
					max=mat[h-1][j];
 
			printf("%d\n",max);
 	}
} 
