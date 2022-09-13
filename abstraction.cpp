#include<bits/stdc++.h>
using namespace std;

// Expample of Abstraction

class TradeFair
{
private:
   int coupon;
public:
   void setCoupon(int c){
    this->coupon=c;
   }

   int getCoupon(){
    return coupon;
   }
};


int main(){
   TradeFair t;
   t.setCoupon(20);
   cout<<"Coupon = "<<t.getCoupon();
    return 0;
}