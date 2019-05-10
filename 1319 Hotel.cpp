
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
    fi;
    fo;
    int i,j,c=0,t=iscn();
    int pxl[t][t];
    for(i=0;i<2*t;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i-j<t && j<t)
                pxl[i-j][j]=++c;
        }
    }
    
    for(i=0;i<t;i++)
    {
        for(j=t-1;j>=0;j--)
        {
            cout<<pxl[j][i]<<" ";
        }
        if(i!=t-1)
            cout<<endl;
    }
    return 0;
}
