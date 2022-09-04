#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> answer;
    unordered_map<int, int> mp;
    int temp;
    for(int i = 0; i < nums.size(); i++)
    {
        temp = target - nums[i];
        if (mp.find(temp) != mp.end() and mp.find(temp)->second != i)
        {
            answer.push_back(mp.find(temp)->second);
            answer.push_back(i);
            return answer;
        }   
        mp[nums[i]] = i;
    }
    return answer;
}

int main()
{
    vector<int> input;
    int n, temp, target;

    cin >> n; 
    
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }

    cin >> target;

    vector<int> output;
    output = twoSum(input, target);

    cout << output[0] << "\t" << output[1] << endl;

    return 0;
}