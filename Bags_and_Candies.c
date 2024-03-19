#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    int cand = k*m;
    int bags = n/cand;
    if(n%cand == 0)
    {
        printf("%d",bags);
    }
    else{
        printf("%d ",bags+1);
    }
}