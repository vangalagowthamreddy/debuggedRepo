#include <stdio.h>
#define max 999999
int nextup();
int A[3001][3001],n;
int state[3001];
int length[3001];
int weight[3001][3001];
void djitra(int s)
{

	length[s]=0;
	while (1){
		int cur=nextup(),i;
		if (cur==-1) return;
		state[cur]=1;
		for (i=1;i<=n;i++)
		{
			if (!state[i]&&A[cur][i]&&length[i]>length[cur]+weight[cur][i])
			{
				length[i]=length[cur]+weight[cur][i];
			}
		}
	}
}
int nextup()
{
	int i,k=-1,min=max;
	for (i=1;i<=n;i++)
	{
		if (!state[i]&&length[i]<min)
			{
				min=length[i];
				k=i;
			}
	}
	return k;
}
int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int m,i;
		scanf("%d%d",&n,&m);
		for (i=1;i<=n;i++)
		{
			int j;
			for (j=1;j<=n;j++)
			{	A[i][j]=0;
                weight[i][j]=max;
            }
		}
		for (i=0;i<m;i++)
		{
			
			int x,y,w;
			scanf("%d%d%d",&x,&y,&w);
			A[x][y]=1;
			A[y][x]=1;
			if (w<weight[x][y]){
            weight[x][y]=w;
            weight[y][x]=w;}
		}
		int s;scanf("%d",&s);
		for (i=1;i<=n;i++)
		{
			state[i]=0;
			length[i]=max;
		}
		djitra(s);
		for (i=1;i<=n;i++)
		{
			if(i!=s)
				printf("%d ",(length[i]>=max)?-1:length[i]);
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}
