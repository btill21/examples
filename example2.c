#include <stdio.h>

int main(){
    const double PI = 3.14159; // Added semicolon here
    double radius;
    double area;
    
    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);
    
    area = PI * radius * radius; // Calculate area of the circle
    
    printf("Area: %.2lf\n", area); // Format output to show two decimal places
    
    return 0;
}

