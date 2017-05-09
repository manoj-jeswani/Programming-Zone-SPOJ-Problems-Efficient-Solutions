// Profile Link:
// http://www.spoj.com/problems/ACODE/


#include <iostream>
#include<stdio.h>
using namespace std;
 
int in(char c)
{
        return c-'0';
}
 
int main() {
char str[5004];
long long int arr[5004];
int i,j,free=1;
while(1)
	{
			fflush(stdin);
			scanf("%s",str);
			if(str[0]=='0')
				break;
			arr[0]=1;
			free=1;
			//prev tells that char previous to str[i] is not paired(with is its previous char) in how many decodings 
			for(i=1;str[i]!='\0';i++)
			{
			   j=in(str[i-1])*10+in(str[i]);
			  
			    	if(in(str[i])==0)
			  		{
			                    
						 if(j>=1 && j<=26)
							{
					     		 arr[i]=free;
					     		 free=0;
					    	}
 
					 	else
							arr[i]=0;
					}
			                  
			        else
			        {
 
				        if(in(str[i-1])!=0 && j>=1 && j<=26)
				        {
				             
				            arr[i]=arr[i-1]+free;
				        }
				        /*else if(in(str[i])==0)
				        {
				                    arr[i]=0;
				                    i++;
				                    break;
 
				        }*/
				        else
				          arr[i]=arr[i-1];
				    }
			                
			    	free=arr[i-1];
			}
 
			printf("%lld\n",arr[i-1]);
	}	
	return 0;
}
 
