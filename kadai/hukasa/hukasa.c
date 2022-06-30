# include<stdio.h>

#define N 6 
int a[N+1][N+1]={{0,0,0,0,0,0,0},
		 {0,0,1,0,1,1,0},
                 {0,1,0,1,0,0,0},
                 {0,0,1,0,0,0,0},
                 {0,1,0,0,0,1,1},
                 {0,1,0,0,1,0,1},
                 {0,0,0,0,1,1,0}};
int v[N+1];
void dfs(int);;/*訪問したかの記しておく*/

int main(void)/*実際に探索する*/
{
  int i;
  for (i=1; i<=N; i++)
    v[i]=0;
  dfs(1);
 printf("\n");
 return 0;
}

void dfs(int i)
{
 int j;
 v[i]=1;
 for (j=1; j<=N; j++){/*印を初期化する*/
   if (a[i][j]==1&&v[j]==0){
     printf("%d->%d",i,j);
     dfs(j);
   }
}
}
