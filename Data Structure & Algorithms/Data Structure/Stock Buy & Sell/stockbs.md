# Stock Buy & Sell

## 121. Best Time to Buy and Sell Stock

- You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


- prices = {7,1,5,3,6,4}, return max profit.
- stock daybyday prize will increase or decrease


## Logic
- buy at min price and sell at max price to make maximum profit.

- in this problem we cant go backward so good approach the every day is selling day imagine. 
- find every days maximum profit than compare with global maximum.
- best buy - 7,1,5,3,6,4
- idx -> o to idx - 1
- min - value.

- selling day will start from day 1 not 0 or neg.

```c++
int maxProfit = 
for(int i = 1; i < n ; i++){
    if(price[i] > bestBuy){
        maxprofit = max(maxprofit,price[i] - bestBuy )
    }
    bestBuy = min(bestBuy,price[i])
}
```

- O(n)

## Agenda for solving 

- DP we solve qustion of stock buy and sell.


## Summary
1) Binary expo - x*n - bits
2) Stock Buy & Sell.


