#include <stdio.h>
#include <math.h>
double Calculdistance(double x1, double x2, double y1, double y2, double z1, double z2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main(){
    double x1, x2, y1, y2, z1, z2, distance;
       printf("first coordinates of (x1, y1, z1)"); 
       scanf("%lf %lf %lf", &x1, &y1, &z1);

       printf("second coordinates of (x2, y2, z2)");
       scanf("%lf %lf %lf", &x2, &y2, &z2);

       distance = Calculdistance(x1,x2,y1,y2,z1,z2);

       printf("distance is: %.2f", distance);
       return 0;
}

