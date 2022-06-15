#include <stdio.h>

#define N 6
#define M 9999

int a[N+1][N+1] = {{0,0,0,0,0,0},{0,0,4,3,M,M,M},{0,4,0,M,1,M,5},{0,3,M,0,4,3,M},{0,M,1,4,0,3,M},{0,M,M,3,3,0,2},{0,M,5,M,M,2,0}};

int main(void) {
    int j,k,p,min,distance[N+1],v[N+1];

for(k =1;k<=N;k++){
    distance[k] = M;        /*1を確定にしvを0にする*/
    v[k] = 0;
}
    distance[1] = 0;
do{
    min=M;
    for(k=1;k<=N;k++) {      /*次の頂点を確定させていく*/ /*ここで更新されなかったら終了(全部確定したら)*/
    if(v[k]==0 && distance[k]<min) {
        p=k;
        min=distance[k];
    }
}
v[p]=1;

    for(k=1;k<=N;k++) {
        if((distance[p]+a[p][k])<distance[k]){
            distance[k]=distance[p]+a[p][k];    /*kがもともとの距離より小さかったら更新*/
        } 
    }
}while(min<M);

for(j=1;j<=N;j++)
    printf("1 -> &d : %d\n",j,distance[j]);     /*1から各頂点の距離*/
    return 0;
}
