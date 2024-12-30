#include <stdio.h>
#include <math.h>
#define PI 3.14159

enum Shape {
    CIRCLE,
    RECTANGLE,
    TRIANGLE,
    EXIT
};


void calculateArea(enum Shape shape);

int main() {
    int choice;

    do {

        printf("\nSelect a shape to calculate the area:\n");
        printf("0. Circle\n");
        printf("1. Rectangle\n");
        printf("2. Triangle\n");
        printf("3. Exit\n");
        printf("Enter your choice (0-3): ");
        scanf("%d", &choice);

        if (choice >= CIRCLE && choice <= TRIANGLE) {
            calculateArea((enum Shape)choice);
        } else if (choice == EXIT) {
            printf("Exiting the program.\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != EXIT);

    return 0;
}

void calculateArea(enum Shape shape) {
    switch (shape) {
        case CIRCLE: {
            double radius;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            double area = PI * radius * radius;
            printf("Area of the circle: %.2lf\n", area);
            break;
        }
        case RECTANGLE: {
            double length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%lf %lf", &length, &width);
            double area = length * width;
            printf("Area of the rectangle: %.2lf\n", area);
            break;
        }
        case TRIANGLE: {
            double base, height;
            printf("Enter the base and height of the triangle: ");
            scanf("%lf %lf", &base, &height);
            double area = 0.5 * base * height;
            printf("Area of the triangle: %.2lf\n", area);
            break;
        }
        default:
            printf("Invalid shape.\n");
            break;
    }
}
