#include<iostream>
using namespace std;

// Absolute difference 
// 1    4
//   2
// 5    3
//  absolute difference is (1+2+3)-(4+2+5) = 5

int main()
{
    int i,j,n,suml = 0, sumr = 0;
    cin>>n;
    int a[n][n];
for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin>>a[i][j];
            
        }
        
    }


    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==j)
            {
             suml = suml + a[i][j];   
                
            }
            if (j==(n+1)-i)
            {
             sumr = sumr + a[i][j];   
                
            }
            
        }
        
    }
    

    cout<<"Absolute difference is "<<sumr-suml<<endl;
    
return 0;
}