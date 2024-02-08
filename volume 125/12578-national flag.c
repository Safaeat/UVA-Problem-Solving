#include<stdio.h>
int main() {
    int t, i;
    double l, w, r, areaofcircle, areaofradius;

    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%lf", &l);
        w = l * 0.6;
        r = l / 5.0;

        areaofcircle = l * w;
        areaofradius = 3.14159265359 * r * r;
        printf("%0.2lf %0.2lf\n", areaofradius, (areaofcircle  - areaofradius));
    }
    return 0;
}
