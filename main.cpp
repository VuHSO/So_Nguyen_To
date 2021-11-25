#include <bits/stdc++.h>

using namespace std;
int n;
int a[10000000];

int nt(int x)
{
    if(x<2) return 0;
    for(int i =2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
    return 1;
}
void doc()
{
    freopen("SNT.INP","r",stdin);
    freopen("SNT.OUT","w",stdout);
    cin>>n;
    int x=1,kt = 1;

       for(int i = 2;i<=n;i++)
        if(nt(i))
       {
           a[x]=i;
           x++;
       }
       for(int i =1;i<=x-4;i++)
       {
           if(n == (a[i] + a[i +1] + a[i + 2] + a[i + 3]))
                        {
                        kt =0;
                        cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<" "<<a[i+3];
                        break;
                        }
            if(n < (a[i] + a[i+1] + a[i + 2] + a[i + 3])) break;
       }
       if(kt) cout<<0;
}
int main()
{
    doc();
    return 0;
}
