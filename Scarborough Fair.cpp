#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,l,r;
    cin>>n>>m;
    string khela;
    cin>>khela;
    char c1,c2;
    for(i=0; i<m; i++)
    {
        cin>>l>>r>>c1>>c2;
        for(j=l-1; j<=r-1; j++)
        {
            if(khela[j]==c1)
                khela[j]=c2;
        }
    }
    cout<<khela;
}
