#include<stdio.h>
int main() {
    float length, width;
     printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("Area of the rectangle: %f\n", area);
    printf("Perimeter of the rectangle: %f\n", perimeter);

    return 0;
}

    