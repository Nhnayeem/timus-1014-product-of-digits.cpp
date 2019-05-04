#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>

#define ll long long
#define mx 1000007
#define iscn()({ int a;scanf("%d",&a);a;})
#define liscn()({ ll a;scanf("%lld",&a);a;})
#define dscn()({ double a;scanf("%lf",&a);a;})
#define fi freopen("input.txt","r+",stdin)
#define fo freopen("output.txt","w+",stdout)
using namespace std;

/*............start.............*/
string mul;
ll Div(ll n)
{
    int i;
    if(n/10==0)
    {
        mul+=(char) (n+'0');
        return 1;
    }
    for(i=9; i>=2; i--)
    {
        if(n%i==0)
            break;
    }
    if(i<=2 && n%2!=0)
        return -1;
    mul+=(char) (i+'0');
    return Div(n/i);
}
int main()
{
    //fi;
    //fo;
    int i,n=liscn();
    i=Div(n);
    if(n==0)
        cout<<"10"<<endl;
    else if(i==-1)
        cout<<"-1"<<endl;
    else
    {
        reverse(mul.begin(),mul.end());
        cout<<mul<<endl;
    }
    return 0;
}
