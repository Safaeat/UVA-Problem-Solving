#include<stdio.h>
int main(){
  int n, butt, count, total=0;

  while(scanf("%d %d",&n, &butt) != EOF){
        total = n;
    while(n >= butt){

        count = n / butt;
        total = total + count;
        n = count + (n%butt);
    }
    printf("%d\n",total);
  }
return 0;
}
