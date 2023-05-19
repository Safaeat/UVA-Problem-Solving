#include<stdio.h>
int main(){
 long long int a, b;
 int ans,carry=0,temp;
 scanf("%lld ,%lld",a, b);
while(1){
 if(a==0 && b ==0){
        ans=0;
        carry=0;
        break;
 }else if(a<b){
        temp = b;
        b = a;
        a = temp;
    }
 while(a !=0){
            a=a%10;
            b=b%10;
            ans=0;
            ans=a+b+carry;
            if(a+b>=10){
                carry++;
            }
        }
}
 if(carry==0){
    printf("No carry operation.\n");
 }else{
    printf("%d carry operation.\n",carry);
 }

return 0;
}
