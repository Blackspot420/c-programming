// loan qualification
#include <stdio.h>

int main() {
    int age, income;
    
    printf("please enter your age: \n");
    scanf("%d, age");
    
    printf("please enter your income: \n");
    scanf("%d, income");
    
    if(age>=21 && income>=21000){
    printf("you qualify for loan");
    }else
    printf("try next time");

    return 0;
}
