#include <iostream>
#include <vector>
using namespace std;

/* INPUT
9
-2 1 -3 4 -1 2 1 -5 4
*/

// Kadane's Algorithm
int maxSubArray(vector<int>& nums)
{
    int maxSoFar = INT_MIN;
    int maxEndingHere = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        maxEndingHere = maxEndingHere + nums[i];

        if(maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
        if(maxEndingHere < 0)
            maxEndingHere = 0;
    }
    return maxSoFar;
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
    
    int answer = maxSubArray(input);

    cout << answer << endl;

    return 0;
}