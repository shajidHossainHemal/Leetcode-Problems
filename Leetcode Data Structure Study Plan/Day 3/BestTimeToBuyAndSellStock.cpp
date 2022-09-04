#include <iostream>
#include <climits>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int buy = 0;
    int sell = 1;
    int maxProfit = 0;
    int profit;

    while(sell < prices.size())
    {
        if(prices[buy] < prices[sell])
        {
            profit = prices[sell] - prices[buy];
            maxProfit = max(maxProfit, profit);
        }
        else
        {
            buy = sell;
        }
        sell++;
    }

    return maxProfit;
}

int main()
{
    vector<int> input;
    int n, temp;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }

    int answer = maxProfit(input);

    cout << answer << endl;

    return 0;
}

/*

6
7 1 5 3 6 4

5
7 6 4 3 1

3
2 4 1

*/