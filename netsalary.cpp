/*program to find the bonus the netsalary 
by prompting the user to enter their salary and the years served  then use them to calculate the bonus and netsalary*/
#include <iostream>
using namespace std;

int main(){
    int years_served;
    double salary, Bonus, netSalary;
    
    
    cout<<"please enter your salary  and years served"<<endl;
    cin>>salary>>years_served;
    
    if ( years_served > 10) {
        Bonus = 0.1 * salary;
        netSalary = Bonus + salary;
    }
    else if ( years_served >=6 && years_served <=10) 
    {
        Bonus = 0.08 * salary;
        netSalary = Bonus + salary;
    }
    
   else{
        Bonus = 0.05 * salary;
        netSalary = Bonus + salary;
    }
    cout<<Bonus<<endl;
   cout<<netSalary<<endl;
   
   
    return 0;
}
