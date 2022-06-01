#include <stdio.h>
#define ITI 6
#define NI 3
int pathkeiro[ITI][NI] = {
    {0},
    {2, 3, 0},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11},
    {0}
};
int route[ITI];
void initRoute(){
    int i;
    for(i = 0; i < ITI; i++){
        route[i] = 0;
    }

    return;
}
void dfs(int start, int target){
    int i;

    route[start] = 1;
    printf("%d→", start);
    if(start == target){
        printf("探索完了\n");
        return;
    }
    for(i = 0; pathkeiro[start][i] != 0; i++){
        if(route[pathkeiro[start][i]] == 0){
            dfs(pathkeiro[start][i], target);
        }
    }
}
int main(){
    initRoute();
    dfs(1, 6);

    return 0;
}
