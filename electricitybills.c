// electricity bills
#include <stdio.h>

int main() {
    int CustomerId, CustomerName, UnitConsumed, Charges_perUnit, bill, surcharge;
    printf("please enter CustomerId, CustomerName, UnitConsumed:");
    scanf("%d%c%d, CustomerId, CustomerName, UnitConsumed");
    
    bill=UnitConsumed*Charges_perUnit;
    
    bill>100;
    
    if (UnitConsumed >=0 && UnitConsumed<=199)
    {bill=UnitConsumed*1.20 ;}
    else if(UnitConsumed>=200 &&UnitConsumed <=400)
    {bill=UnitConsumed*1.50 ;}
    else if(UnitConsumed >=400 && UnitConsumed<=600)
     {bill=UnitConsumed*1.80 ;}
    else if(UnitConsumed>=600)
     {bill=UnitConsumed*2.00 ;}
     
     if (bill>400)
     {surcharge=15/100*bill; 
     }
     printf("%f\n", bill);
 


    return 0;
}

