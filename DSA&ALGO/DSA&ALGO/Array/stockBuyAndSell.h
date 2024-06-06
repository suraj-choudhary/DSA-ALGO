//
//  stockBuyAndSell.h
//  DSA&ALGO
//
//  Created by suraj kumar on 10/04/24.
//

#ifndef stockBuyAndSell_h
#define stockBuyAndSell_h


void stockBuyAndSell(int price[], int end) {
    
    int mini = price[0];
    int maxProfit = 0;
    
    for(int i = 1; i < end; i++) {
        int cost = price[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, price[i]);
    
    }
    printf("%d ", maxProfit);
}


void stockBuyAndSellII(int price[], int start, int end) {
    if(start >= end) {
        return;
    }
    
    for(int i = 0; i < end; i++) {
        
    }
}

void stockBuyAndSellMain() {
    int price[] = {100, 180, 260, 310, 40, 535, 695 };
    int n = sizeof(price) / sizeof(price[0]);
    stockBuyAndSell(price, n);
}

#endif /* stockBuyAndSell_h */
