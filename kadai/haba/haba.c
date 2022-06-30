# include<stdio.h>

#define N 6
int a[N+1][N+1]={{0,0,0,0,0,0,0},
                 {0,0,1,0,1,1,0},
                 {0,1,0,1,0,0,0},
                 {0,0,1,0,0,0,0},
                 {0,1,0,0,0,1,1},
                 {0,1,0,0,1,0,1},
                 {0,0,0,0,1,1,0}};/*配列の初期化*/


int v[N+1];

int queue[100];
int head=0, tail=0;

int main(void)
{
  int i,j;
  for (i=1; i<=N; i++)/*訪問したかの印*/
    v[i]=0;
  queue[tail++]=1;
  v[1]=1;
  do{
   i=queue[head++];
   for (j=1;j<=N;j++){/*印の初期化*/
     if (a[i][j]==1&&v[j]==0){
        printf("%d->%d " ,i,j);
        queue[tail++]=j;
        v[j]=1;
     }
   }
}
while(head!=tail);
printf("\n");
return 0;
}
