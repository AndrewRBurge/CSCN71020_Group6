#include <stdio.h>
#include <math.h>

// group 6

void get_triangle_input() {
}

void get_rectangle_input() {
   //set up values
    int point1;
    int point2;
    int point3;
    int point4;
    int length;
    int width;
    int p;
    int area;
    int rectangle;
   
    //request input
    printf("please input value");
    int numsymbols = scanf("%d", length);
    int numsymbols = scanf("%d", width);


    //request point 1 

    //requst point 2 

    //request point 3 

    //requst point 4 

    // check if this shape is rectangle
    // take the distance of each line and use them to determine if they have 4 90^0 angles

    //calculate length and width
        //length = x of point 1 - x of point 2
        // width = y


     //output parmanitor 
    p = length + width * 2;

    //double check if its rectangle
    if (rectangle == 1) {
       
        //output area
        area = length * width;

    }
    else {
        rectangle = 0;
    }
   
    //test calcualtions
   // printf("%d", area);
    


}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        if (choice == 1) {
            get_triangle_input();
        }
        else if (choice == 2) {
            get_rectangle_input();
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
