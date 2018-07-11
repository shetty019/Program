/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: prash
 *
 * Created on July 3, 2018, 11:57 PM
 */
/*
 * LEETCODE. shows the max profit you can gain.
 Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

Example 1:

Input: [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
             Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Example 2:

Input: [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
             Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are
             engaging multiple transactions at the same time. You must sell before buying again.
Example 3:

Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.
 */
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a>b) ? a:b;
}
int maxProfit(int* prices, int prizesSize)
{
    int i;
    int cur = 0, ret1 = 0, ret2=0;
    for(i=1; i<prizesSize; i++ )
    {
        cur = max(0, cur+=prices[i]-prices[i-1]);
        ret1 = max(ret1, cur);
        ret2 += max(0, prices[i]-prices[i-1]);
    }
    return max(ret1,ret2);
}
/*
int maxProfit(int* prices, int pricesSize) {
    int ans = 0;

    for (int i = 0; i < pricesSize - 1; ++i)
    {
    	if (prices[i] < prices[i + 1])
    	{
    		ans += prices[i + 1] - prices[i];
    	}
    }

    return ans;
}
*/
int main(int argc, char** argv) {
    
    int s[] = {7,1,5,3,6,4};
    
    int ret3 = maxProfit(s, 6);
    
    printf("%d", ret3);

    return (EXIT_SUCCESS);
}

