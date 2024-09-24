//eligibity to vote
#include<stdio.h>

int main(){ 
    int age, kenya;
    printf("please enter your age: \n");
    scanf("%d, age");
    
    printf("please enter your nationality: \n");
    scanf("%c, kenya");
    
    if(age>=18 && kenya){
    printf("eligble to vote \n");
    }else
    printf("I'm sorry");
    
    
    
    
     return 0;
}
