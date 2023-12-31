/*   As the clock struck midnight on New Year's Eve, 
  Geek bid farewell to the wasted moments of 2023, 
  realizing the untapped potential of GFG's Problem of the Day.

 His 2024 resolution: Solve POTD every day.

  Eager to earn coins for GFG Merchandise, Geek faces new rules:

 Earning Coin: Geek can accumulate coins[i] by solving
 the POTD on the ith day, where 1 <= coins[i] <= 2024 and 
 the sum of coins <= 2024.
 Merchandise Eligibility: To purchase merchandise, the coins earned must be divisible
 by 20 or 24, or precisely equal to 2024.
 Geek's resolutions often fades over time. Realistically, he can only
 commit to active participation for N (where N ≤ 366) days
 Given the value of N and number of coins associated with each POTD, 
 can Geek strategically solve some (or all) POTDs to become eligible for redeeming merchandise?     */


/*
Example...

Input:
N = 8
coins = [5, 8, 9, 10, 14, 2, 3, 5]

Output: 1

Explanation:
Geek can fulfill the criteria in many ways.
One such way is to solve POTD on 4th and 5th day.
Another way is to solve POTD on 1st, 4th and 8th day */

#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        int totalSum = 0;

        for (int i = 0; i < N; i++) {
            totalSum += coins[i];
        }

        if (totalSum == 2024 || totalSum % 20 == 0 || totalSum % 24 == 0) {
            return 1;
        }

        bitset<2025> possibleSums;
        possibleSums[0] = 1;

        for (int i = 0; i < N; i++) {
            for (int j = 2024; j >= coins[i]; j--) {
                if (possibleSums[j - coins[i]]) {
                    possibleSums[j] = 1;

                    if (j == 2024 || j % 20 == 0 || j % 24 == 0) {
                        return 1;
                    }
                }
            }
        }

        return 0;
    }
    
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}