//program to testify whether a number entered by the user a is greater, less than or equal to a number b entered by the user

#include<stdio.h>

int main(){
    
    int a, b;
    
    printf("please enter the value of a: \n");
    scanf("%d", &a);
    
    printf("please enter the value of b: \n");
    scanf("%d", &b);
    
    if (a > b){
        printf("\n a is greater than b");
    }
    else if (a < b){
        printf("\n a is less than b");
    }
    else { printf("\n a is equal to b");
    }
    return 0;
}
