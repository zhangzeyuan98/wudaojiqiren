#include "my1.h"
void maopao(int c[],int m)
{
    int j=0,i=0,t;
    for(;j<m;j++)
        for(;i<m-1-j;i++)
            if(c[i]>c[i+1])
              t=c[i],c[i]=c[i+1],c[i+1]=t;
}
