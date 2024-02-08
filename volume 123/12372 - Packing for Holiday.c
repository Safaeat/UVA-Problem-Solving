#include<stdio.h>
int main(){
  int w, h, l, t;
  scanf("%d\n", &t);
  for(int i = 1; i <= t; i++){
    scanf("%d %d %d",&w ,&h ,&l);
    if(w <= 20 && h <= 20 && l <=20){
        printf("Case %d: good\n", i);
    }else{
        printf("Case %d: bad\n", i);
    }
  }
return 0;
}
