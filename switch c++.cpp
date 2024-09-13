/*program to prompt the user to enter a number between 1 and 7 and then displaying the corresponding day of the week depending on the input from the user*/
#include <iostream>
using namespace std;

int main() {
    int week;
    
    cout<<"enter a number between 1 to 7: "<<endl;
    cin>>week;
    
    switch(week)
    
    {
     case 1:
     cout<<"MONDAY"<<endl;
     break;
     
      case 2:
     cout<<"TUESDAY"<<endl;
      break;
      
      case 3:
     cout<<"WEDNESDAY"<<endl;
     break;
     
     case 4:
     cout<<"THURSDAY"<<endl;
     break;
     
     case 5:
     cout<<"FRIDAY"<<endl;
     break;
     
     case 6:
     cout<<"SATURDAY"<<endl;
     break;
     
     case 7:
     cout<<"SUNDAY"<<endl;
     break;
     
     default:
     cout<<"INVALID NUMBER!!"<<endl;
      
    }
    

    return 0;
}
