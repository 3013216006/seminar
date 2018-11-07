#include <bits/stdc++.h>
using namespace std;

int fa[200000];
int dfn[200000],low[200000];
int head[200000];
struct Node{
	int num,next,i;
}edge[1000100];
int cnt;
struct sav{
	int x,y,c,d;
}a[502000];

bool cmp(sav a, sav b){
	return a.c<b.c;
}
bool cmp1(sav a, sav b){
	if(a.x==b.x) return a.y<b.y;
	return a.x<b.x;
}
void add(int x,int y,int i){
	edge[cnt].next=head[x];
	edge[cnt].num=y;
	edge[cnt].i=i;
	head[x]=cnt++;
	edge[cnt].next=head[y];
	edge[cnt].num=x;
	edge[cnt].i=i;
	head[y]=cnt++;
}

int find(int x){
	if(fa[x]==x) return x;
	else return fa[x]=find(fa[x]);
}

void dfs(int x,int f){
	dfn[x]=low[x]=++cnt;
	for(int i=head[x];i!=-1;i=edge[i].next){
		int v = edge[i].num;
		if(!dfn[v]){
			dfs(v,x);
			low[x] = min(low[x],low[v]);
			if(dfn[x]<low[v]){
				a[edge[i].i].c=a[edge[i].i].d;
			}
		}
		else if(v!=f) low[x] = min(low[x], dfn[v]);
	}
}

int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		cnt=0;
		memset(head,-1,sizeof(head));
		for(int i=0;i<m;i++){
			scanf("%d%d%d%d",&a[i].x,&a[i].y,&a[i].c,&a[i].d);
			if(a[i].x>a[i].y) swap(a[i].x,a[i].y);
			//add(a[i].x,a[i].y,i);
		}
		sort(a,a+m,cmp1);
		for(int i=0;i<m;i++){
			if(i&&a[i].x==a[i-1].x&&a[i].y==a[i-1].y){
					a[i-1].d=a[i-1].c;
			}
			else add(a[i].x,a[i].y,i);
		}
		memset(dfn,0,sizeof(dfn));
		memset(low,0,sizeof(low));
		cnt=0;
		dfs(1,0);
		for(int i=1;i<=n;i++) fa[i]=i;
		sort(a,a+m,cmp);
		int ans=0;
		for(int i=0;i<m;i++){
//			cout << a[i].x << " " << a[i].y << " " << a[i].c << endl;
			int fax=find(a[i].x),fay=find(a[i].y);
			if(fax==fay) continue;
			fa[fax]=fay;
			ans+=a[i].c;
		}
		printf("%d\n",ans);
	}
}
