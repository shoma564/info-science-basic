#include <stdio.h>
long kaijo(int);

int main(void){
    int n;
    n=4;
    printf("%d!=%d\n" ,n,kaijo(n));
}
long kaijo(int n)
{
    if (n==0)
      return 1L;
    else
      return n*kaijo(n-1);
}
