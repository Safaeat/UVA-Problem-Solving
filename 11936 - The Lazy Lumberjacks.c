#include<stdio.h>
int main(){
int i,a,b,c,d;
scanf("%d",&a);
for(i=1;i<=a;i++){
  scanf("%d %d %d",&b,&c,&d);
  if(b+c>d && b+d>c && c+d>b){
    printf("OK\n");
  }else{
    printf("Wrong!!\n");
  }
}
return 0;
}
