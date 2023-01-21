#include<stdio.h>
int main()
{
  int v,t,result;
  while(scanf("%d %d",&v,&t)!=EOF)
  {
    result=2*v*t;
    printf("%d\n",result);
  }
  return 0;
}
