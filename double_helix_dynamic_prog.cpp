//Problem Link :
// http://www.spoj.com/problems/ANARC05B/
#include <iostream>
#include <stdio.h>
using namespace std;
 
int search(int val,int*p,int hi)
{
int lo=0;    
hi--;
int mid;
 
while(lo<=hi)
{
    mid=(lo+hi)/2;
    if(p[mid]==val)
    return mid;
    
    if(val<p[mid])
    hi=mid-1;
    else
    lo=mid+1;
    
    
}
    
return -1;
    
}
 
 
 
int main() {
int n,m,arr[10005],brr[10005],i,j;
 
 
while(1)
{
        scanf("%d",&m);
        if(m==0)
        break;
        
        for(i=0;i<m;i++)
        scanf("%d",&arr[i]);
        
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&brr[i]);
        
        int maxo,k;
        int prev=-1;
        int sum=0;
        long long int ans=0;
        for(i=0;i<m;i++)
        {
            sum+=arr[i];
            k=search(arr[i],brr,n);
            if(k!=-1)
            {
                maxo=0;
                for(j=prev+1;j<=k;j++)
                maxo+=brr[j];
                prev=k;
                ans+=max(sum,maxo);
                sum=0;
            }
        }
        maxo=0;
        for(j=prev+1;j<n;j++)
        maxo+=brr[j];
        ans+=max(sum,maxo);
         
        
        
        printf("%lld\n",ans);
    }
	return 0;
}
 
