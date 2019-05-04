#include<iostream>
#include<stdio.h>
#include<stack>
#include<math.h>
#define fi freopen("input.txt","r+",stdin)
#define fo freopen("output.txt","w+",stdout)
using namespace std;
int main()
{
    /*fi;
    fo;*/
    int i,t;
    /*variables*/
    double n;
    stack <double> st;
    while(cin>>n)
    {
        st.push(sqrt(n));
    }
    while(!st.empty())
    {
        printf("%.4lf\n",st.top());
        st.pop();
    }
    return 0;
}
