#include <iostream>
#include <vector>
using namespace std;

// 6 1 7 3 6 5 6
// 3 1 2 3
// 3 2 1 -1

int sum(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        sum += nums[i];

    return sum;
}

int pivotIndex(vector<int>& nums)
{
    int leftSum = 0;
    int answer = -1;
    int totalSum = sum(nums);

    for (int pivotIndex = 0; pivotIndex < nums.size(); pivotIndex++)
    {
        leftSum += (pivotIndex > 0) ? nums[pivotIndex - 1] : 0;

        if ((totalSum - leftSum - nums[pivotIndex]) == leftSum)
        {
            answer = pivotIndex;
            break;
        }
        else
            answer = -1;
    }

    return answer;
}

int main()
{
    int n, temp;
    vector<int> input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }

    int answer = pivotIndex(input);

    cout << answer << endl;

    return 0;
}