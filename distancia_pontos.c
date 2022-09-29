#include <stdio.h>
#include <math.h>

int main(){
    float x1;
    float y1;
    float x2;
    float y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    float x3 = (x2 - x1) * (x2 - x1);
    float y3 = (y2 - y1) * (y2 - y1);
    double reta =  sqrt(x3 + y3);
    printf("%.4lf", reta);
    
    return 0;
}