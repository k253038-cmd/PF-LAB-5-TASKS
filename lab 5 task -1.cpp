
#include <stdio.h>

int main() {
    char color;


    printf("Enter traffic light color (R=Red, Y=Yellow, G=Green): ");
    scanf(" %c", &color);  

    
    if (color == 'R' || color == 'r') {
        printf("Action: Stop\n");
    } 
    else {
        if (color == 'Y' || color == 'y') {
            printf("Action: Caution\n");
        } 
        else {
            if (color == 'G' || color == 'g') {
                printf("Action: Go\n");
            } 
            else {
                printf("Invalid input! Use R, Y, or G.\n");
            }
        }
    }

    return 0;
}
