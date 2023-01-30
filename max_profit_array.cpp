// time complexity O(n*n)
// program to print maximum profit from given stock
#include <iostream>
using namespace std;
  

int maxProfit(int price[], int start, int end)
{
  

    if (end <= start)
        return 0;
  
    int profit = 0;
    
    for (int i = start; i < end; i++) {
  
       
        for (int j = i + 1; j <= end; j++) {
  
          
            if (price[j] > price[i]) {
  
                
                int curr_profit
                    = price[j] - price[i]
                      + maxProfit(price, start, i - 1)
                      + maxProfit(price, j + 1, end);
  
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int main()
{

    int price [] = {40,50,70,100,30,100,500} ;  // (100-40) + (500-30) = 530

    int n = sizeof(price) / sizeof(price[0]);
  
   cout<<maxProfit(price, 0, n - 1);
  
    return 0;
}