#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    map<int, int> table;
    bool flag = false;

    for(int i = 0; i < nums.size(); i++)
        table[nums[i]] = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        table[nums[i]]++;
        if (table[nums[i]] > 1)
            return true;
    }
    return false;
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

    if (containsDuplicate(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}