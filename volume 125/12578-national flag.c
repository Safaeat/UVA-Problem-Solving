#include<stdio.h>
int main(){
 int n;
 double l, w, area, radious, ar, ans;
 scanf("%d", &n);

 for(int i = 0; i < n; i++){
    scanf("%lf", &l);
    w = l * (.6);
    radious = l / 5.0;
    area = w * l;
    ar = 3.14159265359 * radious * radious;
    ans = area - ar;
    printf("%.2f %.2f\n", ar ,ans);
 }

return 0;
}
