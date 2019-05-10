
#include<iostream>
#include<stdio.h>
#include<math.h>
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
#define LL long long
#define MD 1000007
#define MX 100005
#define iscn()({ int a;scanf("%d",&a);a;})
#define liscn()({ ll a;scanf("%lld",&a);a;})
#define dscn()({ double a;scanf("%lf",&a);a;})
#define fi freopen("input.txt","r+",stdin)
#define fo freopen("output.txt","w+",stdout)
using namespace std;

/*............start.............*/
int main()
{
    fi;
    fo;
    int i,n;
    int a[MX];
    a[0]=0;
    a[1]=1;
    for(i=1;(2*i+1)<MX;i++)
    {
        a[2*i]=a[i];
        a[2*i+1]=a[i]+a[i+1];
    }
    while(n=iscn())
    {
        int ans=a[n];
        for(i=0;i<n;i++)
        {
            if(a[i]>ans)
                ans=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
