#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d,r1,r2,real_part,img_part;
cout<<"Enter coefficient of a,b,c : ";
cin>>a>>b>>c;
d = b*b-4*a*c;
if(d>0){
    r1 = -b+sqrt(d)/(2*a);
    r2 = -b-sqrt(d)/(2*a);
    cout<<r1<<" "<<r2;
}
else if(d==0){
    r1 = -b/(2*a);
    cout<<r1<<endl;
}
else{
    real_part = -b/(2*a);
    img_part = sqrt(-d)/(2*a);
    cout<<"real_part = "<<real_part<<endl;
    cout<<"img_part = "<<img_part<<endl;
}
    return 0;
}