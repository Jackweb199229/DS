#include <iostream>
using namespace std;
void fun(int n){
    if(n<=0)
    return;
    printf("gfg")
    fun(n/2);
    fun(n/2);
}
int main(){
    
    return 0;
}