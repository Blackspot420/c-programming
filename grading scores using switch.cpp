/*program to prompt the user to enter their score then find the average score of the subjects entered and grade them*/
#include<iostream>
using namespace std;

int main(){

int Chemistry, Biology, Physics, average_score;

cout<<"please enter scores "<<endl;
cin>>Chemistry>>Biology>>Physics;

average_score= (Chemistry+Biology+Physics)/3;

cout<<"average_score="<<(Chemistry+Biology+Physics)/3<<endl;

switch(average_score){
    
case 70 ... 100:
cout<<"Grade A"<<endl;
break;
 case 60 ... 69:
cout<<"Grade B"<<endl;  
break;
    case 50 ... 59:
cout<<"Grade C"<<endl;
break;
case 40 ... 49:
cout<<"Grade D"<<endl;
break;
 case 0 ... 39:
cout<<"Grade E"<<endl;  
break;
default:
cout<<"INVALID SCORE"<<endl;
break;
}
return 0;    
}

