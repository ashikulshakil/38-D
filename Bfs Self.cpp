#include<stdio.h>
#include<queue>
#include<cstring>

Metropolitan university 
city campus 
zindabazar ,
sylhet 
using namespace std;
#define sz 110
queue<int>Q;
bool matrix[sz][sz];
bool visit[sz];
int dist [sz];
int BFS(int start,int en,int n)
{
    memset(visit,0,sizeof(visit));
    memset(dist,-1,sizeof(dist));
    visit[start]=1;
    dist[start]=0;
    Q.push(start);
    int i,u;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(i=1; i<=n; i++)
        {
            if(matrix[u][i]==1&&visit[i]==0)
            {
                visit[i]=1;
                dist[i]=dist[u]+1;
                Q.push(i);
            }
        }
    }
    return dist[en];
}
int main()
{
    int a,b,m,j,k,i,c;
    while(scanf("%d",&a)==1)
    {
        scanf("%d",&m);
        for(i=0; i<m; i++)
        {
            scanf("%d%d",&j,&k);
            matrix[j][k]=matrix[k][j]=1;
        }
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {
            scanf("%d%d",&j,&k);
            c=BFS(j,k,a);
            printf("%d\n",c);

        }
    }
    return 0;
	jgdhfgujdfkdgf jdhkdghjdgdjdjkgf 
}
