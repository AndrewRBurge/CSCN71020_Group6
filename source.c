#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// group 6


//PROG71990-Group6project-w2025-BasilVavasis

//function for first feature to determine whether inputs make a trangle and if so what kind
int get_triangle_input(float sideLength1, float sideLength2, float sideLength3) {
   
    //if statement to determine if the inputs make a real triangle
    //the logic is that if on side is greater than the sum of the other two it cannot be a triangle
    if (sideLength1 + sideLength2 > sideLength3 && sideLength1 + sideLength3 > sideLength2 && sideLength2 + sideLength3 > sideLength1) {
        
        //Another if statement to see what type of triangle the user has inputted
        if (sideLength1 == sideLength2 && sideLength2 == sideLength3) {
            printf("This is an equilateral triangle\n");
            return 1;
        }
        else if (sideLength1 == sideLength2 || sideLength2 == sideLength3 || sideLength1 == sideLength3) {
            printf("This is an isosceles triangle\n");
            return 2;
        }
        else {
            printf("This is a scalene triangle\n");
            return 3;
        }

    }
    else {
        printf("This is not a triangle\n");
        return 0;
    }
 

}

bool get_rectangle_input(int arrX[], int arrY[]) {


    float length;
    float width;
    float area;
    float perimeter;
    bool isRectangle = false;

    // Calculate vector components for each side
    int dx1 = arrX[1] - arrX[0];  // side 1-2
    int dy1 = arrY[1] - arrY[0];

    int dx2 = arrX[2] - arrX[1];  // side 2-3
    int dy2 = arrY[2] - arrY[1];

    int dx3 = arrX[3] - arrX[2];  // side 3-4
    int dy3 = arrY[3] - arrY[2];

    int dx4 = arrX[0] - arrX[3];  // side 4-1
    int dy4 = arrY[0] - arrY[3];

    // Check all four angles using dot product
    int dot1 = dx1 * dx2 + dy1 * dy2;
    int dot2 = dx2 * dx3 + dy2 * dy3;
    int dot3 = dx3 * dx4 + dy3 * dy4;
    int dot4 = dx4 * dx1 + dy4 * dy1;

    if (dot1 == 0 && dot2 == 0 && dot3 == 0 && dot4 == 0) {
        isRectangle = true;
    }

    // Calculate side lengths using distance formula
    length = sqrt(dx1 * dx1 + dy1 * dy1);
    width = sqrt(dx2 * dx2 + dy2 * dy2);

    perimeter = 2 * (length + width);
    area = length * width;
    printf("Perimeter: %.2f\n", perimeter);

    printf("\n--- Results ---\n");
    if (isRectangle) {
        printf("It is a rectangle.\n");
        printf("Length: %.2f\n", length);
        printf("Width : %.2f\n", width);
     
        printf("Area     : %.2f\n", area);
    }
    else {
        printf("The shape is NOT a rectangle.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        if (choice == 1) {
            //initializing the variables for the side lengths
            float sideLength1 = 0;
            float sideLength2 = 0;
            float sideLength3 = 0;
            //take the scans from the user to determine the side lengths
            printf("\n input three triangle side lengths below as any number\n");
            scanf("%f", &sideLength1);
            scanf("%f", &sideLength2);
            scanf("%f", &sideLength3);


            get_triangle_input(sideLength1,sideLength2,sideLength3);
        }
        else if (choice == 2) {
            int arrX[4];
            int arrY[4];
            

            printf("Enter coordinates for 4 points in order: \n");
            printf("1-----2\n|     |\n|     |\n|     |\n4-----3\n\n");

            for (int i = 0; i < 4; i++) {
                printf("Please input point %d (x y): ", i + 1);
                scanf("%d %d", &arrX[i], &arrY[i]);
            }

            get_rectangle_input(arrX[4], arrY[4]);
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
