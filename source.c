#include <stdio.h>
#include <math.h>

// group 6

void get_triangle_input() {
}

void get_rectangle_input() {
   //set up values
    int arrX[4];
    int arrY[4];  
    int RectX[4];
    int RectY[4];
    int length;
    int length2;
    int width;
    int p;
    int area;
   int rectangle = 1;
   
    //request input
    //printf("please input value\n");
    //int numsymbols = scanf("%d %d", &length, &width);
   // int numsymbols = scanf("%d", ;
    printf("1-----2\n|     |\n|     |\n|     |\n4-----3\n   \n");

    for (int i = 0; i < 4; i++) {
       int counter = i + 1;
        printf("please input point %d \"x y\" below:\n",counter);
        int numsymbols = scanf("%d %d", &arrX[i], &arrY[i]);
    }

    for (int i = 0; i < 4; i++) {
        int counter = i + 1;
            printf("point %d is X: %d y: %d\n", counter, arrX[i], arrY[i]);

    }

    // check if this shape is rectangle
    // take the distance of each line and use them to determine if they have 4 90^0 angles
    
    
    RectX[1] = arrX[1];
    RectY[1] = arrY[1];
    //point1 is arrX[1] and arrY[1]
    
    for(int i = 2; i < 4; i++){
    
        int rectFound;
        int D4 = 0;
        int D2 = 0;
        int D3 = 0;
        if (arrX[1] == arrX[i]) {
            RectX[4] = arrX[i];
            RectY[4] = arrY[i];
            D4 = D4 + 1;
        }

        if (arrY[1] == arrY[i]) {
            RectY[2] = arrY[i];
            RectX[2] = arrX[i];
            D2 = D2 + 1;

        }

        if (arrX[1] != arrX[i] && arrY[1] != arrY[i]) {
            RectX[3] = arrX[i];
            RectY[3] = arrY[i];
            D3 = D3 + 1;
        }


        if (D4 + D2 + D3 != 3) {
            rectangle = 0;

        }
    
    
    }

     length = RectX[1] - RectX[2];
    
     length2 = RectX[4] - RectX[3];

    if (length == length2){

        rectangle = 1;
    
    }
    

    //calculate length and width
    length = RectX[1] - RectX[2];
    width = RectY[1] - RectY[4];


     //output parmanitor 
   // p = length + width * 2;
   // printf("p = %d", p);

    //double check if its rectangle
    if (rectangle == 1) {
       
        //output area
       // area = length * width;
       // printf("is rectangle");

    }
    else {
        rectangle = 0;
        //printf("is not a rectangle");
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
