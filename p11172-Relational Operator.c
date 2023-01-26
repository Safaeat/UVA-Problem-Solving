#include<stdio.h>
int main(){
   int a,n,m;
   scanf("%d",&a);
 while(a<=15){
    scanf("%ld %ld",&n,&m);
       if(n<m){
            printf("<\n");
            a--;
       }else if(n>m){
            printf(">\n");
            a--;
       }else if(n==m){
            printf("=\n");
            a--;
       }
       if (a==0){
        break;
       }
   }
 return 0;
}
