#include<stdio.h>
#include<math.h>
#define mx 65535
int cmp(double a)
{
    int b=a;
    return b==a;
}
int main()
{
    int n,i;
    int k[mx];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",cmp((sqrt((k[i]*8.0)-7.0)-1.0)/2.0));
    }
    return 0;
}
