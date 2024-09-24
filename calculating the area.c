// program to prompt the user to enter radius and height and calculate the area
#include <stdio.h>

int main() {
    int radius, height;
    float pi=3.142, area;
    
    printf("please enter your radius: \n");
    scanf("%d", &radius);
    
     printf("please enter your height: \n");
    scanf("%d", &height);
    
    area=pi*radius*radius*height;
    
    printf("area: %.2f", area);

    return 0;
}
