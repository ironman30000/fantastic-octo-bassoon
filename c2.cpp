
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
    
}


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
    
}
