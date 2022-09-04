#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
    map<int, int> table;
    vector<int> answer;

    for(int i = 0; i < nums1.size(); i++)
    {
        table[nums1[i]]++;
    }

    for(int i = 0; i < nums2.size(); i++)
    {
        auto it = table.find(nums2[i]);
        if(it != table.end() and it->second > 0)
        {
            answer.push_back(nums2[i]);
            it->second--;
        }
    }
    return answer;
}

int main()
{
    vector<int> nums1, nums2;
    int n1, n2, temp;

    cin >> n1;
    for(int i = 0; i < n1; i++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }

    cin >> n2;
    for(int i = 0; i < n2; i++)
    {
        cin >> temp;
        nums2.push_back(temp);
    }

    vector<int> output = intersect(nums1, nums2);

    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

3
4 9 5
5
9 4 9 8 4

4
1 2 2 1
2
2 2

*/