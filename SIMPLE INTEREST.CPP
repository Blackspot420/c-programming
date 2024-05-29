#include<stdio.h>

#define principal 1200
#define time 5.0
#define rate 7.0


int main()
{
    float SI;
    
    SI=(principal*time*rate)/100;
    
    printf("Simple Interest =%f", SI);


    return 0;
}
