#include math.io
#include <stdio.h>

//PROG71990-Group6project-w2025-BasilVavasis

//function for first feature to determine whether inputs make a trangle and if so what kind
void get_triangle_input() {
    //initializing the variables for the side lengths
    float sideLength1 = 0;
    float sideLength2 = 0;
    float sideLength3 = 0;
    //take the scans from the user to determine the side lengths
    printf("\n input three triangle side lengths below as any number\n");
    scanf("%f\n", sideLength1);
    scanf("%f\n", sideLength2);
    scanf("%f\n", sideLength3);
	//if statement to determine if the inputs make a real triangle
	//the logic is that if on side is greater than the sum of the other two it cannot be a triangle
	if (sideLength1 + sideLength2 > sideLength3 && sideLength1 + sideLength3 > sideLength2 && sideLength2 + sideLength3 > sideLength1) {
		break;
	}
	else {
		printf("This is not a triangle\n");
		return;
	}
	//Another if statement to see what type of triangle the user has inputted
	if (sideLength1 == sideLength2 && sideLength2 == sideLength3) {
		printf("This is an equilateral triangle\n");
		return;
	}
	else if (sideLength1 == sideLength2 || sideLength2 == sideLength3 || sideLength1 == sideLength3) {
		printf("This is an isosceles triangle\n");
		return;
	}
	else {
		printf("This is a scalene triangle\n");
		return;
	}




}
