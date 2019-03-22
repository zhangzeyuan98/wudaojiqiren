#include "my1.h"
#include<iostream>
using namespace std;
int main()
{
    int m,n,A[100],B[100],c[100];
    int i,j,s=0,cnt=0,x=0;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(i=0;i<n;i++) cin>>A[i];
        for(j=0;j<m;j++) cin>>B[j];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(A[i]==B[j]) s++;
            }
            if(s==0){
                c[x]=A[i];
                x++;
                cnt++;
            }
               s=0;
           }
           if(cnt!=0){
              maopao(c,cnt);
              for(int d=0;d<cnt;d++)
                  cout<<c[d]<<" ";
              cout<<endl;
           }
           else
           cout<<"NULL"<<endl;
           x=0,cnt=0;
       } 
    return 0;
}
