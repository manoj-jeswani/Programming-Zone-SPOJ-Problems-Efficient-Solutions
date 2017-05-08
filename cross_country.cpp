// Problem Link
// http://www.spoj.com/problems/CRSCNTRY/

#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;
 
int mat[2004][2004];
 
int main() {
    
vector<int> vec,agn;
int i,j,d,ans,t;
 
for(i=0;i<agn.size();i++)
mat[0][i]=0;
    
for(i=0;i<vec.size();i++)
mat[i][0]=0;
 
scanf("%d",&t);
while(t--)
    {
            while(1)
            {
                scanf("%d",&d);
                if(d==0)
                break;
                agn.push_back(d);
                
            }
            
            ans=0;
            
        while(1)
        {
                
            
            while(1)
            {
                scanf("%d",&d);
                if(d==0)
                break;
                vec.push_back(d);
                
            }
            
            if(vec.size()==0)
            break;
            
            for(i=1;i<=vec.size();i++)
            {
            
                    for(j=1;j<=agn.size();j++)
                    {
                        if(vec[i-1]==agn[j-1])
                        mat[i][j]=mat[i-1][j-1]+1;
                        else
                        mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                        
                    }
                
                
            }
            if(ans<mat[i-1][j-1])
            ans=mat[i-1][j-1];
            vec.clear();
        }
            
            
            printf("%d\n",ans);
            agn.clear();
    
    }
/*
for(i=0;i<=vec.size();i++)
{
 
        for(j=0;j<=agn.size();j++)
        {
            printf("%d ",mat[i][j]);
        }
    printf("\n");
    
}
*/
	// your code goes here
	return 0;
}
 
