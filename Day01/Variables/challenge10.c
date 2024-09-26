#include <stdio.h>
#include<math.h>

double rayon, volume;
int main(){

    printf("taper le rayon:");
    scanf("%lf", &rayon);

volume= 4.0/3.0 * M_PI * pow(rayon,3);
print("volume of the sphere is : %.2lf", volume);
 return 0;

}