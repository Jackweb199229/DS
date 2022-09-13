#include<bits/stdc++.h>
using namespace std;
// NAIVE SOLUTION
int maxprofit(int price[], int start, int end){
    if(end <= start)
        return 0;
    int profit=0;
    for(int i=0; i<end; i++){
        for(int j=i+1; j<=end; j++){
            if(price[j] > price[i]){
                int curr_profit = price[j]-price[i]+
                                    maxprofit(price, start,i-1)+
                                    maxprofit(price, j+1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int main(){
    int price[5] = {1,3,5,8,12};
    int start = 0, end = 5;
    cout<<maxprofit(price, start, end)<<endl;
    return 0;
}