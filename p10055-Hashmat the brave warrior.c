#include<stdio.h>
int main(){
  long long int a,b,sub;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    if(a<b){
        sub=b-a;
        printf("%lld\n",sub);
    }else{
    sub=a-b;
    printf("%lld\n",sub);
    }
  }
 return 0;
}
