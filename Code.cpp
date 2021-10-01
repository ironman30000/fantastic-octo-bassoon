
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;

int s[100005],p[100005];
int fin(int i)
{
    if(i==p[i])
        return i;
    return p[i]=fin(p[i]);
}

void mak(int a,int b)
{
    if(s[a]<s[b])
        swap(a,b);
    p[b]=a;
    s[a]+=s[b];
}

int main()
{       
    
    int n,m,x,y;
    cin>>n>>m;
    f(i,0,n)
    {
        p[i]=i;
        s[i]=1;
    }
    f(i,1,m)
    {
        cin>>x>>y;
        x=fin(x);
        y=fin(y);
        if(x!=y)
            mak(x,y);
    }
    f(i,1,n)
    {
        cout<<s[fin(i)]-1<<" ";
    }
}
