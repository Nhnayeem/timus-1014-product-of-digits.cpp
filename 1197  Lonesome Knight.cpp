
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
    int i,j,n=iscn();
    int ans[8][8]={
                {2,3,4,4,4,4,3,2},
                {3,4,6,6,6,6,4,3},
                {4,6,8,8,8,8,6,4},
                {4,6,8,8,8,8,6,4},
                {4,6,8,8,8,8,6,4},
                {4,6,8,8,8,8,6,4},
                {3,4,6,6,6,6,4,3},
                {2,3,4,4,4,4,3,2}
                };
    while(n--)
    {
        char a;
        cin>>a>>i;
        j=a-97;
        cout<<ans[i-1][j]<<endl;
    }
    return 0;
}
