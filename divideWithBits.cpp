#include"iostream"
using namespace std;
int main(){
    int dividend, divisor, quotient;
    cin>>dividend>>divisor;
     dividend = abs(dividend);
  divisor = abs(divisor);
      int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
      int i = 1;
    while((divisor<<i)<=dividend){
        i++;
    }
    i = i-1;
    cout<<(sign*i);
    return(0);

}