#include<iostream>
using namespace std;
int product(int a, int b);
int main(){
    int ans, ans_1;
    // function call
   ans =  product(9,6);
   ans_1 = product(10,26);
   cout<<"the product is:"<<ans<<endl;
   cout<<"the product is:"<<ans_1<<endl;
    return 0;
}
int product (int a, int b) {
    int c;
  
    c = a * b;
   
    return c;

}
