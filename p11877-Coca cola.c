#include<stdio.h>
int main(){
 int n,e,x,r=0;

    while(scanf("%d",&n)==1)
     {
      if(n<=1)
         break;
         r=0;
      while(n>2){
         x=n/3;
         r+=x;
         e=n-(x*3);
         n=x+e;
         x=0;
      }
      if(n==2)
         r++;
    printf("%d\n",r);
    }
 return 0;
}
