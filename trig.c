#include math.io
#include <stdio.h>

//PROG71990-Group6project-w2025-BasilVavasis

int triCalc() {
    float sidelength1 = 0;
    float sidelength2 = 0;
    float sidelength3 = 0;
    printf("\n input three triangle side lengths below as any number\n");
    scanf("%f\n", sideLength1);
    scanf("%f\n", sideLength2);
    scanf("%f\n", sideLength3);
	if (sideLength1 + sideLength2 > sideLength3 && sideLength1 + sideLength3 > sideLength2 && sideLength2 + sideLength3 > sideLength1) {
		printf("This is a triangle\n");
	}
	else {
		printf("This is not a triangle\n");
	}
	if (sideLength1 == sideLength2 && sideLength2 == sideLength3) {
		printf("This is an equilateral triangle\n");
	}
	else if (sideLength1 == sideLength2 || sideLength2 == sideLength3 || sideLength1 == sideLength3) {
		printf("This is an isosceles triangle\n");
	}
	else {
		printf("This is a scalene triangle\n");
	}




}
