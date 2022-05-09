/*The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days. For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, the maximum profit can earn by buying on day 0, selling on day 3. Again, buy on day 4 and sell on day 6. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.*/


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

				
				int curr_profit = price[j] - price[i]
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
	int price[] = { 100, 180, 260, 310,
					40, 535, 695 };
	int n = sizeof(price) / sizeof(price[0]);

	cout << maxProfit(price, 0, n - 1);

	return 0;
}
