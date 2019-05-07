#include<iostream>
#include<stdio.h>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<cstring>
#include<map>
#include<iterator>

#define pf first
#define ps second
#define pii pair<int,int>
#define ll long long
#define mx 1000007
#define iscn()({ int a;scanf("%d",&a);a;})
#define liscn()({ ll a;scanf("%lld",&a);a;})
#define dscn()({ double a;scanf("%lf",&a);a;})
#define fi freopen("input.txt","r+",stdin)
#define fo freopen("output.txt","w+",stdout)
using namespace std;

/*............start.............*/
int main()
{
    //fi;
    //fo;
    int n,i;
    double r,x[100],y[100];
    cin>>n>>r;
    r=2.0*(acos(-1.0))*r;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    x[n]=x[0];y[n]=y[0];
    for(i=1;i<=n;i++)
    {
        r+= sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2));
    }
    printf("%.2lf\n",r);
    return 0;
}
