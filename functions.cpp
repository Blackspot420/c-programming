//functions
#include <iostream>
using namespace std;
float calculate_interest(int principal, float rate, int time);

int
int main() {

int principal, time;
float interest, rate;
cout<<"enter the principal amount, rate and the time: "<<endl;
cin>>principal>>rate>>time;
//function call
interest=calculate_interest(principal, rate, time);

cout<<"the Simple_interest is: "<<interest<<endl;
    

    return 0;
}
//function definition
float calculate_interest(int principal, float rate, int time)
{
    float interest;
interest = (principal*rate*time)/100;
return interest;
}
