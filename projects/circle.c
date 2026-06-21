#include <stdio.h>
#include <math.h>

int main() {

    double radius = 0.0f;
    double area = 0.0f;
    double surface_area = 0.0f;
    double volume = 0.0f;
    const double PI = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius); // Note the use of %lf for double input

    area = PI * pow(radius, 2); // Area of the circle
    surface_area = 4 * PI * pow(radius, 2); // Surface area of the sphere
    volume = (4.0 / 3.0) * PI * pow(radius, 3); // Volume of the sphere

    printf("Area of the circle: %.2lf centimeters squared\n", area); // Print area with 2 decimal places
    printf("Surface area of the sphere: %.2lf centimeters squared\n", surface_area); // Print surface area with 2 decimal places
    printf("Volume of the sphere: %.2lf centimeters cubed\n", volume); // Print volume with 2 decimal places

    return 0;
}
