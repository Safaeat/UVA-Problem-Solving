#include<stdio.h>
int main(){
    int i,j,n=0,len=1;
    scanf("%d %d",&i,&j);
    for(n=i;n<=j;n++){

            printf("%d\n",n);
    while(n>0){
        if(n==1){
           len++;
           break;
        }else if(n%2==0){
           n=n/2;
           len++;
        }else if(n%2!=0){
           n=3*n+1;
           len++;
        }

    }

    //printf("%d\n ",len);
    }     n=i;
 //printf("%d ",len);
 return 0;
}
